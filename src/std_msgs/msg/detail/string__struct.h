// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/String.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__STRING__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__STRING__STRUCT_H_

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
#define std_msgs__msg__String__TYPE_VERSION_HASH__INIT {1, { \
      0x5c, 0xdf, 0xa6, 0x00, 0xa6, 0xc8, 0xc9, 0xac, \
      0x4f, 0x6e, 0x08, 0x49, 0xa3, 0x78, 0xd5, 0xac, \
      0x0b, 0x70, 0x7b, 0x66, 0xc4, 0xab, 0x0a, 0xc8, \
      0x3b, 0xa9, 0xea, 0xed, 0x18, 0xf0, 0x15, 0xcd, \
    }}
static const rosidl_type_hash_t std_msgs__msg__String__TYPE_VERSION_HASH = std_msgs__msg__String__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/String in the package std_msgs.
/**
  * This was originally provided as an example message.
  * It is deprecated as of Foxy
  * It is recommended to create your own semantically meaningful message.
  * However if you would like to continue using this please use the equivalent in example_msgs.
 */
typedef struct std_msgs__msg__String
{
  rosidl_runtime_c__String data;
} std_msgs__msg__String;

// Struct for a sequence of std_msgs__msg__String.
typedef struct std_msgs__msg__String__Sequence
{
  std_msgs__msg__String * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__String__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__STRING__STRUCT_H_
