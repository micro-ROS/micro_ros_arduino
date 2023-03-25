// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Char.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__CHAR__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__CHAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Char__TYPE_HASH = {1, {
    0x3a, 0xd2, 0xd0, 0x4d, 0xd2, 0x9b, 0xa1, 0x9d,
    0x04, 0xb1, 0x66, 0x59, 0xaf, 0xa3, 0xcc, 0xae,
    0xdd, 0x69, 0x19, 0x14, 0xb0, 0x2a, 0x64, 0xe8,
    0x2e, 0x25, 0x2f, 0x2f, 0xa6, 0xa5, 0x86, 0xa9,
  }};

// Constants defined in the message

/// Struct defined in msg/Char in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Char
{
  uint8_t data;
} std_msgs__msg__Char;

// Struct for a sequence of std_msgs__msg__Char.
typedef struct std_msgs__msg__Char__Sequence
{
  std_msgs__msg__Char * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Char__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__CHAR__STRUCT_H_
