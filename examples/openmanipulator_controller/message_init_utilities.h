#pragma once

#include <control_msgs/action/follow_joint_trajectory.h>
#include <trajectory_msgs/msg/joint_trajectory_point.h>
#include <trajectory_msgs/msg/joint_trajectory.h>
#include <control_msgs/msg/joint_tolerance.h>
#include <sensor_msgs/msg/joint_state.h>

#include <rosidl_runtime_c/string_functions.h>
#include <rosidl_runtime_c/primitives_sequence_functions.h>
#include <rosidl_runtime_c/primitives_sequence_functions.h>

sensor_msgs__msg__JointState * create_joint_states_message();
trajectory_msgs__msg__JointTrajectory * create_joint_trajectory_msg();