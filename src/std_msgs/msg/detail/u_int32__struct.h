// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/UInt32.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__U_INT32__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__U_INT32__STRUCT_H_

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
#define std_msgs__msg__UInt32__TYPE_VERSION_HASH__INIT {1, { \
      0x72, 0x95, 0xa1, 0x79, 0xff, 0x7f, 0x72, 0x04, \
      0x33, 0xc6, 0x45, 0x04, 0x56, 0x06, 0x28, 0x1f, \
      0xaf, 0x19, 0x81, 0xc7, 0xd5, 0x65, 0xfd, 0x01, \
      0x09, 0x3e, 0x25, 0x64, 0x91, 0xd8, 0x0f, 0xe7, \
    }}
static const rosidl_type_hash_t std_msgs__msg__UInt32__TYPE_VERSION_HASH = std_msgs__msg__UInt32__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/UInt32 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__UInt32
{
  uint32_t data;
} std_msgs__msg__UInt32;

// Struct for a sequence of std_msgs__msg__UInt32.
typedef struct std_msgs__msg__UInt32__Sequence
{
  std_msgs__msg__UInt32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__UInt32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__U_INT32__STRUCT_H_
