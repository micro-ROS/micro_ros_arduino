#include <micro_ros_arduino.h>
#include <example_interfaces/srv/add_two_ints.h>
#include <stdio.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/int64.h>

// ros:
rcl_init_options_t options;
rcl_node_options_t node_ops;
rcl_node_t node;
rclc_support_t support;
rcl_allocator_t allocator;
rclc_executor_t executor;

// service:
rcl_service_options_t service_options;
rcl_service_t serv;
const rosidl_service_type_support_t * service_type_support;
rcl_wait_set_t wait_set;
rmw_request_id_t req_id;
example_interfaces__srv__AddTwoInts_Response res;
example_interfaces__srv__AddTwoInts_Request req;

const char * service_name = "/add_two_ints";

void setup() {
 delay(1000); 

 allocator = rcl_get_default_allocator();

 options = rcl_get_zero_initialized_init_options();
 rcl_init_options_init(&options, rcl_get_default_allocator());

 rclc_support_init(&support, 0, NULL, &allocator);

 node_ops = rcl_node_get_default_options();
 node = rcl_get_zero_initialized_node();
 rclc_node_init_default(&node, "micro_ros_service_server_node", "", &support);

 // init server
 service_options = rcl_service_get_default_options();
 serv = rcl_get_zero_initialized_service();
 service_type_support = ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts);
 rcl_service_init(&serv, &node, service_type_support, service_name, &service_options);
 wait_set = rcl_get_zero_initialized_wait_set();
 rcl_wait_set_init(&wait_set, 0, 0, 0, 1, 1, 0, &support.context, rcl_get_default_allocator());

 executor = rclc_executor_get_zero_initialized_executor();
 rclc_executor_init(&executor, &support.context, 1, &allocator);
}


void loop() {
 delay(100);
 rcl_wait_set_clear(&wait_set);

 size_t index;
 rcl_wait_set_add_service(&wait_set, &serv, &index);

 custom_print("Looping");
 
 rcl_wait(&wait_set, RCL_MS_TO_NS(100));
 for (size_t i = 0; i < wait_set.size_of_services; i++) {
   if (wait_set.services[i]) {
    custom_print("Service found");

     example_interfaces__srv__AddTwoInts_Request__init(&req);

     rcl_take_request(&serv, &req_id, &req);

     example_interfaces__srv__AddTwoInts_Response__init(&res);

     res.sum = req.a + req.b;
      custom_print("Calling rcl_send_response");
     rcl_send_response(&serv, &req_id, &res);
      
   }
 }
}
