// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Byte.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__BYTE__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__BYTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Byte__TYPE_HASH = {1, {
    0x41, 0xe1, 0xa3, 0x34, 0x5f, 0x73, 0xfe, 0x93,
    0xed, 0xe0, 0x06, 0xda, 0x82, 0x6a, 0x6e, 0xe2,
    0x74, 0xaf, 0x23, 0xdd, 0x46, 0x53, 0x97, 0x6f,
    0xf2, 0x49, 0xb0, 0xf4, 0x4e, 0x3e, 0x79, 0x8f,
  }};

// Constants defined in the message

/// Struct defined in msg/Byte in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Byte
{
  uint8_t data;
} std_msgs__msg__Byte;

// Struct for a sequence of std_msgs__msg__Byte.
typedef struct std_msgs__msg__Byte__Sequence
{
  std_msgs__msg__Byte * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Byte__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__BYTE__STRUCT_H_
