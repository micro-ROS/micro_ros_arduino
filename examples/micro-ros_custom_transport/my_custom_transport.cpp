#include <Arduino.h>

// This is a working example of how to use micro-ROS with user defined transports.
// These functions should be filled with custom transport code and they will replace
// the weak functions defined in the custom transport in the library.

extern "C"
{
#include <stdio.h>
#include <stdbool.h>
#include <sys/time.h>

  bool arduino_serial_platform_open()
  {
    // Place here your initialization platform code
    // Return true if success
    Serial2.begin(115200);
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
    size_t sent = Serial2.write(buf, len);
    return sent;
  }

  size_t arduino_serial_platform_read(uint8_t *buf, size_t len, int timeout, uint8_t *errcode)
  {
    // Place here your reading bytes platform code
    // Return number of bytes read (max bytes: len)
    (void)errcode;
    Serial2.setTimeout(timeout);
    return Serial2.readBytes((char *)buf, len);
  }
}
