#if defined(ESP32) || defined(TARGET_PORTENTA_H7_M7) || defined(ARDUINO_NANO_RP2040_CONNECT) || defined(ARDUINO_WIO_TERMINAL) || defined(BOARD_WITH_ESP_AT)
#include <Arduino.h>


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

#include <micro_ros_arduino.h>

extern "C"
{

  static WiFiUDP udp_client;

  bool arduino_wifi_transport_open(struct uxrCustomTransport * transport)
  {
    struct micro_ros_agent_locator * locator = (struct micro_ros_agent_locator *) transport->args;
    udp_client.begin(locator->port);
    return true;
  }

  bool arduino_wifi_transport_close(struct uxrCustomTransport * transport)
  {
    udp_client.stop();
    return true;
  }

  size_t arduino_wifi_transport_write(struct uxrCustomTransport * transport, const uint8_t *buf, size_t len, uint8_t *errcode)
  {
    (void)errcode;
    struct micro_ros_agent_locator * locator = (struct micro_ros_agent_locator *) transport->args;

    udp_client.beginPacket(locator->address, locator->port);
    size_t sent = udp_client.write(buf, len);
    udp_client.endPacket();
    udp_client.flush();

    return sent;
  }

  size_t arduino_wifi_transport_read(struct uxrCustomTransport * transport, uint8_t *buf, size_t len, int timeout, uint8_t *errcode)
  {
    (void) errcode;

    uint32_t start_time = millis();

    while(millis() - start_time < timeout && udp_client.parsePacket() == 0){
      delay(1);
    }

    int readed  = udp_client.read(buf, len);

    return (readed < 0) ? 0 : readed;
  }
}

#endif

