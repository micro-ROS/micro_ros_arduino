
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

OpenManipulator open_manipulator;

// micro-ROS variables
rcl_allocator_t allocator;
rclc_support_t support;
rcl_node_t node;
rcl_action_server_t follow_joint_trajectory_server;
rclc_executor_t executor;
rcl_timer_t timer;
rcl_publisher_t joint_state_publisher;

bool processing_goal = false;
bool result_requested = false;

control_msgs__action__FollowJointTrajectory_SendGoal_Request * goal_request;
control_msgs__action__FollowJointTrajectory_GetResult_Request * result_request;
control_msgs__action__FollowJointTrajectory_FeedbackMessage * feedback;
control_msgs__action__FollowJointTrajectory_GetResult_Response * result_response;

rcl_action_goal_info_t goal_info;
rmw_request_id_t request_header;
rcl_action_goal_handle_t * goal_handle;

sensor_msgs__msg__JointState * join_states_msg;

void goal_callback(const void * msg, rmw_request_id_t * request){
  control_msgs__action__FollowJointTrajectory_SendGoal_Request * ros_msg = (control_msgs__action__FollowJointTrajectory_SendGoal_Request * ) msg;

  control_msgs__action__FollowJointTrajectory_SendGoal_Response ros_goal_response;
  ros_goal_response.accepted = !open_manipulator.getMovingState();

  rcl_action_send_goal_response(&follow_joint_trajectory_server, request, &ros_goal_response);

  if (ros_goal_response.accepted) {

    processing_goal = true;
    
    // Accept goal
    goal_info.goal_id = ros_msg->goal_id;
    goal_handle = rcl_action_accept_new_goal(&follow_joint_trajectory_server, &goal_info);

    rcl_action_update_goal_state(goal_handle, GOAL_EVENT_EXECUTE);

    rcl_action_goal_status_array_t c_status_array = rcl_action_get_zero_initialized_goal_status_array();
    rcl_action_get_goal_status_array(&follow_joint_trajectory_server, &c_status_array);
    rcl_action_publish_status(&follow_joint_trajectory_server, &c_status_array.msg);
    
    //Do the preparation
    std::vector <double> velocities;
    velocities.clear();
    std::vector <double> accelerations;
    accelerations.clear();
    std::vector <double> efforts;
    efforts.clear();
    std::vector <double> target_angle;
    target_angle.clear();
    float duration;
    
    for(uint8_t i = 0; i < 4; i++){
      //velocities.push_back(ros_msg->goal.trajectory.points.data[0].velocities.data[i]);
      //accelerations.push_back(ros_msg->goal.trajectory.points.data[0].accelerations.data[i]);
      //efforts.push_back(ros_msg->goal.trajectory.points.data[0].effort.data[i]);
      target_angle.push_back(ros_msg->goal.trajectory.points.data[0].positions.data[i]);
      duration = (float) ros_msg->goal.trajectory.points.data[0].time_from_start.sec + ((float) ros_msg->goal.trajectory.points.data[0].time_from_start.nanosec/1e9f);
      open_manipulator.makeJointTrajectory(target_angle, duration);
    }

  } else {
    //Not accepted
  }
}

void result_callback(const void * msg, rmw_request_id_t * request){
  // Prepare the result and the feedback
  if(processing_goal){
    result_requested = true;
    request_header = *request;
  }
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

void setup()
{  
  open_manipulator.initOpenManipulator(true);
  delay(2000);

  allocator = rcl_get_default_allocator();
  
  // create init_options
  rclc_support_init(&support, 0, NULL, &allocator);

  // create node
  node = rcl_get_zero_initialized_node();
  rclc_node_init_default(&node, "open_manipulator_node", "", &support);

  // create action server
  rclc_action_server_init_default(
    &follow_joint_trajectory_server,
    &node,
    &support.clock,
    ROSIDL_GET_ACTION_TYPE_SUPPORT(control_msgs, FollowJointTrajectory),
    "/followjointrajectory");

  // create publisher
  rclc_publisher_init_default(
    &joint_state_publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, JointState),
    "/join_states");

  // create timer,
  timer = rcl_get_zero_initialized_timer();
  const unsigned int timer_timeout = 1000;
  rclc_timer_init_default(
    &timer,
    &support,
    RCL_MS_TO_NS(timer_timeout),
    timer_callback);

  // create executor
  executor = rclc_executor_get_zero_initialized_executor();
  rclc_executor_init(&executor, &support.context, 2, &allocator);

  unsigned int rcl_wait_timeout = 1000;   // in ms
  rclc_executor_set_timeout(&executor, RCL_MS_TO_NS(rcl_wait_timeout));

  rclc_executor_add_timer(&executor, &timer);
  rclc_executor_add_action_server(
    &executor,
    &follow_joint_trajectory_server,
    goal_request,
    result_request,
    goal_callback,
    result_callback);

  // Creating messages
  goal_request = create_goal_request();
  result_request = control_msgs__action__FollowJointTrajectory_GetResult_Request__create();
  feedback = create_feedback_message();
  result_response = control_msgs__action__FollowJointTrajectory_GetResult_Response__create();
  rosidl_runtime_c__String__assign(&result_response->result.error_string, "");

  join_states_msg = create_joint_states_message();
}

void loop()
{ 
  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
  open_manipulator.processOpenManipulator(millis()/1000.0);

  if (processing_goal && result_requested){
    for (size_t i = 0; i < feedback->feedback.desired.positions.capacity; i++){
      feedback->feedback.desired.positions.data[i] = 0.0;
      feedback->feedback.desired.velocities.data[i] = 0.0;
      feedback->feedback.desired.accelerations.data[i] = 0.0;
      feedback->feedback.desired.effort.data[i] = 0.0;

      feedback->feedback.actual.positions.data[i] = 0.0;
      feedback->feedback.actual.velocities.data[i] = 0.0;
      feedback->feedback.actual.accelerations.data[i] = 0.0;
      feedback->feedback.actual.effort.data[i] = 0.0;

      feedback->feedback.error.positions.data[i] = 0.0;
      feedback->feedback.error.velocities.data[i] = 0.0;
      feedback->feedback.error.accelerations.data[i] = 0.0;
      feedback->feedback.error.effort.data[i] = 0.0;
    }
    rcl_action_publish_feedback(&follow_joint_trajectory_server, feedback);
  }

  if (processing_goal && !open_manipulator.getMovingState()){
    processing_goal = false;
    if (result_requested){
      result_response->status = action_msgs__msg__GoalStatus__STATUS_SUCCEEDED;
      result_response->result.error_code = 0;
      rcl_action_send_result_response(&follow_joint_trajectory_server, &request_header, &result_response);
    }
  }
}
