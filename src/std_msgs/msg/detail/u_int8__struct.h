// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt8.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT8__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT8__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__UInt8__TYPE_HASH = {1, {
    0x61, 0x38, 0xbd, 0x83, 0xd8, 0xc3, 0x56, 0x9c,
    0xb8, 0x0a, 0x66, 0x7d, 0xb0, 0x3c, 0xfc, 0x16,
    0x29, 0xf5, 0x29, 0xfe, 0xe7, 0x9d, 0x94, 0x4c,
    0x39, 0xc3, 0x4e, 0x35, 0x2e, 0x72, 0xf0, 0x10,
  }};

// Constants defined in the message

/// Struct defined in msg/UInt8 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt8
{
  uint8_t data;
} std_msgs__msg__UInt8;

// Struct for a sequence of std_msgs__msg__UInt8.
typedef struct std_msgs__msg__UInt8__Sequence
{
  std_msgs__msg__UInt8 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt8__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT8__STRUCT_H_
