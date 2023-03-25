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


// Type Hash for interface
static const rosidl_type_hash_t std_msgs__msg__ColorRGBA__TYPE_HASH = {1, {
    0x77, 0xa7, 0xa5, 0xb9, 0xae, 0x47, 0x73, 0x06,
    0x09, 0x76, 0x65, 0x10, 0x6e, 0x04, 0x13, 0xba,
    0x74, 0x44, 0x02, 0x45, 0xb1, 0xf3, 0xd0, 0xc6,
    0xd6, 0x40, 0x5f, 0xe5, 0xc7, 0x81, 0x3f, 0xe8,
  }};

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
