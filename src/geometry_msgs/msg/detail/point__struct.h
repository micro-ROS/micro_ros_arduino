// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POINT__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POINT__STRUCT_H_

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
#define geometry_msgs__msg__Point__TYPE_VERSION_HASH__INIT {1, { \
      0x40, 0x43, 0x51, 0x55, 0x2e, 0xac, 0x3a, 0x22, \
      0x81, 0xbc, 0x5c, 0x8d, 0xb6, 0x47, 0x45, 0xb3, \
      0x8b, 0x15, 0x34, 0xee, 0x21, 0xbb, 0xa8, 0x87, \
      0x49, 0x8d, 0x62, 0x65, 0x68, 0x9a, 0x7b, 0x48, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Point__TYPE_VERSION_HASH = geometry_msgs__msg__Point__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Point in the package geometry_msgs.
/**
  * This contains the position of a point in free space
 */
typedef struct geometry_msgs__msg__Point
{
  double x;
  double y;
  double z;
} geometry_msgs__msg__Point;

// Struct for a sequence of geometry_msgs__msg__Point.
typedef struct geometry_msgs__msg__Point__Sequence
{
  geometry_msgs__msg__Point * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Point__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POINT__STRUCT_H_
