// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int32.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT32__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__Int32__TYPE_HASH = {1, {
    0xb6, 0x57, 0x8d, 0xed, 0x3c, 0x58, 0xc6, 0x26,
    0xcf, 0xe8, 0xd1, 0xa6, 0xfb, 0x6e, 0x04, 0xf7,
    0x06, 0xf9, 0x7e, 0x9f, 0x03, 0xd2, 0x72, 0x7c,
    0x9f, 0xf4, 0xe7, 0x4b, 0x1c, 0xef, 0x0d, 0xeb,
  }};

// Constants defined in the message

/// Struct defined in msg/Int32 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Int32
{
  int32_t data;
} std_msgs__msg__Int32;

// Struct for a sequence of std_msgs__msg__Int32.
typedef struct std_msgs__msg__Int32__Sequence
{
  std_msgs__msg__Int32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT32__STRUCT_H_
