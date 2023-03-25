// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int8.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT8__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT8__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Int8__TYPE_HASH = {1, {
    0x26, 0x52, 0x50, 0x65, 0xa4, 0x03, 0xd9, 0x72,
    0xcb, 0x67, 0x2f, 0x07, 0x77, 0xe3, 0x33, 0xf0,
    0xc7, 0x99, 0xad, 0x44, 0x4a, 0xe5, 0xfc, 0xd7,
    0x9e, 0x43, 0xd1, 0xe7, 0x3b, 0xd0, 0xf4, 0x40,
  }};

// Constants defined in the message

/// Struct defined in msg/Int8 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Int8
{
  int8_t data;
} std_msgs__msg__Int8;

// Struct for a sequence of std_msgs__msg__Int8.
typedef struct std_msgs__msg__Int8__Sequence
{
  std_msgs__msg__Int8 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int8__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT8__STRUCT_H_
