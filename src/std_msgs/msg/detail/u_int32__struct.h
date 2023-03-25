// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt32.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT32__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__UInt32__TYPE_HASH = {1, {
    0xa5, 0xc8, 0x74, 0x82, 0x9b, 0x75, 0x2b, 0xc5,
    0xfa, 0x19, 0x00, 0x24, 0xb0, 0xad, 0x76, 0xf5,
    0x78, 0xcc, 0x27, 0x82, 0x71, 0xe8, 0x55, 0xc7,
    0xd0, 0x2a, 0x81, 0x8b, 0x35, 0x16, 0xfb, 0x4a,
  }};

// Constants defined in the message

/// Struct defined in msg/UInt32 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt32
{
  uint32_t data;
} std_msgs__msg__UInt32;

// Struct for a sequence of std_msgs__msg__UInt32.
typedef struct std_msgs__msg__UInt32__Sequence
{
  std_msgs__msg__UInt32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT32__STRUCT_H_
