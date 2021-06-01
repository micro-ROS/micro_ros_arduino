#include <micro_ros_arduino.h>

#include <PDM.h>

#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/float32.h>

#if !defined(ARDUINO_NANO_RP2040_CONNECT)
#error This example is only avaible for Arduino Nano RP2040 Connect
#endif

short sampleBuffer[2000];
volatile int samplesRead;

rcl_publisher_t publisher;
std_msgs__msg__Float32 msg;
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
  set_microros_transports();

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);

  delay(100);

  allocator = rcl_get_default_allocator();

  // create init_options
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

  // create node
  RCCHECK(rclc_node_init_default(&node, "soundmeter_nodo", "", &support));

  // create publisher
  RCCHECK(rclc_publisher_init_default(
    &publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32),
    "decibels"));

  msg.data = 0.0;

  // init audio submodule
  PDM.onReceive(onPDMdata);
  if (!PDM.begin(1, 16000)) {
    while (1);
  }
}

double rms = 0;

void loop() {
  double local_rms = rms;

  local_rms /= samplesRead;
  double decibels = 20*log10(local_rms);

  // Clear the read count
  samplesRead = 0;
  rms = 0;

  // Publish the data
  msg.data = decibels;
  RCSOFTCHECK(rcl_publish(&publisher, &msg, NULL));

  // Wait 100 ms
  delay(100);
}

void onPDMdata() {
  int bytesAvailable = PDM.available();
  PDM.read(sampleBuffer, bytesAvailable);

  int localsamplesRead = bytesAvailable / 2;
  samplesRead += localsamplesRead;

  for (size_t i = 0; i < localsamplesRead; i++)
  {
    rms += pow(sampleBuffer[i], 2);
  }
}
