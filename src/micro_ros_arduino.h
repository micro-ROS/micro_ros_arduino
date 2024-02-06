
#ifndef MICRO_ROS_ARDUINO
#define MICRO_ROS_ARDUINO

#ifdef ARDUINO_SAMD_ZERO
// Avoid macro usage in https://github.com/eProsima/Micro-XRCE-DDS-Client/blob/66df0a6df20063d246dd638ac3d33eb2e652fab2/include/uxr/client/core/session/session.h#L97
// beacuse of https://github.com/arduino/ArduinoCore-samd/blob/0b60a79c4b194ed2e76fead95caf1bbce8960049/cores/arduino/sync.h#L28
#define synchronized synchronized
#endif
// ----------------------

#include <uxr/client/transport.h>

// In GNU C < 6.0.0 __attribute__((deprecated(msg))) is not supported for enums, used in rmw/types.h
#if __GNUC__ < 6
#define aux__attribute__(x) __attribute__(x)
#define __attribute__(x)
#endif

#include <rmw_microros/rmw_microros.h>

#if __GNUC__ < 6
#undef __attribute__
#define __attribute__(x) aux__attribute__(x)
#endif

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

#if defined(TARGET_STM32F4)

#include <Arduino.h>
#include <EthernetUdp.h>
#include <LwIP.h>
#include <STM32Ethernet.h>

#include <uxr/client/transport.h>
#include <rmw_microros/rmw_microros.h>
#include "IPAddress.h"
#endif

#ifdef ARDUINO_TEENSY41
#include <NativeEthernet.h>
#endif

#if defined(TARGET_PORTENTA_H7_M7)
#include <PortentaEthernet.h>
#endif

#if defined(TARGET_STM32F4) || defined(ARDUINO_TEENSY41)  || defined(TARGET_PORTENTA_H7_M7)
extern "C" bool arduino_native_ethernet_udp_transport_open(struct uxrCustomTransport * transport);
extern "C" bool arduino_native_ethernet_udp_transport_close(struct uxrCustomTransport * transport);
extern "C" size_t arduino_native_ethernet_udp_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
extern "C" size_t arduino_native_ethernet_udp_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

struct micro_ros_agent_locator {
	IPAddress address;
	int port;
};

static inline void set_microros_native_ethernet_udp_transports(byte mac[], IPAddress client_ip, IPAddress agent_ip, uint16_t agent_port){

	static struct micro_ros_agent_locator locator;

   	Ethernet.begin(mac, client_ip);
	while (Ethernet.linkStatus() == LinkOFF){
		delay(100);
	}

	locator.address = agent_ip;
	locator.port = agent_port;

	rmw_uros_set_custom_transport(
		false,
		(void *) &locator,
		arduino_native_ethernet_udp_transport_open,
		arduino_native_ethernet_udp_transport_close,
		arduino_native_ethernet_udp_transport_write,
		arduino_native_ethernet_udp_transport_read
	);
}

#endif

#if defined(ESP32) || defined(TARGET_PORTENTA_H7_M7) || defined(ARDUINO_NANO_RP2040_CONNECT) || defined(ARDUINO_WIO_TERMINAL) || defined(BOARD_WITH_ESP_AT)

#if defined(ESP32) || defined(TARGET_PORTENTA_H7_M7)
#include <WiFi.h>
#include <WiFiUdp.h>
#elif defined(ARDUINO_NANO_RP2040_CONNECT)
#include <SPI.h>
#include <WiFiNINA.h>
#elif defined(ARDUINO_WIO_TERMINAL)
#include <rpcWiFi.h>
#include <WiFiUdp.h>
#elif defined(BOARD_WITH_ESP_AT)
#include <WiFiEspAT.h>
#endif

extern "C" bool arduino_wifi_transport_open(struct uxrCustomTransport * transport);
extern "C" bool arduino_wifi_transport_close(struct uxrCustomTransport * transport);
extern "C" size_t arduino_wifi_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
extern "C" size_t arduino_wifi_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);
#ifndef TARGET_PORTENTA_H7_M7
struct micro_ros_agent_locator {
	IPAddress address;
	int port;
};
#endif

static inline void set_microros_wifi_transports(char * ssid, char * pass, char * agent_ip, uint agent_port){

	#if defined(BOARD_WITH_ESP_AT)
	ESP_AT_SERIAL_PORT.begin(ESP_AT_BAUDRATE);
	while (!ESP_AT_SERIAL_PORT) {
	}
	WiFi.init(ESP_AT_SERIAL_PORT, ESP_AT_RESET_PIN);
	while (WiFi.status() == WL_NO_MODULE) {
	}
	#endif

	WiFi.begin(ssid, pass);

    while (WiFi.status() != WL_CONNECTED) {
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

#endif  // MICRO_ROS_ARDUINO
