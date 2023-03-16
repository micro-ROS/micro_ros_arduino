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

#include "rosidl_runtime_c/type_hash.h"


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__msg__PidState__TYPE_VERSION_HASH__INIT {1, { \
      0x67, 0x90, 0x88, 0x73, 0xe4, 0xfb, 0xa5, 0x35, \
      0xcd, 0xe9, 0x79, 0xaa, 0xfc, 0xda, 0x88, 0xbc, \
      0x1b, 0x42, 0x62, 0xe0, 0x81, 0xed, 0xfe, 0xf3, \
      0x00, 0x99, 0x90, 0x75, 0x97, 0xbf, 0xf1, 0x6b, \
    }}
static const rosidl_type_hash_t control_msgs__msg__PidState__TYPE_VERSION_HASH = control_msgs__msg__PidState__TYPE_VERSION_HASH__INIT;

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
