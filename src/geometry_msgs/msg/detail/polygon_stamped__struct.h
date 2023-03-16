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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define geometry_msgs__msg__PolygonStamped__TYPE_VERSION_HASH__INIT {1, { \
      0x64, 0xb4, 0xd0, 0xee, 0xa5, 0x76, 0xbd, 0xde, \
      0xb8, 0x66, 0x5c, 0x63, 0xa7, 0xb5, 0x02, 0xdd, \
      0x9e, 0x2d, 0x2d, 0x15, 0xf3, 0x5f, 0x65, 0xa7, \
      0x2a, 0xcd, 0x5b, 0x8d, 0x98, 0x6c, 0x2a, 0x17, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__PolygonStamped__TYPE_VERSION_HASH = geometry_msgs__msg__PolygonStamped__TYPE_VERSION_HASH__INIT;

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
