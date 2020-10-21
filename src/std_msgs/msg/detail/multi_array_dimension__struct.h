// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MultiArrayDimension in the package std_msgs.
typedef struct std_msgs__msg__MultiArrayDimension
{
  rosidl_runtime_c__String label;
  uint32_t size;
  uint32_t stride;
} std_msgs__msg__MultiArrayDimension;

// Struct for a sequence of std_msgs__msg__MultiArrayDimension.
typedef struct std_msgs__msg__MultiArrayDimension__Sequence
{
  std_msgs__msg__MultiArrayDimension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__MultiArrayDimension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__STRUCT_H_
