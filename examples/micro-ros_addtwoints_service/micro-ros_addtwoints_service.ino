#include <micro_ros_arduino.h>
#include <example_interfaces/srv/add_two_ints.h>
#include <stdio.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/int64.h>

rcl_init_options_t options;
rcl_node_options_t node_ops;
rcl_node_t node;
rclc_support_t support;
rcl_allocator_t allocator;
rclc_executor_t executor;

rcl_service_options_t service_options;
rcl_service_t service;
const rosidl_service_type_support_t * service_type_support;
rcl_wait_set_t wait_set;
rmw_request_id_t req_id;
example_interfaces__srv__AddTwoInts_Response res;
example_interfaces__srv__AddTwoInts_Request req;

const char * service_name = "/add_two_ints";

example_interfaces__srv__AddTwoInts_Request req;
example_interfaces__srv__AddTwoInts_Response res;

void service_callback(const void * req, rmw_request_id_t * req_id, void * res){
  example_interfaces__srv__AddTwoInts_Request * req_in = (example_interfaces__srv__AddTwoInts_Request *) req;
  example_interfaces__srv__AddTwoInts_Response * res_in = (example_interfaces__srv__AddTwoInts_Response *) res;

  printf("Service request value: %d + %d. Seq %d\n", (int) req_in->a, (int) req_in->b, (int) req_id->sequence_number);

  res_in->sum = req_in->a + req_in->b;
}

void setup() {
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

  unsigned int rcl_wait_timeout = 10;   // in ms
  RCCHECK(rclc_executor_set_timeout(&executor, RCL_MS_TO_NS(rcl_wait_timeout)));

  RCCHECK(rclc_executor_add_service(&executor, &service, &req, &res, service_callback));

  rclc_executor_spin(&executor);

  RCCHECK(rcl_service_fini(&service, &node));
  RCCHECK(rcl_node_fini(&node));
}


void loop() {
  delay(100);
  RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
}
