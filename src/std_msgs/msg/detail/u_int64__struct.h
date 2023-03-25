// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt64.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT64__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT64__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__UInt64__TYPE_HASH = {1, {
    0xfb, 0xdc, 0x52, 0x01, 0x8f, 0xc1, 0x37, 0x55,
    0xdc, 0xe1, 0x80, 0x24, 0xd1, 0xa6, 0x71, 0xc8,
    0x56, 0xaa, 0x8b, 0x4a, 0xaf, 0x63, 0xad, 0xfb,
    0x09, 0x5b, 0x60, 0x8f, 0x98, 0xe8, 0xc9, 0x43,
  }};

// Constants defined in the message

/// Struct defined in msg/UInt64 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt64
{
  uint64_t data;
} std_msgs__msg__UInt64;

// Struct for a sequence of std_msgs__msg__UInt64.
typedef struct std_msgs__msg__UInt64__Sequence
{
  std_msgs__msg__UInt64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT64__STRUCT_H_
