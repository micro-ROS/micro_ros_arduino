#pragma once

#include <control_msgs/action/follow_joint_trajectory.h>
#include <trajectory_msgs/msg/joint_trajectory_point.h>
#include <control_msgs/msg/joint_tolerance.h>
#include <sensor_msgs/msg/joint_state.h>

#include <rosidl_runtime_c/string_functions.h>
#include <rosidl_runtime_c/primitives_sequence_functions.h>
#include <rosidl_runtime_c/primitives_sequence_functions.h>

control_msgs__action__FollowJointTrajectory_FeedbackMessage * create_feedback_message();
control_msgs__action__FollowJointTrajectory_SendGoal_Request *  create_goal_request();
sensor_msgs__msg__JointState * create_joint_states_message();
