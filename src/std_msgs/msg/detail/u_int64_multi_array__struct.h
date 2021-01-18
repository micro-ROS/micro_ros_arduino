// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/UInt64MultiArray in the package std_msgs.
typedef struct std_msgs__msg__UInt64MultiArray
{
  std_msgs__msg__MultiArrayLayout layout;
  rosidl_runtime_c__uint64__Sequence data;
} std_msgs__msg__UInt64MultiArray;

// Struct for a sequence of std_msgs__msg__UInt64MultiArray.
typedef struct std_msgs__msg__UInt64MultiArray__Sequence
{
  std_msgs__msg__UInt64MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt64MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT64_MULTI_ARRAY__STRUCT_H_
