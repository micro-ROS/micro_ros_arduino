#include <stdio.h>
#include <stdbool.h>

#if defined(ARDUINO_TEENSY41) || defined(ARDUINO_TEENSY40) || defined(ARDUINO_TEENSY32)
#include "teensy_transports.c.in"
#elif defined(ARDUINO_ARCH_OPENCR)
#include "opencr_transports.c.in"
#endif

// TODO: This should be fixed
#if defined(ARDUINO_TEENSY32)

void _write(){
}

#endif

