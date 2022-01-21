#if defined(ESP32) && defined(HUSARNET)
#include <Arduino.h>
#include <Husarnet.h>
#include <HusarnetClient.h>
#include <micro_ros_arduino.h>

extern "C" {

static HusarnetClient client;

bool arduino_husarnet_transport_open(struct uxrCustomTransport *transport) {
  struct micro_ros_agent_locator *locator =
      (struct micro_ros_agent_locator *)transport->args;


  /* Try to connect to a server on port 8888 on your laptop */
  if (!client.connect(locator->hostname, locator->port)) {
    return false;
  }

  return true;
}

bool arduino_husarnet_transport_close(struct uxrCustomTransport *transport) {
  client.stop();
  return true;
}

size_t arduino_husarnet_transport_write(struct uxrCustomTransport *transport,
                                        const uint8_t *buf, size_t len,
                                        uint8_t *errcode) {
  (void)errcode;

  // As we are using a TCP stream connection we should indicate the size of the message with the first two bytes of the stream.
  static uint8_t buffer_size[2];
  buffer_size[0] = (uint8_t)(0x00FF & len);
  buffer_size[1] = (uint8_t)((0xFF00 & len) >> 8);
  size_t sent = client.write(buffer_size, 2);

  // Then we send the payload
  if (sent == 2) {
    sent = client.write(buf, len);
  } else {
    sent = 0;
  }

  return sent;
}

// Sample state machine for receiving data
typedef enum {
  STATE_WAIT_FOR_SIZE = 0,
  STATE_WAIT_FOR_DATA,
  STATE_MESSAGE_AVAILABLE
} husarnet_tcp_states_t;

typedef struct {
  uint8_t buffer[UXR_CONFIG_CUSTOM_TRANSPORT_MTU];

  uint8_t length_buffer[2];

  uint16_t message_size;
  uint16_t message_size_received;

  husarnet_tcp_states_t state;
} husarnet_tcp_receiver_t;

static husarnet_tcp_receiver_t receiver = {};

void read_tcp_data(husarnet_tcp_receiver_t & r) {
  switch(r.state) {
    case STATE_WAIT_FOR_SIZE:
      if (client.available() >= 2)
      {
        client.read(r.length_buffer, 2);
        r.message_size = (r.length_buffer[0] | (r.length_buffer[1] << 8));
        r.message_size_received = 0;
        r.state = STATE_WAIT_FOR_DATA;
      }
      break;
    case STATE_WAIT_FOR_DATA:
      if(client.available())
      {
        size_t to_read = (r.message_size - r.message_size_received) < client.available() ? r.message_size - r.message_size_received : client.available();
        size_t readed = client.read(&r.buffer[r.message_size_received], to_read);
        r.message_size_received += readed;
        if(r.message_size_received == r.message_size){
          r.state = STATE_MESSAGE_AVAILABLE;
        }
      }
      break;
    case STATE_MESSAGE_AVAILABLE:
      break;
  }
}

size_t arduino_husarnet_transport_read(struct uxrCustomTransport *transport,
                                       uint8_t *buf, size_t len, int timeout,
                                       uint8_t *errcode) {
  (void)errcode;

  client.setTimeout(timeout);

  do
  {
    int64_t time_init = uxr_millis();
    read_tcp_data(receiver);
    timeout -= (int)(uxr_millis() - time_init);
  }
  while ((STATE_MESSAGE_AVAILABLE != receiver.state) && (0 < timeout));

  if (STATE_MESSAGE_AVAILABLE == receiver.state)
  {
    size_t readed = receiver.message_size;
    memcpy(buf, receiver.buffer, readed);
    receiver.state = STATE_WAIT_FOR_SIZE;
    return readed;
  }
  else
  {
    return 0;
  }
}

}

#endif
