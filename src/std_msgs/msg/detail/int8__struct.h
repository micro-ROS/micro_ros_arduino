// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int8.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT8__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT8__STRUCT_H_

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
#define std_msgs__msg__Int8__TYPE_VERSION_HASH__INIT {1, { \
      0x6a, 0x6b, 0x31, 0xa3, 0x68, 0x27, 0x32, 0xd9, \
      0x6e, 0xf9, 0x57, 0x64, 0xb1, 0x98, 0xeb, 0x2a, \
      0xce, 0x66, 0x2b, 0x58, 0x00, 0xe1, 0xd8, 0x5e, \
      0x57, 0x8d, 0x80, 0x23, 0x7c, 0x86, 0xb3, 0x0b, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Int8__TYPE_VERSION_HASH = std_msgs__msg__Int8__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Int8 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Int8
{
  int8_t data;
} std_msgs__msg__Int8;

// Struct for a sequence of std_msgs__msg__Int8.
typedef struct std_msgs__msg__Int8__Sequence
{
  std_msgs__msg__Int8 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int8__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT8__STRUCT_H_
