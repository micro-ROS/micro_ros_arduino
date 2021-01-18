// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dim'
#include "std_msgs/msg/detail/multi_array_dimension__struct.h"

// Struct defined in msg/MultiArrayLayout in the package std_msgs.
typedef struct std_msgs__msg__MultiArrayLayout
{
  std_msgs__msg__MultiArrayDimension__Sequence dim;
  uint32_t data_offset;
} std_msgs__msg__MultiArrayLayout;

// Struct for a sequence of std_msgs__msg__MultiArrayLayout.
typedef struct std_msgs__msg__MultiArrayLayout__Sequence
{
  std_msgs__msg__MultiArrayLayout * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__MultiArrayLayout__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_
