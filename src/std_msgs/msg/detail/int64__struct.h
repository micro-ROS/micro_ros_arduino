// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int64.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT64__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT64__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Int64__TYPE_HASH = {1, {
    0x8c, 0xd1, 0x04, 0x8c, 0x2f, 0x18, 0x6b, 0x6b,
    0xd9, 0xa9, 0x24, 0x72, 0xdc, 0x1c, 0xe5, 0x17,
    0x23, 0xc0, 0x83, 0x3a, 0x22, 0x1e, 0x2b, 0x7a,
    0xec, 0xff, 0xf1, 0x11, 0x77, 0x4f, 0x4b, 0x49,
  }};

// Constants defined in the message

/// Struct defined in msg/Int64 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Int64
{
  int64_t data;
} std_msgs__msg__Int64;

// Struct for a sequence of std_msgs__msg__Int64.
typedef struct std_msgs__msg__Int64__Sequence
{
  std_msgs__msg__Int64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT64__STRUCT_H_
