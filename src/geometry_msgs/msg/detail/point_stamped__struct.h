// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/PointStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POINT_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POINT_STAMPED__STRUCT_H_

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
#define geometry_msgs__msg__PointStamped__TYPE_VERSION_HASH__INIT {1, { \
      0x3c, 0x1f, 0x65, 0x47, 0x09, 0x56, 0x21, 0xd3, \
      0x08, 0x02, 0x8c, 0xe4, 0xc1, 0x56, 0x89, 0x2f, \
      0xef, 0x95, 0x97, 0xfe, 0xef, 0xf5, 0xcf, 0x9d, \
      0x89, 0xf3, 0x9b, 0xcc, 0x5b, 0xcd, 0x34, 0x77, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__PointStamped__TYPE_VERSION_HASH = geometry_msgs__msg__PointStamped__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/PointStamped in the package geometry_msgs.
/**
  * This represents a Point with reference coordinate frame and timestamp
 */
typedef struct geometry_msgs__msg__PointStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point point;
} geometry_msgs__msg__PointStamped;

// Struct for a sequence of geometry_msgs__msg__PointStamped.
typedef struct geometry_msgs__msg__PointStamped__Sequence
{
  geometry_msgs__msg__PointStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PointStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POINT_STAMPED__STRUCT_H_
