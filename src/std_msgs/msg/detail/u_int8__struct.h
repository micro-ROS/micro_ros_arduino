// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt8.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT8__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT8__STRUCT_H_

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
#define std_msgs__msg__UInt8__TYPE_VERSION_HASH__INIT {1, { \
      0x6a, 0x9b, 0xa6, 0x5b, 0x64, 0xbb, 0x25, 0x09, \
      0xab, 0x2e, 0x7f, 0x79, 0x1f, 0x2f, 0x91, 0x51, \
      0xe6, 0xe6, 0x2d, 0x72, 0x3a, 0x48, 0xc5, 0x1c, \
      0x48, 0x3b, 0x2b, 0x25, 0x03, 0x74, 0xd8, 0xf3, \
    }}
static const rosidl_type_hash_t std_msgs__msg__UInt8__TYPE_VERSION_HASH = std_msgs__msg__UInt8__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/UInt8 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt8
{
  uint8_t data;
} std_msgs__msg__UInt8;

// Struct for a sequence of std_msgs__msg__UInt8.
typedef struct std_msgs__msg__UInt8__Sequence
{
  std_msgs__msg__UInt8 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt8__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT8__STRUCT_H_
