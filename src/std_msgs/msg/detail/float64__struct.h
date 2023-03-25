// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Float64.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__FLOAT64__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__FLOAT64__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Float64__TYPE_HASH = {1, {
    0x70, 0x5b, 0xa9, 0xc3, 0xd1, 0xa0, 0x9d, 0xf4,
    0x37, 0x37, 0xeb, 0x67, 0x09, 0x55, 0x34, 0xde,
    0x36, 0xfd, 0x42, 0x6c, 0x05, 0x87, 0x77, 0x9b,
    0xda, 0x2b, 0xc5, 0x1f, 0xe7, 0x90, 0x18, 0x2a,
  }};

// Constants defined in the message

/// Struct defined in msg/Float64 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Float64
{
  double data;
} std_msgs__msg__Float64;

// Struct for a sequence of std_msgs__msg__Float64.
typedef struct std_msgs__msg__Float64__Sequence
{
  std_msgs__msg__Float64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Float64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__FLOAT64__STRUCT_H_
