// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt16.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT16__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT16__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__UInt16__TYPE_HASH = {1, {
    0x08, 0xa4, 0x06, 0xe4, 0xb0, 0x22, 0xbc, 0x22,
    0xe9, 0x07, 0xf9, 0x85, 0xd6, 0xa9, 0xe9, 0xdd,
    0x1d, 0x4f, 0xbe, 0xca, 0xe5, 0x73, 0x54, 0x9c,
    0xf4, 0x93, 0x50, 0x11, 0x3e, 0x77, 0x57, 0xb1,
  }};

// Constants defined in the message

/// Struct defined in msg/UInt16 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt16
{
  uint16_t data;
} std_msgs__msg__UInt16;

// Struct for a sequence of std_msgs__msg__UInt16.
typedef struct std_msgs__msg__UInt16__Sequence
{
  std_msgs__msg__UInt16 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt16__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT16__STRUCT_H_
