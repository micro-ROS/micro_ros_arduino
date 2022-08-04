// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/JointTrajectoryControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'desired'
// Member 'actual'
// Member 'error'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

/// Struct defined in msg/JointTrajectoryControllerState in the package control_msgs.
typedef struct control_msgs__msg__JointTrajectoryControllerState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence joint_names;
  trajectory_msgs__msg__JointTrajectoryPoint desired;
  trajectory_msgs__msg__JointTrajectoryPoint actual;
  /// Redundant, but useful
  trajectory_msgs__msg__JointTrajectoryPoint error;
} control_msgs__msg__JointTrajectoryControllerState;

// Struct for a sequence of control_msgs__msg__JointTrajectoryControllerState.
typedef struct control_msgs__msg__JointTrajectoryControllerState__Sequence
{
  control_msgs__msg__JointTrajectoryControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__JointTrajectoryControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_CONTROLLER_STATE__STRUCT_H_
