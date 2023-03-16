// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Polygon.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_

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
#define geometry_msgs__msg__Polygon__TYPE_VERSION_HASH__INIT {1, { \
      0x9a, 0x34, 0x04, 0x9c, 0xfe, 0x7d, 0xca, 0x6f, \
      0x01, 0xfc, 0xb9, 0xf5, 0x4d, 0xb2, 0x44, 0xb4, \
      0xfa, 0xff, 0x07, 0x17, 0x0b, 0x5a, 0xa2, 0xf2, \
      0xbf, 0x18, 0xf5, 0xfe, 0xcc, 0x78, 0x4b, 0xcd, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Polygon__TYPE_VERSION_HASH = geometry_msgs__msg__Polygon__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point32__struct.h"

/// Struct defined in msg/Polygon in the package geometry_msgs.
/**
  * A specification of a polygon where the first and last points are assumed to be connected
 */
typedef struct geometry_msgs__msg__Polygon
{
  geometry_msgs__msg__Point32__Sequence points;
} geometry_msgs__msg__Polygon;

// Struct for a sequence of geometry_msgs__msg__Polygon.
typedef struct geometry_msgs__msg__Polygon__Sequence
{
  geometry_msgs__msg__Polygon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Polygon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POLYGON__STRUCT_H_
