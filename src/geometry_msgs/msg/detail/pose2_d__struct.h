// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_

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
#define geometry_msgs__msg__Pose2D__TYPE_VERSION_HASH__INIT {1, { \
      0x8e, 0x80, 0x4b, 0xf4, 0xe5, 0x33, 0xfe, 0xd2, \
      0xeb, 0xc4, 0x81, 0x09, 0x41, 0x40, 0x10, 0x4d, \
      0x0c, 0xaa, 0x7b, 0xca, 0xb7, 0xf6, 0x9c, 0xfa, \
      0xf8, 0x32, 0x39, 0xe0, 0xc6, 0x21, 0x39, 0x03, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Pose2D__TYPE_VERSION_HASH = geometry_msgs__msg__Pose2D__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Pose2D in the package geometry_msgs.
/**
  * Deprecated as of Foxy and will potentially be removed in any following release.
  * Please use the full 3D pose.
 */
typedef struct geometry_msgs__msg__Pose2D
{
  /// In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.
  /// If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.# This expresses a position and orientation on a 2D manifold.
  double x;
  double y;
  double theta;
} geometry_msgs__msg__Pose2D;

// Struct for a sequence of geometry_msgs__msg__Pose2D.
typedef struct geometry_msgs__msg__Pose2D__Sequence
{
  geometry_msgs__msg__Pose2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Pose2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_
