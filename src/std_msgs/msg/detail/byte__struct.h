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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_msgs__msg__Byte__TYPE_VERSION_HASH__INIT {1, { \
      0x3a, 0xd3, 0x9a, 0xa5, 0x37, 0x13, 0x07, 0xc5, \
      0x25, 0xb7, 0x1f, 0x0c, 0x64, 0x2a, 0x4d, 0x8b, \
      0xf9, 0x82, 0x16, 0x3a, 0x04, 0x31, 0xba, 0xdb, \
      0x0c, 0xa4, 0x61, 0x5a, 0x7c, 0x29, 0xcb, 0x67, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Byte__TYPE_VERSION_HASH = std_msgs__msg__Byte__TYPE_VERSION_HASH__INIT;

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
