#include <micro_ros_arduino.h>

#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <rmw_microros/rmw_microros.h>

#include <std_msgs/msg/int32.h>

#define LED_PIN 13
#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){return false;}}

rclc_support_t support;
rcl_node_t node;
rcl_timer_t timer;
rclc_executor_t executor;
rcl_allocator_t allocator;
rcl_publisher_t publisher;
std_msgs__msg__Int32 msg;
bool micro_ros_init_successful;

void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
	(void) last_call_time;
	if (timer != NULL) {
		rcl_publish(&publisher, &msg, NULL);
		msg.data++;
	}
}

// Functions create_entities and destroy_entities can take several seconds.
// In order to reduce this rebuild the library with 
// - RMW_UXRCE_ENTITY_CREATION_DESTROY_TIMEOUT=0
// - UCLIENT_MAX_SESSION_CONNECTION_ATTEMPTS=3

bool create_entities()
{	
	allocator = rcl_get_default_allocator();

	// create init_options
	RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

	// create node
	RCCHECK(rclc_node_init_default(&node, "int32_publisher_rclc", "", &support));

	// create publisher
	RCCHECK(rclc_publisher_init_best_effort(
		&publisher,
		&node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
		"std_msgs_msg_Int32"));

	// create timer,
	const unsigned int timer_timeout = 1000;
	RCCHECK(rclc_timer_init_default(
		&timer,
		&support,
		RCL_MS_TO_NS(timer_timeout),
		timer_callback));

	// create executor
	executor = rclc_executor_get_zero_initialized_executor();
	RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
	RCCHECK(rclc_executor_add_timer(&executor, &timer));

	micro_ros_init_successful = true;
}

void destroy_entities()
{
	rcl_publisher_fini(&publisher, &node);
	rcl_node_fini(&node);
	rcl_timer_fini(&timer);
	rclc_executor_fini(&executor);
	rclc_support_fini(&support);

	micro_ros_init_successful = false;
}

void setup() {
  set_microros_transports(); 
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);  

  micro_ros_init_successful = false;
  msg.data = 0;
}

void loop() {
  uint32_t delay = 100000;
  if (RMW_RET_OK == rmw_uros_ping_agent(50, 2))
  {
    delay = 500000;
    if (!micro_ros_init_successful) {
      create_entities();
    } else {
      rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));
    }
  } 
  else if (micro_ros_init_successful)
  {
    destroy_entities();
  }

  digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  delayMicroseconds(delay); 
}
