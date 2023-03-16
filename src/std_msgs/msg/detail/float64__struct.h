// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Float64.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__FLOAT64__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__FLOAT64__STRUCT_H_

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
#define std_msgs__msg__Float64__TYPE_VERSION_HASH__INIT {1, { \
      0xf0, 0xaf, 0x3e, 0xd2, 0x63, 0x93, 0x43, 0x95, \
      0xdf, 0x0b, 0x32, 0x36, 0xb9, 0xfc, 0xe8, 0x9a, \
      0x65, 0xdb, 0xfe, 0x58, 0xbb, 0xbf, 0x2e, 0xcf, \
      0xea, 0xce, 0xa3, 0xbb, 0x9f, 0xbe, 0xbb, 0x13, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Float64__TYPE_VERSION_HASH = std_msgs__msg__Float64__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Float64 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Float64
{
  double data;
} std_msgs__msg__Float64;

// Struct for a sequence of std_msgs__msg__Float64.
typedef struct std_msgs__msg__Float64__Sequence
{
  std_msgs__msg__Float64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Float64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__FLOAT64__STRUCT_H_
