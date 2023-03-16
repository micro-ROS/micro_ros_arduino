// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt16.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT16__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT16__STRUCT_H_

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
#define std_msgs__msg__UInt16__TYPE_VERSION_HASH__INIT {1, { \
      0xe5, 0x95, 0xf4, 0x25, 0x8a, 0x4b, 0xc2, 0x0e, \
      0x98, 0xfe, 0x0a, 0x1c, 0xff, 0x53, 0x73, 0x5c, \
      0x04, 0x15, 0x93, 0x73, 0x1b, 0x4e, 0xee, 0x82, \
      0x97, 0x29, 0x9e, 0x1b, 0x4c, 0xc6, 0xa4, 0x14, \
    }}
static const rosidl_type_hash_t std_msgs__msg__UInt16__TYPE_VERSION_HASH = std_msgs__msg__UInt16__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/UInt16 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt16
{
  uint16_t data;
} std_msgs__msg__UInt16;

// Struct for a sequence of std_msgs__msg__UInt16.
typedef struct std_msgs__msg__UInt16__Sequence
{
  std_msgs__msg__UInt16 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt16__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT16__STRUCT_H_
