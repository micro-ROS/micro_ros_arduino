
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
#include <rmw_microros/rmw_microros.h>

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

#if defined(TARGET_PORTENTA_H7_M7) || defined(ARDUINO_NANO_RP2040_CONNECT)

#if defined(TARGET_PORTENTA_H7_M7)
#include <WiFi.h>
#include <WiFiUdp.h>
#else defined(ARDUINO_NANO_RP2040_CONNECT)
#include <SPI.h>
#include <WiFiNINA.h>
#endif

extern "C" bool arduino_wifi_transport_open(struct uxrCustomTransport * transport);
extern "C" bool arduino_wifi_transport_close(struct uxrCustomTransport * transport);
extern "C" size_t arduino_wifi_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
extern "C" size_t arduino_wifi_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

struct micro_ros_agent_locator {
	IPAddress address;
	int port;
};

static inline void set_microros_wifi_transports(char * ssid, char * pass, char * agent_ip, uint agent_port){
	while (WiFi.begin(ssid, pass) != WL_CONNECTED)
	{
    	delay(500);
	}

	static struct micro_ros_agent_locator locator;
	locator.address.fromString(agent_ip);
	locator.port = agent_port;

	rmw_uros_set_custom_transport(
		false,
		(void *) &locator,
		arduino_wifi_transport_open,
		arduino_wifi_transport_close,
		arduino_wifi_transport_write,
		arduino_wifi_transport_read
	);
}

#endif

#ifdef ARDUINO_TEENSY41

#include <SPI.h>
#include <NativeEthernet.h>

extern "C" bool arduino_native_ethernet_udp_transport_open(struct uxrCustomTransport * transport);
extern "C" bool arduino_native_ethernet_udp_transport_close(struct uxrCustomTransport * transport);
extern "C" size_t arduino_native_ethernet_udp_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
extern "C" size_t arduino_native_ethernet_udp_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

struct micro_ros_agent_locator {
	IPAddress address;
	int port;
};

/**
  * Base Native Ethernet implementation which could be handy if TCP becomes supported by micro-Ros in the future
  * as this code would be general to both TCP and UDP implementations
  */
static micro_ros_agent_locator set_microros_native_ethernet_transports(byte mac[],IPAddress fallback_client_ip, IPAddress agent_ip , uint agent_port ) {
    int eStatus = Ethernet.begin(mac);

	if ( eStatus == 0) {
    	// Check for Ethernet hardware present
    	if (Ethernet.hardwareStatus() == EthernetNoHardware) {
      		while (true) {
        		delay(1); // do nothing, no point running without Ethernet hardware
      		}
    	}
    	if (Ethernet.linkStatus() == LinkOFF) {
            // No ethernet link detected
   		}

    	// try to congifure using IP address instead of DHCP:
   		Ethernet.begin(mac, fallback_client_ip);
  	} else {
		// DHCP assigned IP could be found with: Ethernet.localIP();
  	}

	delay(1000);

	static struct micro_ros_agent_locator locator;
	locator.address = agent_ip;
	locator.port = agent_port;

	return locator;
}

static inline void set_microros_native_ethernet_udp_transports(byte mac[], IPAddress fallback_client_ip, IPAddress agent_ip, uint agent_port){

	static struct micro_ros_agent_locator locator;
	locator = set_microros_native_ethernet_transports(mac, fallback_client_ip, agent_ip, agent_port );

	rmw_uros_set_custom_transport(
		false,
		(void *) &locator,
		arduino_native_ethernet_udp_transport_open,
		arduino_native_ethernet_udp_transport_close,
		arduino_native_ethernet_udp_transport_write,
		arduino_native_ethernet_udp_transport_read
	);
}

#endif // ARDUINO_TEENSY41

#endif  // MICRO_ROS_ARDUINO
