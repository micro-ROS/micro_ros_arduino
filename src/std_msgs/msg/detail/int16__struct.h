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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_msgs__msg__Int16__TYPE_VERSION_HASH__INIT {1, { \
      0x32, 0x2d, 0xa1, 0x51, 0xd4, 0xd8, 0x7e, 0xde, \
      0x6f, 0x75, 0x84, 0x8d, 0xb6, 0x8c, 0x20, 0xd0, \
      0x90, 0x42, 0x1a, 0xc0, 0x20, 0x9b, 0x1b, 0xfb, \
      0xd8, 0x77, 0xfa, 0x1f, 0x44, 0x1c, 0x28, 0xbd, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Int16__TYPE_VERSION_HASH = std_msgs__msg__Int16__TYPE_VERSION_HASH__INIT;

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
