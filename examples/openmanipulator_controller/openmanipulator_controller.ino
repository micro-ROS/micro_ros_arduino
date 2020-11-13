
#include <open_manipulator_libs.h>
#include <micro_ros_arduino.h>

#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl_action/rcl_action.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

extern "C" {
#include "message_init_utilities.h"
}

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){while(1){}}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

OpenManipulator open_manipulator;

// micro-ROS variables
rcl_allocator_t allocator;
rclc_support_t support;
rcl_node_t node;
rclc_executor_t executor;
rcl_timer_t timer;
rcl_publisher_t joint_state_publisher;
rcl_subscription_t joint_trajectory_subscriber;

sensor_msgs__msg__JointState * join_states_msg;
trajectory_msgs__msg__JointTrajectory * joint_trajectory_msg;

void join_trajectory_callback(const void * msgin){
  trajectory_msgs__msg__JointTrajectory * ros_msg = (trajectory_msgs__msg__JointTrajectory *) msgin;
  
  std::vector<double> positions;
  for (size_t i = 0; i < 4; i++)
  {
    // positions[i] += 0.01 * ros_msg->points.data[0].velocities.data[i];
    positions.push_back(ros_msg->points.data[0].velocities.data[i]);
  }
  
  open_manipulator.makeJointTrajectory(positions, 0.2);
  // positions[3] = 2.22;
  
}

void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{  
  RCLC_UNUSED(last_call_time);
  if (timer != NULL) {
    for (size_t i = 0; i < 4; i++)
    {
      join_states_msg->position.data[i] = open_manipulator.getJointValue(join_states_msg->name.data[i].data).position;
      join_states_msg->velocity.data[i] = open_manipulator.getJointValue(join_states_msg->name.data[i].data).velocity;
      join_states_msg->effort.data[i] = open_manipulator.getJointValue(join_states_msg->name.data[i].data).effort;
    }
    join_states_msg->position.size = 4;
    join_states_msg->velocity.size = 4;
    join_states_msg->effort.size = 4;
    rcl_publish(&joint_state_publisher, join_states_msg, NULL);
  }
}

extern "C" void printDebug(char str[]){
      Serial1.println(str);

}

extern "C" void printDebugnl(char str[]){
      Serial1.print(str);

}

void setup()
{  
  open_manipulator.initOpenManipulator(true);

  Serial1.begin(115200);
  allocator = rcl_get_default_allocator();
  // create init_options
  rclc_support_init(&support, 0, NULL, &allocator);

  // create node
  node = rcl_get_zero_initialized_node();
  RCCHECK(rclc_node_init_default(&node, "open_manipulator_node", "", &support));
  Serial1.println("NODE");

  // create publisher
  RCCHECK(rclc_publisher_init_default(
    &joint_state_publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, JointState),
    "/joint_states"));
    Serial1.println("PUB");

  // create subscriber
  RCCHECK(rclc_subscription_init_best_effort(
    &joint_trajectory_subscriber,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(trajectory_msgs, msg, JointTrajectory),
    "/open_manipulator/joint_trajectory"));
  
  Serial1.println("SUBS");

  // create timer,
  timer = rcl_get_zero_initialized_timer();
  const unsigned int timer_timeout = 10;
  RCCHECK(rclc_timer_init_default(
    &timer,
    &support,
    RCL_MS_TO_NS(timer_timeout),
    timer_callback));
  Serial1.println("TIMER");

  // Creating messages
  joint_trajectory_msg = create_joint_trajectory_msg();
  join_states_msg = create_joint_states_message();
  Serial1.println("MGSG");

  // create executor
  executor = rclc_executor_get_zero_initialized_executor();
  rclc_executor_init(&executor, &support.context, 3, &allocator);
  Serial1.println("EXE");

  unsigned int rcl_wait_timeout = 10;   // in ms
  rclc_executor_set_timeout(&executor, RCL_MS_TO_NS(rcl_wait_timeout));
	rclc_executor_add_subscription(&executor, &joint_trajectory_subscriber, joint_trajectory_msg, &join_trajectory_callback, ON_NEW_DATA);
  rclc_executor_add_timer(&executor, &timer);
   Serial1.println("SETUPDONE");

}

void loop()
{ 
  // Serial1.println("SPIN");

  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(20));
  open_manipulator.processOpenManipulator(millis()/1000.0);
}