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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_msgs__msg__Char__TYPE_VERSION_HASH__INIT {1, { \
      0x30, 0x44, 0x1c, 0xa7, 0x87, 0x38, 0x86, 0xf7, \
      0x24, 0x48, 0xa3, 0x73, 0x31, 0xb4, 0x73, 0x4d, \
      0x4e, 0x90, 0x8c, 0xee, 0x60, 0xef, 0x7f, 0x25, \
      0x14, 0x57, 0x31, 0x78, 0x75, 0x87, 0xb2, 0xda, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Char__TYPE_VERSION_HASH = std_msgs__msg__Char__TYPE_VERSION_HASH__INIT;

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
