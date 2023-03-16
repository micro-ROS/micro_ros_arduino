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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__msg__JointTrajectoryControllerState__TYPE_VERSION_HASH__INIT {1, { \
      0xcb, 0x3a, 0xd3, 0x1c, 0x63, 0x4c, 0x23, 0x4f, \
      0xbd, 0x30, 0x64, 0x5c, 0x3a, 0xd1, 0x94, 0xae, \
      0x1b, 0x8d, 0x59, 0xde, 0xb2, 0xbf, 0x3c, 0x37, \
      0x11, 0xd8, 0x3b, 0xf3, 0x7f, 0x7c, 0x52, 0xb7, \
    }}
static const rosidl_type_hash_t control_msgs__msg__JointTrajectoryControllerState__TYPE_VERSION_HASH = control_msgs__msg__JointTrajectoryControllerState__TYPE_VERSION_HASH__INIT;

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
