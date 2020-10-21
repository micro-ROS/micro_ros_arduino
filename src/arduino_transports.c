#include <stdio.h>
#include <stdbool.h>

#if defined(ARDUINO_TEENSY41) || defined(ARDUINO_TEENSY32)
#include "teensy_transports.c.in"
#elif defined(ARDUINO_ARCH_OPENCR)
#include "opencr_transports.c.in"
#else
#error micro-ROS Library not supported for this platform
#endif


// TODO: This should be fixed
#if defined(ARDUINO_TEENSY32)

void _write(){
}

#endif

