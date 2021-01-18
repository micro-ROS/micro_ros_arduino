// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/JointControllerState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_H_

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

// Struct defined in msg/JointControllerState in the package control_msgs.
typedef struct control_msgs__msg__JointControllerState
{
  std_msgs__msg__Header header;
  double set_point;
  double process_value;
  double process_value_dot;
  double error;
  double time_step;
  double command;
  double p;
  double i;
  double d;
  double i_clamp;
  bool antiwindup;
} control_msgs__msg__JointControllerState;

// Struct for a sequence of control_msgs__msg__JointControllerState.
typedef struct control_msgs__msg__JointControllerState__Sequence
{
  control_msgs__msg__JointControllerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__JointControllerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__JOINT_CONTROLLER_STATE__STRUCT_H_
