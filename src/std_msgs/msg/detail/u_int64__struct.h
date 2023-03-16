// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt64.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT64__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT64__STRUCT_H_

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
#define std_msgs__msg__UInt64__TYPE_VERSION_HASH__INIT {1, { \
      0xbf, 0x80, 0x93, 0x7f, 0x27, 0xc4, 0x66, 0x81, \
      0x5f, 0x0e, 0x76, 0x02, 0x8d, 0x98, 0xdf, 0xea, \
      0x6c, 0xf2, 0xeb, 0x33, 0xb4, 0xbc, 0x4b, 0xc1, \
      0x45, 0xb0, 0x7a, 0x78, 0xbf, 0xfe, 0x63, 0xae, \
    }}
static const rosidl_type_hash_t std_msgs__msg__UInt64__TYPE_VERSION_HASH = std_msgs__msg__UInt64__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/UInt64 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt64
{
  uint64_t data;
} std_msgs__msg__UInt64;

// Struct for a sequence of std_msgs__msg__UInt64.
typedef struct std_msgs__msg__UInt64__Sequence
{
  std_msgs__msg__UInt64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT64__STRUCT_H_
