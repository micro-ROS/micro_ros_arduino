#if defined(TARGET_STM32F4)

#include <Arduino.h>
#include <EthernetUdp.h>
#include <STM32Ethernet.h>
#include <micro_ros_arduino.h>
#endif

#ifdef ARDUINO_TEENSY41
#include <NativeEthernet.h>
#include <micro_ros_arduino.h>
#endif
#ifdef TARGET_PORTENTA_H7_M7
#include <Arduino.h>
#include <EthernetUdp.h>
#include <micro_ros_arduino.h>
#endif

#if defined(TARGET_STM32F4) || defined(ARDUINO_TEENSY41) || defined(TARGET_PORTENTA_H7_M7)
extern "C" {

#include <stdbool.h>
#include <stdio.h>
#include <sys/time.h>

static EthernetUDP udp_client;

bool arduino_native_ethernet_udp_transport_open(
    struct uxrCustomTransport *transport) {
  struct micro_ros_agent_locator *locator =
      (struct micro_ros_agent_locator *)transport->args;
  return 1 == udp_client.begin(locator->port);
}

bool arduino_native_ethernet_udp_transport_close(
    struct uxrCustomTransport *transport) {
  udp_client.stop();
  return true;
}

size_t arduino_native_ethernet_udp_transport_write(
    struct uxrCustomTransport *transport, const uint8_t *buf, size_t len,
    uint8_t *errcode) {
  (void)errcode;
  struct micro_ros_agent_locator *locator =
      (struct micro_ros_agent_locator *)transport->args;

  size_t sent = 0;
  if(1 == udp_client.beginPacket(locator->address, locator->port)){
    sent = udp_client.write(buf, len);
    udp_client.endPacket();
  }

  udp_client.flush();

  return sent;
}

size_t arduino_native_ethernet_udp_transport_read(
    struct uxrCustomTransport *transport, uint8_t *buf, size_t len, int timeout,
    uint8_t *errcode) {
  (void)errcode;

  int64_t start_time = uxr_millis();

  while ((uxr_millis() - start_time) < ((int64_t)timeout) && udp_client.parsePacket() == 0) {
    delay(1);
  }

  size_t available = 0;
  if(udp_client.available()){
    available = udp_client.read(buf, len);
  }
  return (available < 0) ? 0 : available;
}
}

#endif
