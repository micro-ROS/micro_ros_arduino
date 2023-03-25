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


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__Polygon__TYPE_HASH = {1, {
    0x37, 0x82, 0xf9, 0xf0, 0xbf, 0x04, 0x49, 0x64,
    0xd6, 0x92, 0xd6, 0xc0, 0x17, 0xd7, 0x05, 0xe3,
    0x76, 0x11, 0xaf, 0xb1, 0xf0, 0xbf, 0x6a, 0x9d,
    0xee, 0x24, 0x8a, 0x7d, 0xda, 0x0f, 0x78, 0x4a,
  }};

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
