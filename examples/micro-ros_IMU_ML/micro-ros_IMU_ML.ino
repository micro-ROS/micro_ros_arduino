#include <micro_ros_arduino.h>

#include "LSM6DSOXSensor.h"
#include "lsm6dsox_activity_recognition_for_mobile.h"

#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <micro_ros_utilities/type_utilities.h>
#include <micro_ros_utilities/string_utilities.h>

#include <std_msgs/msg/int32.h>
#include <std_msgs/msg/string.h>

#if !defined(ARDUINO_NANO_RP2040_CONNECT)
#error This example is only avaible for Arduino Nano RP2040 Connect
#endif

rcl_publisher_t string_publisher;
rcl_publisher_t pedometer_publisher;
std_msgs__msg__String string_msg;
std_msgs__msg__Int32 pedometer_msg;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

#define LED_PIN 13

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

//Interrupts.
volatile int mems_event = 0;

// Components
LSM6DSOXSensor AccGyr(&Wire, LSM6DSOX_I2C_ADD_L);

// MLC
ucf_line_t *ProgramPointer;
int32_t LineCounter;
int32_t TotalNumberOfLine;

void error_loop(){
  while(1){
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    delay(100);
  }
}

void setup() {
  set_microros_wifi_transports("WIFI SSID", "WIFI PASS", "192.168.1.57", 8888);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);

  delay(100);

  allocator = rcl_get_default_allocator();

  // create init_options
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

  // create node
  RCCHECK(rclc_node_init_default(&node, "IMU_node", "", &support));

  // create publisher
  RCCHECK(rclc_publisher_init_default(
    &string_publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String),
    "detection"));

  // create publisher
  RCCHECK(rclc_publisher_init_default(
    &pedometer_publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
    "pedometer"));

  micro_ros_utilities_create_message_memory(
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String),
    &string_msg,
    (micro_ros_utilities_memory_conf_t) {}
  );

  // Init IMU core
  Wire.begin();

  AccGyr.begin();
  AccGyr.Enable_X();
  AccGyr.Enable_G();

  ProgramPointer = (ucf_line_t *)lsm6dsox_activity_recognition_for_mobile;
  TotalNumberOfLine = sizeof(lsm6dsox_activity_recognition_for_mobile) / sizeof(ucf_line_t);

  for (LineCounter=0; LineCounter<TotalNumberOfLine; LineCounter++) {
    AccGyr.Write_Reg(ProgramPointer[LineCounter].address, ProgramPointer[LineCounter].data);
  }

  AccGyr.Enable_Pedometer();

  //Interrupts.
  pinMode(INT_IMU, INPUT);
  attachInterrupt(INT_IMU, INT1Event_cb, RISING);
}

void INT1Event_cb() {
  mems_event = 1;
}


void loop() {

  if (mems_event) {
    mems_event=0;

    LSM6DSOX_MLC_Status_t status;
    AccGyr.Get_MLC_Status(&status);

    LSM6DSOX_Event_Status_t event_status;
    AccGyr.Get_X_Event_Status(&event_status);

    if (status.is_mlc1) {
      uint8_t mlc_out[8];
      AccGyr.Get_MLC_Output(mlc_out);

      switch(mlc_out[0]) {
        case 0:
          string_msg.data = micro_ros_string_utilities_set(string_msg.data, "Stationary");
          break;
        case 1:
          string_msg.data = micro_ros_string_utilities_set(string_msg.data, "Walking");
          break;
        case 4:
          string_msg.data = micro_ros_string_utilities_set(string_msg.data, "Jogging");
          break;
        case 8:
          string_msg.data = micro_ros_string_utilities_set(string_msg.data, "Biking");
          break;
        case 12:
          string_msg.data = micro_ros_string_utilities_set(string_msg.data, "Driving");
          break;
        default:
          string_msg.data = micro_ros_string_utilities_set(string_msg.data, "Unknown");
          break;
      }
      RCSOFTCHECK(rcl_publish(&string_publisher, &string_msg, NULL));
    }

    if (event_status.StepStatus)
    {
      uint16_t step_count = 0;
      AccGyr.Get_Step_Count(&step_count);
      pedometer_msg.data = step_count;
      RCSOFTCHECK(rcl_publish(&pedometer_publisher, &pedometer_msg, NULL));
    }
  }
}
