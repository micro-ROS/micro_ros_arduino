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


// Type Hash for interface
static const rosidl_type_hash_t visualization_msgs__msg__UVCoordinate__TYPE_HASH = {1, {
    0xf2, 0x7f, 0x7e, 0xd2, 0x1f, 0xe3, 0x60, 0xc6,
    0x06, 0x69, 0x44, 0xf8, 0x56, 0xb8, 0x01, 0xa0,
    0xc0, 0xd1, 0xe9, 0x4e, 0x81, 0x5b, 0x68, 0x86,
    0x44, 0x4b, 0x42, 0xd9, 0x0b, 0x19, 0x6a, 0x26,
  }};

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
