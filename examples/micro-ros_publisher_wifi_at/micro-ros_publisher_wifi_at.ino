// To use "ESP-AT External WiFi module"(hereinafter called "ESP-AT") with your board, install "WiFiEspAT" from Library Manager.
// See https://www.espressif.com/en/products/sdks/esp-at/overview for more details about ESP-AT.

#define BOARD_WITH_ESP_AT
// Configurations about communication between Host MCU and ESP-AT.
// In most cases, you would burn ESP-AT firmware v2 or later. And you should uncomment "#define WIFIESPAT1" in EspAtDrvTypes.h
// See https://github.com/JAndrassy/WiFiEspAT/tree/7f398e14f331fc845c4af671f1946fe3f29a744f#getting-started for more details.
#define ESP_AT_SERIAL_PORT Serial1 // Serial port object to ESP-AT
#define ESP_AT_BAUDRATE 115200 // Baudrate setting in ESP-AT firmware(default is 115200)
#define ESP_AT_RESET_PIN -1 // GPIO_PIN connected to ESP-AT's reset pin(-1 means not to use hardware reset)

#include <micro_ros_arduino.h>

#include <wifi_transport.cpp>

#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/int32.h>

#if defined(ESP32) || defined(TARGET_PORTENTA_H7_M7) || defined(ARDUINO_NANO_RP2040_CONNECT) || defined(ARDUINO_WIO_TERMINAL)
#define BOARD_HAS_NATIVE_WIFI
#endif

#if defined(BOARD_HAS_NATIVE_WIFI)
#error This example is not available for boards that have native WiFi.
#endif

rcl_publisher_t publisher;
std_msgs__msg__Int32 msg;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

#define LED_PIN 13

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}


void error_loop(){
  while(1){
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    delay(100);
  }
}

void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  RCLC_UNUSED(last_call_time);
  if (timer != NULL) {
    RCSOFTCHECK(rcl_publish(&publisher, &msg, NULL));
    msg.data++;
  }
}

void setup() {
  set_microros_wifi_transports("WIFI SSID", "WIFI PASS", "192.168.1.57", 8888);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);

  delay(2000);

  allocator = rcl_get_default_allocator();

  //create init_options
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

  // create node
  RCCHECK(rclc_node_init_default(&node, "micro_ros_arduino_wifi_node", "", &support));

  // create publisher
  RCCHECK(rclc_publisher_init_best_effort(
    &publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
    "topic_name"));

  msg.data = 0;
}

void loop() {
    RCSOFTCHECK(rcl_publish(&publisher, &msg, NULL));
    msg.data++;
}
