// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Float32.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__FLOAT32__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__FLOAT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Float32 in the package std_msgs.
typedef struct std_msgs__msg__Float32
{
  float data;
} std_msgs__msg__Float32;

// Struct for a sequence of std_msgs__msg__Float32.
typedef struct std_msgs__msg__Float32__Sequence
{
  std_msgs__msg__Float32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Float32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__FLOAT32__STRUCT_H_
