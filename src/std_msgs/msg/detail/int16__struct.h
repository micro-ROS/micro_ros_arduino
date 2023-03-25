// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int16.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT16__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT16__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Int16__TYPE_HASH = {1, {
    0x1d, 0xcc, 0x34, 0x64, 0xe4, 0x7c, 0x28, 0x8a,
    0x55, 0xf9, 0x43, 0xa3, 0x89, 0xd3, 0x37, 0xcd,
    0xb0, 0x68, 0x04, 0xde, 0x3f, 0x5c, 0xd7, 0xa2,
    0x66, 0xb0, 0xde, 0x71, 0x8e, 0xee, 0x17, 0xe5,
  }};

// Constants defined in the message

/// Struct defined in msg/Int16 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Int16
{
  int16_t data;
} std_msgs__msg__Int16;

// Struct for a sequence of std_msgs__msg__Int16.
typedef struct std_msgs__msg__Int16__Sequence
{
  std_msgs__msg__Int16 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int16__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT16__STRUCT_H_
