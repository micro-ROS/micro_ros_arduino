// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/PolygonStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POLYGON_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POLYGON_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__PolygonStamped__TYPE_HASH = {1, {
    0xb7, 0xcf, 0x07, 0x93, 0x2f, 0x15, 0x23, 0xd4,
    0xb4, 0x08, 0x80, 0x75, 0x94, 0x5c, 0x1a, 0x01,
    0x41, 0xf7, 0xcd, 0x21, 0xda, 0x87, 0xcc, 0x94,
    0x0f, 0xc6, 0x16, 0x52, 0xe9, 0x13, 0x8b, 0x46,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'polygon'
#include "geometry_msgs/msg/detail/polygon__struct.h"

/// Struct defined in msg/PolygonStamped in the package geometry_msgs.
/**
  * This represents a Polygon with reference coordinate frame and timestamp
 */
typedef struct geometry_msgs__msg__PolygonStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Polygon polygon;
} geometry_msgs__msg__PolygonStamped;

// Struct for a sequence of geometry_msgs__msg__PolygonStamped.
typedef struct geometry_msgs__msg__PolygonStamped__Sequence
{
  geometry_msgs__msg__PolygonStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PolygonStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POLYGON_STAMPED__STRUCT_H_
