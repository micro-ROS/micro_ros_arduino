#include <Arduino.h>

extern "C"
{
  #include <stdio.h>
  #include <stdbool.h>
  #include <sys/time.h>

  int clock_gettime(clockid_t unused, struct timespec *tp) __attribute__ ((weak));
  bool arduino_transport_open(struct uxrCustomTransport * transport) __attribute__ ((weak));
  bool arduino_transport_close(struct uxrCustomTransport * transport) __attribute__ ((weak));
  size_t arduino_transport_write(struct uxrCustomTransport * transport, uint8_t *buf, size_t len, uint8_t *errcode) __attribute__ ((weak));
  size_t arduino_transport_read(struct uxrCustomTransport * transport, uint8_t *buf, size_t len, int timeout, uint8_t *errcode) __attribute__ ((weak));

  #define micro_rollover_useconds 4294967295

  int clock_gettime(clockid_t unused, struct timespec *tp)
  {
    (void)unused;
    static uint32_t rollover = 0;
    static uint64_t last_measure = 0;

    uint64_t m = micros();
    tp->tv_sec = m / 1000000;
    tp->tv_nsec = (m % 1000000) * 1000;

    // Rollover handling
    rollover += (m < last_measure) ? 1 : 0;
    uint64_t rollover_extra_us = rollover * micro_rollover_useconds;
    tp->tv_sec += rollover_extra_us / 1000000;
    tp->tv_nsec += (rollover_extra_us % 1000000) * 1000;
    last_measure = m;

    return 0;
  }

  bool arduino_transport_open(struct uxrCustomTransport * transport)
  {
    Serial.begin(115200);
    return true;
  }

  bool arduino_transport_close(struct uxrCustomTransport * transport)
  {
    Serial.end();
    return true;
  }

  size_t arduino_transport_write(struct uxrCustomTransport * transport, uint8_t *buf, size_t len, uint8_t *errcode)
  {
    (void)errcode;
    size_t sent = Serial.write(buf, len);
    return sent;
  }

  size_t arduino_transport_read(struct uxrCustomTransport * transport, uint8_t *buf, size_t len, int timeout, uint8_t *errcode)
  {
    (void)errcode;
    Serial.setTimeout(timeout);
    return Serial.readBytes((char *)buf, len);
  }
}
