
#ifndef MICRO_ROS_ARDUINO
#define MICRO_ROS_ARDUINO

// ---- Build fixes -----
//Removing __attribute__ not supported by gcc-arm-none-eabi-5_4
#define __attribute__(x)

#ifdef ARDUINO_SAMD_ZERO
// Avoid macro usage in https://github.com/eProsima/Micro-XRCE-DDS-Client/blob/66df0a6df20063d246dd638ac3d33eb2e652fab2/include/uxr/client/core/session/session.h#L97
// beacuse of https://github.com/arduino/ArduinoCore-samd/blob/0b60a79c4b194ed2e76fead95caf1bbce8960049/cores/arduino/sync.h#L28
#define synchronized synchronized
#endif
// ----------------------

#include <uxr/client/transport.h>
#include <rmw_uros/options.h>

extern "C" bool arduino_transport_open(struct uxrCustomTransport * transport);
extern "C" bool arduino_transport_close(struct uxrCustomTransport * transport);
extern "C" size_t arduino_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
extern "C" size_t arduino_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

static inline void set_microros_transports(){
	rmw_uros_set_custom_transport(
		true,
		NULL,
		arduino_transport_open,
		arduino_transport_close,
		arduino_transport_write,
		arduino_transport_read
	);
}

#endif  // MICRO_ROS_ARDUINO
