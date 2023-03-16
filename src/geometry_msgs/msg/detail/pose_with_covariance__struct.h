// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/PoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__STRUCT_H_

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
#define geometry_msgs__msg__PoseWithCovariance__TYPE_VERSION_HASH__INIT {1, { \
      0x18, 0xec, 0x52, 0x7c, 0x2f, 0x93, 0x15, 0xdb, \
      0xbf, 0x9a, 0x9e, 0xa9, 0x16, 0x58, 0x58, 0xc9, \
      0x72, 0x3b, 0xd1, 0x4f, 0x5a, 0x2b, 0x41, 0x78, \
      0xa6, 0x41, 0x50, 0xaf, 0x14, 0x60, 0xf2, 0xda, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__PoseWithCovariance__TYPE_VERSION_HASH = geometry_msgs__msg__PoseWithCovariance__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseWithCovariance in the package geometry_msgs.
/**
  * This represents a pose in free space with uncertainty.
 */
typedef struct geometry_msgs__msg__PoseWithCovariance
{
  geometry_msgs__msg__Pose pose;
  /// Row-major representation of the 6x6 covariance matrix
  /// The orientation parameters use a fixed-axis representation.
  /// In order, the parameters are:
  /// (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
  double covariance[36];
} geometry_msgs__msg__PoseWithCovariance;

// Struct for a sequence of geometry_msgs__msg__PoseWithCovariance.
typedef struct geometry_msgs__msg__PoseWithCovariance__Sequence
{
  geometry_msgs__msg__PoseWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PoseWithCovariance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE__STRUCT_H_
