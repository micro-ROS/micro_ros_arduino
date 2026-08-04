#include <Arduino.h>

#if defined(CONFIG_IDF_TARGET_ESP32)

#include <BluetoothSerial.h>
#include <micro_ros_arduino.h>

extern "C"
{

  static BluetoothSerial bluetooth_client;

  bool arduino_bluetooth_transport_open(struct uxrCustomTransport * transport)
  {
    struct micro_ros_bluetooth_params * params =
      (struct micro_ros_bluetooth_params *) transport->args;

    return bluetooth_client.begin(params->device_name);
  }

  bool arduino_bluetooth_transport_close(struct uxrCustomTransport * transport)
  {
    (void) transport;
    bluetooth_client.end();
    return true;
  }

  size_t arduino_bluetooth_transport_write(
    struct uxrCustomTransport * transport,
    const uint8_t *buf,
    size_t len,
    uint8_t *errcode)
  {
    (void) transport;
    (void) errcode;

    size_t sent = bluetooth_client.write(buf, len);
    bluetooth_client.flush();

    return sent;
  }

  size_t arduino_bluetooth_transport_read(
    struct uxrCustomTransport * transport,
    uint8_t *buf,
    size_t len,
    int timeout,
    uint8_t *errcode)
  {
    (void) transport;
    (void) errcode;

    bluetooth_client.setTimeout(timeout);
    return bluetooth_client.readBytes((char *)buf, len);
  }
}

#endif
