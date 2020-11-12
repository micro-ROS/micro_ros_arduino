#include <stdio.h>
#include <stdbool.h>

#if defined(ARDUINO_TEENSY41) || defined(ARDUINO_TEENSY40) || defined(ARDUINO_TEENSY32) || defined(ARDUINO_TEENSY35)
#include "teensy_transports.c.in"
#elif defined(ARDUINO_ARCH_OPENCR)
#include "opencr_transports.c.in"
#elif defined(ARDUINO_PORTENTA_H7_M7) || defined(ARDUINO_PORTENTA_H7_M4)
#include "portenta_transports.c.in"
#else
#error micro-ROS Library not supported for this platform
#endif

// TODO: This should be fixed
#if defined(ARDUINO_TEENSY32) || defined(ARDUINO_TEENSY35)

void _write(){
}

#endif

