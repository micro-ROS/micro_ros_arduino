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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_msgs__msg__Int32__TYPE_VERSION_HASH__INIT {1, { \
      0x38, 0x4d, 0x3c, 0x2b, 0x01, 0x01, 0x34, 0x22, \
      0x41, 0x20, 0x69, 0x12, 0x11, 0xfd, 0x4d, 0xd6, \
      0xf0, 0x82, 0xbe, 0xe2, 0xdf, 0xef, 0x72, 0x09, \
      0x63, 0x37, 0x81, 0x1b, 0x08, 0x10, 0xcf, 0x89, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Int32__TYPE_VERSION_HASH = std_msgs__msg__Int32__TYPE_VERSION_HASH__INIT;

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
