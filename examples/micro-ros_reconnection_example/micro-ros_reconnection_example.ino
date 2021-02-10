#include <micro_ros_arduino.h>

#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <rmw_uros/options.h>

#include <std_msgs/msg/int32.h>

rcl_publisher_t publisher;
std_msgs__msg__Int32 msg;
rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t timer;

#define LED_PIN 13

bool micro_ros_should_fini = false;
bool micro_ros_init_successful = false;

void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{  
  RCLC_UNUSED(last_call_time);
  RCLC_UNUSED(timer);
  rmw_ret_t rc = rmw_uros_ping_agent(10, 1);
  if ( rc == RMW_RET_OK) {
    rcl_publish(&publisher, &msg, NULL);
    msg.data++;
  }else{
    micro_ros_should_fini = true;
  }
}

// CAUTION: this function can take some seconds to return
// This time can be configured in colcon.meta using:
// "microxrcedds_client": {
//     "cmake-args": [
//         ...
//         "-DUCLIENT_MAX_SESSION_CONNECTION_ATTEMPTS=1",
//         "-DUCLIENT_MIN_SESSION_CONNECTION_INTERVAL=25",
//         ...
//     ]}
bool init_micro_ros(){
  if (micro_ros_should_fini){
    fini_micro_ros();
    micro_ros_should_fini = false;
  }
  
  rcl_ret_t rc;
  allocator = rcl_get_default_allocator();

  //create init_options
  rc = rclc_support_init(&support, 0, NULL, &allocator);
  if (rc != RCL_RET_OK){ return false; }
  
  // create node
  rc = rclc_node_init_default(&node, "micro_ros_arduino_node", "", &support);
  if (rc != RCL_RET_OK){ return false; }

  // create publisher
  rc = rclc_publisher_init_best_effort(
    &publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
    "micro_ros_arduino_node_publisher");
  if (rc != RCL_RET_OK){ return false; }

  // create timer,
  const unsigned int timer_timeout = 1000;
  rc = rclc_timer_init_default(
    &timer,
    &support,
    RCL_MS_TO_NS(timer_timeout),
    timer_callback);
  if (rc != RCL_RET_OK){ return false; }

  // create executor
  rc = rclc_executor_init(&executor, &support.context, 1, &allocator);
  if (rc != RCL_RET_OK){ return false; }

  rc = rclc_executor_add_timer(&executor, &timer);
  if (rc != RCL_RET_OK){ return false; }

  return true;
}

// CAUTION: this function can take some seconds to return
void fini_micro_ros(){
  rcl_publisher_fini(&publisher, &node);
  rcl_node_fini(&node);
  rcl_timer_fini(&timer);
  rclc_executor_fini(&executor);
  rclc_support_fini(&support);
  rcl_shutdown(&support.context);
}

void setup() {
  set_microros_transports(); 
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);  

  micro_ros_init_successful = false;
  msg.data = 0;
}

void loop() {
  if(micro_ros_init_successful && !micro_ros_should_fini){
    rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
  } else {
    micro_ros_init_successful = init_micro_ros();
  } 
  
  delayMicroseconds(500);
  digitalWrite(LED_PIN, !digitalRead(LED_PIN));
}
