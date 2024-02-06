// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akros2_msgs:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef AKROS2_MSGS__MSG__DETAIL__MODE__STRUCT_H_
#define AKROS2_MSGS__MSG__DETAIL__MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Mode in the package akros2_msgs.
typedef struct akros2_msgs__msg__Mode
{
  bool estop;
  bool auto_t;
} akros2_msgs__msg__Mode;

// Struct for a sequence of akros2_msgs__msg__Mode.
typedef struct akros2_msgs__msg__Mode__Sequence
{
  akros2_msgs__msg__Mode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akros2_msgs__msg__Mode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKROS2_MSGS__MSG__DETAIL__MODE__STRUCT_H_
