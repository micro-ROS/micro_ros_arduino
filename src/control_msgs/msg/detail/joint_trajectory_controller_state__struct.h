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

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__msg__JointTrajectoryControllerState__TYPE_HASH = {1, {
    0xa1, 0xe5, 0xc4, 0xdd, 0x48, 0xaa, 0x18, 0x1a,
    0x25, 0x2b, 0x09, 0xc6, 0xe9, 0x8b, 0x93, 0x4c,
    0xec, 0xcf, 0xc8, 0xd2, 0xc2, 0xe8, 0xb8, 0xea,
    0x7c, 0xa4, 0x6a, 0x6d, 0x7f, 0x65, 0x8b, 0x5f,
  }};

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
