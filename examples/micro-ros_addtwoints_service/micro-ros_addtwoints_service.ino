#include <micro_ros_arduino.h>
#include <example_interfaces/srv/add_two_ints.h>
#include <stdio.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/int64.h>

rcl_node_t node;
rclc_support_t support;
rcl_allocator_t allocator;
rclc_executor_t executor;

rcl_service_t service;
rcl_wait_set_t wait_set;

example_interfaces__srv__AddTwoInts_Response res;
example_interfaces__srv__AddTwoInts_Request req;

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){while(1){};}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

void service_callback(const void * req, void * res){
  example_interfaces__srv__AddTwoInts_Request * req_in = (example_interfaces__srv__AddTwoInts_Request *) req;
  example_interfaces__srv__AddTwoInts_Response * res_in = (example_interfaces__srv__AddTwoInts_Response *) res;

  //printf("Service request value: %d + %d.\n", (int) req_in->a, (int) req_in->b);

  res_in->sum = req_in->a + req_in->b;
}

void setup() {
  set_microros_transports();
  delay(1000); 

  allocator = rcl_get_default_allocator();

  // create init_options
  RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

  // create node
  RCCHECK(rclc_node_init_default(&node, "add_twoints_client_rclc", "", &support));

  // create service
  RCCHECK(rclc_service_init_default(&service, &node, ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts), "/addtwoints"));

  // create executor
  RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
  RCCHECK(rclc_executor_add_service(&executor, &service, &req, &res, service_callback));
}


void loop() {
  delay(100);
  RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
}
