// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/JointJog.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_JOG__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_JOG__STRUCT_H_

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
// Member 'displacements'
// Member 'velocities'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointJog in the package control_msgs.
/**
  * Used in time-stamping the message.
 */
typedef struct control_msgs__msg__JointJog
{
  std_msgs__msg__Header header;
  /// Name list of the joints. You don't need to specify all joints of the
  /// robot. Joint names are case-sensitive.
  rosidl_runtime_c__String__Sequence joint_names;
  /// A position command to the joints listed in joint_names.
  /// The order must be identical.
  /// Units are meters or radians.
  /// If displacements and velocities are filled, a profiled motion is requested.
  /// or position_deltas
  rosidl_runtime_c__double__Sequence displacements;
  /// A velocity command to the joints listed in joint_names.
  /// The order must be identical.
  /// Units are m/s or rad/s.
  /// If displacements and velocities are filled, a profiled motion is requested.
  rosidl_runtime_c__double__Sequence velocities;
  double duration;
} control_msgs__msg__JointJog;

// Struct for a sequence of control_msgs__msg__JointJog.
typedef struct control_msgs__msg__JointJog__Sequence
{
  control_msgs__msg__JointJog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__JointJog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_JOG__STRUCT_H_
