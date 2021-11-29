// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/JointTolerance.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/JointTolerance in the package control_msgs.
typedef struct control_msgs__msg__JointTolerance
{
  rosidl_runtime_c__String name;
  double position;
  double velocity;
  double acceleration;
} control_msgs__msg__JointTolerance;

// Struct for a sequence of control_msgs__msg__JointTolerance.
typedef struct control_msgs__msg__JointTolerance__Sequence
{
  control_msgs__msg__JointTolerance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__JointTolerance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_TOLERANCE__STRUCT_H_
