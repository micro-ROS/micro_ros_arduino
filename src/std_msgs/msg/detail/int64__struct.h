// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int64.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT64__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT64__STRUCT_H_

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
#define std_msgs__msg__Int64__TYPE_VERSION_HASH__INIT {1, { \
      0xf5, 0x83, 0x0e, 0x78, 0x76, 0xe1, 0x86, 0xff, \
      0x31, 0x2e, 0xba, 0xd0, 0x86, 0xb4, 0xe8, 0xc9, \
      0x49, 0x68, 0xe4, 0x2c, 0x5d, 0xad, 0x04, 0xd1, \
      0x75, 0x2f, 0x65, 0x62, 0x1a, 0x38, 0x44, 0x54, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Int64__TYPE_VERSION_HASH = std_msgs__msg__Int64__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Int64 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Int64
{
  int64_t data;
} std_msgs__msg__Int64;

// Struct for a sequence of std_msgs__msg__Int64.
typedef struct std_msgs__msg__Int64__Sequence
{
  std_msgs__msg__Int64 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int64__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT64__STRUCT_H_
