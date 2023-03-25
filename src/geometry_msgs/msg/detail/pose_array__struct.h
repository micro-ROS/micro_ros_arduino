// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/PoseArray.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__PoseArray__TYPE_HASH = {1, {
    0xaf, 0x0c, 0xc3, 0x6d, 0x19, 0x0e, 0x10, 0x4d,
    0x54, 0x6d, 0x16, 0x8d, 0x6b, 0x39, 0xdf, 0x04,
    0xfa, 0x4b, 0x4c, 0xce, 0xcf, 0x59, 0xcb, 0x4c,
    0x9e, 0xd3, 0x28, 0xd3, 0xd5, 0x00, 0x4a, 0xa0,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseArray in the package geometry_msgs.
/**
  * An array of poses with a header for global reference.
 */
typedef struct geometry_msgs__msg__PoseArray
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose__Sequence poses;
} geometry_msgs__msg__PoseArray;

// Struct for a sequence of geometry_msgs__msg__PoseArray.
typedef struct geometry_msgs__msg__PoseArray__Sequence
{
  geometry_msgs__msg__PoseArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PoseArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__STRUCT_H_
