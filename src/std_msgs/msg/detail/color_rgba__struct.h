// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/ColorRGBA.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__COLOR_RGBA__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__COLOR_RGBA__STRUCT_H_

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
#define std_msgs__msg__ColorRGBA__TYPE_VERSION_HASH__INIT {1, { \
      0x9e, 0xdd, 0x0b, 0x8d, 0x1e, 0x47, 0x84, 0x29, \
      0x2d, 0xa6, 0x92, 0x5b, 0x28, 0x4a, 0x3a, 0xdb, \
      0xcd, 0x2b, 0xaa, 0x1d, 0xea, 0x74, 0x63, 0x45, \
      0x07, 0x92, 0x59, 0x42, 0x49, 0x8e, 0x3c, 0x83, \
    }}
static const rosidl_type_hash_t std_msgs__msg__ColorRGBA__TYPE_VERSION_HASH = std_msgs__msg__ColorRGBA__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/ColorRGBA in the package std_msgs.
typedef struct std_msgs__msg__ColorRGBA
{
  float r;
  float g;
  float b;
  float a;
} std_msgs__msg__ColorRGBA;

// Struct for a sequence of std_msgs__msg__ColorRGBA.
typedef struct std_msgs__msg__ColorRGBA__Sequence
{
  std_msgs__msg__ColorRGBA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__ColorRGBA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__COLOR_RGBA__STRUCT_H_
