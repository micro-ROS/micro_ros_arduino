// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/PoseWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_STAMPED__STRUCT_H_

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
#define geometry_msgs__msg__PoseWithCovarianceStamped__TYPE_VERSION_HASH__INIT {1, { \
      0x78, 0x73, 0xbc, 0x8a, 0x73, 0x47, 0x49, 0xaf, \
      0xf0, 0x59, 0x8e, 0x9b, 0x4c, 0x14, 0x0a, 0x1d, \
      0xa0, 0x05, 0xb9, 0x1e, 0x6f, 0xd0, 0x11, 0x9a, \
      0xae, 0x33, 0xf8, 0x91, 0xa5, 0x8e, 0xd9, 0x2a, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__PoseWithCovarianceStamped__TYPE_VERSION_HASH = geometry_msgs__msg__PoseWithCovarianceStamped__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"

/// Struct defined in msg/PoseWithCovarianceStamped in the package geometry_msgs.
/**
  * This expresses an estimated pose with a reference coordinate frame and timestamp
 */
typedef struct geometry_msgs__msg__PoseWithCovarianceStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__PoseWithCovariance pose;
} geometry_msgs__msg__PoseWithCovarianceStamped;

// Struct for a sequence of geometry_msgs__msg__PoseWithCovarianceStamped.
typedef struct geometry_msgs__msg__PoseWithCovarianceStamped__Sequence
{
  geometry_msgs__msg__PoseWithCovarianceStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PoseWithCovarianceStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_STAMPED__STRUCT_H_
