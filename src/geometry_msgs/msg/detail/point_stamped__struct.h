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


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__PointStamped__TYPE_HASH = {1, {
    0x4c, 0x02, 0x96, 0xaf, 0x86, 0xe0, 0x1e, 0x56,
    0x2e, 0x9e, 0x04, 0x05, 0xd1, 0x38, 0xa0, 0x15,
    0x37, 0x24, 0x75, 0x80, 0x07, 0x6c, 0x58, 0xea,
    0x38, 0xd7, 0x92, 0x3a, 0xc1, 0x04, 0x58, 0x97,
  }};

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
