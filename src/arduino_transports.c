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

void usleep(uint32_t usec){
    delay(usec/1000);
}

// Fake functions
int mkdir(const char * abs_path, uint32_t mode){
    return 0;
}

void _write(){
}

#endif

