#include <Arduino.h>

extern "C"
{
#include <stdio.h>
#include <stdbool.h>
#include <sys/time.h>

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
    // Place here your initialization platform code
    // Return true if success
    SerialUSB.begin(115200);
    return true;
  }

  bool arduino_serial_platform_close()
  {
    // Place here your closing platform code
    // Return true if success
    return true;
  }

  size_t arduino_serial_platform_write(uint8_t *buf, size_t len, uint8_t *errcode)
  {
    // Place here your writing bytes platform code
    // Return number of bytes written
    (void)errcode;
    size_t sent = SerialUSB.write(buf, len);
    return sent;
  }

  size_t arduino_serial_platform_read(uint8_t *buf, size_t len, int timeout, uint8_t *errcode)
  {
    // Place here your reading bytes platform code
    // Return number of bytes read (max bytes: len)
    (void)errcode;
    SerialUSB.setTimeout(timeout);
    return SerialUSB.readBytes((char *)buf, len);
  }
}
