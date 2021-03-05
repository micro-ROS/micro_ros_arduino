#include <stdio.h>
#include <stdbool.h>

#if defined(ARDUINO_ARCH_OPENCR)
#include "opencr_transports.c.in"
#endif

// TODO: This should be fixed
#if defined(ARDUINO_TEENSY32) || defined(ARDUINO_TEENSY35)

void _write(){
}

#endif

