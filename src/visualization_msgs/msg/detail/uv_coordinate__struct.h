// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/UVCoordinate.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__UV_COORDINATE__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__UV_COORDINATE__STRUCT_H_

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
#define visualization_msgs__msg__UVCoordinate__TYPE_VERSION_HASH__INIT {1, { \
      0x24, 0xe0, 0x8d, 0xf7, 0x71, 0xe5, 0xe6, 0x65, \
      0x78, 0x38, 0xf9, 0x30, 0xdc, 0x64, 0xb5, 0x2d, \
      0x57, 0xee, 0xf5, 0xc9, 0x90, 0x0e, 0x48, 0xb6, \
      0x72, 0xba, 0x55, 0xc7, 0xb4, 0x30, 0xec, 0x83, \
    }}
static const rosidl_type_hash_t visualization_msgs__msg__UVCoordinate__TYPE_VERSION_HASH = visualization_msgs__msg__UVCoordinate__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/UVCoordinate in the package visualization_msgs.
/**
  * Location of the pixel as a ratio of the width of a 2D texture.
  * Values should be in range:.
 */
typedef struct visualization_msgs__msg__UVCoordinate
{
  float u;
  float v;
} visualization_msgs__msg__UVCoordinate;

// Struct for a sequence of visualization_msgs__msg__UVCoordinate.
typedef struct visualization_msgs__msg__UVCoordinate__Sequence
{
  visualization_msgs__msg__UVCoordinate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__UVCoordinate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__UV_COORDINATE__STRUCT_H_
