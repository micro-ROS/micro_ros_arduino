#include <Arduino.h>

extern "C"
{
#include <stdio.h>
#include <stdbool.h>
#include <sys/time.h>

  int clock_gettime(clockid_t unused, struct timespec *tp) __attribute__ ((weak));
  bool arduino_serial_platform_open() __attribute__ ((weak));
  bool arduino_serial_platform_close() __attribute__ ((weak));
  size_t arduino_serial_platform_write(uint8_t *buf, size_t len, uint8_t *errcode) __attribute__ ((weak));
  size_t arduino_serial_platform_read(uint8_t *buf, size_t len, int timeout, uint8_t *errcode) __attribute__ ((weak));

  int clock_gettime(clockid_t unused, struct timespec *tp)
  {
    (void)unused;
    uint64_t m = micros();
    tp->tv_sec = m / 1000000;
    tp->tv_nsec = (m % 1000000) * 1000;
    return 0;
  }

  bool arduino_serial_platform_open()
  {
    Serial.begin(115200);
    return true;
  }

  bool arduino_serial_platform_close()
  {
    return true;
  }

  size_t arduino_serial_platform_write(uint8_t *buf, size_t len, uint8_t *errcode)
  {
    (void)errcode;
    size_t sent = Serial.write(buf, len);
    return sent;
  }

  size_t arduino_serial_platform_read(uint8_t *buf, size_t len, int timeout, uint8_t *errcode)
  {
    (void)errcode;
    Serial.setTimeout(timeout);
    return Serial.readBytes((char *)buf, len);
  }
}
