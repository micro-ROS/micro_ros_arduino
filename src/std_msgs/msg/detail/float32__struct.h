// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Float32.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__FLOAT32__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__FLOAT32__STRUCT_H_

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
#define std_msgs__msg__Float32__TYPE_VERSION_HASH__INIT {1, { \
      0xb6, 0x3b, 0x00, 0x27, 0xf4, 0x18, 0xe7, 0x4c, \
      0xf5, 0xea, 0xf7, 0x58, 0x92, 0x17, 0x7e, 0x3a, \
      0x37, 0xd2, 0x94, 0x08, 0x05, 0xee, 0xe8, 0x64, \
      0xa6, 0xa1, 0xfd, 0x49, 0xdc, 0xae, 0x18, 0xd8, \
    }}
static const rosidl_type_hash_t std_msgs__msg__Float32__TYPE_VERSION_HASH = std_msgs__msg__Float32__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Float32 in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__Float32
{
  float data;
} std_msgs__msg__Float32;

// Struct for a sequence of std_msgs__msg__Float32.
typedef struct std_msgs__msg__Float32__Sequence
{
  std_msgs__msg__Float32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Float32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__FLOAT32__STRUCT_H_
