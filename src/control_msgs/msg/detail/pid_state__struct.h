// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:msg/PidState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__MSG__DETAIL__PID_STATE__STRUCT_H_
#define CONTROL_MSGS__MSG__DETAIL__PID_STATE__STRUCT_H_

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
// Member 'timestep'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/PidState in the package control_msgs.
typedef struct control_msgs__msg__PidState
{
  std_msgs__msg__Header header;
  builtin_interfaces__msg__Duration timestep;
  double error;
  double error_dot;
  double p_error;
  double i_error;
  double d_error;
  double p_term;
  double i_term;
  double d_term;
  double i_max;
  double i_min;
  double output;
} control_msgs__msg__PidState;

// Struct for a sequence of control_msgs__msg__PidState.
typedef struct control_msgs__msg__PidState__Sequence
{
  control_msgs__msg__PidState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__msg__PidState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__MSG__DETAIL__PID_STATE__STRUCT_H_
