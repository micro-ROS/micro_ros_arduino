#if defined(TARGET_STM32F4)

#include <Arduino.h>
#include <EthernetUdp.h>
#include <STM32Ethernet.h>
#include <micro_ros_arduino.h>

extern "C" {

#include <stdbool.h>
#include <stdio.h>
#include <sys/time.h>

static EthernetUDP udp_client;

bool arduino_native_ethernet_udp_transport_open(
    struct uxrCustomTransport *transport) {
  struct micro_ros_agent_locator *locator =
      (struct micro_ros_agent_locator *)transport->args;
  udp_client.begin(locator->port);
  return true;
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

  udp_client.beginPacket(locator->address, locator->port);
  size_t sent = udp_client.write(buf, len);
  udp_client.endPacket();
  udp_client.flush();

  return sent;
}

size_t arduino_native_ethernet_udp_transport_read(
    struct uxrCustomTransport *transport, uint8_t *buf, size_t len, int timeout,
    uint8_t *errcode) {
  (void)errcode;
  uint32_t start_time = millis();

  while (millis() - start_time < ((uint32_t)timeout) &&
         udp_client.parsePacket() == 0) {
    delay(1);
  }

  size_t readed = udp_client.read(buf, len);
  return (readed < 0) ? 0 : readed;
}

#define micro_rollover_useconds 4294967295

int clock_gettime(clockid_t unused, struct timespec *tp) {
  (void)unused;
  static uint32_t rollover = 0;
  static uint32_t last_measure = 0;

  uint32_t m = micros();
  rollover += (m < last_measure) ? 1 : 0;

  uint64_t real_us = (uint64_t)(m + rollover * micro_rollover_useconds);
  tp->tv_sec = real_us / 1000000;
  tp->tv_nsec = (real_us % 1000000) * 1000;
  last_measure = m;

  return 0;
}

}

#endif