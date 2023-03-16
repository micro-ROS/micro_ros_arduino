// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE__STRUCT_H_

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
#define geometry_msgs__msg__Pose__TYPE_VERSION_HASH__INIT {1, { \
      0x68, 0x98, 0xc2, 0x56, 0x5d, 0x2b, 0x53, 0x70, \
      0xdf, 0x27, 0xc4, 0x74, 0xba, 0xb9, 0xee, 0x62, \
      0x1e, 0x26, 0x7a, 0x2d, 0x70, 0xd6, 0xef, 0xf3, \
      0x7a, 0xc5, 0x62, 0xf1, 0x67, 0x9c, 0x89, 0xce, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Pose__TYPE_VERSION_HASH = geometry_msgs__msg__Pose__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/Pose in the package geometry_msgs.
/**
  * A representation of pose in free space, composed of position and orientation.
 */
typedef struct geometry_msgs__msg__Pose
{
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
} geometry_msgs__msg__Pose;

// Struct for a sequence of geometry_msgs__msg__Pose.
typedef struct geometry_msgs__msg__Pose__Sequence
{
  geometry_msgs__msg__Pose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Pose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE__STRUCT_H_
