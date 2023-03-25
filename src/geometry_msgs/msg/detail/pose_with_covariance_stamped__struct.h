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


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__PoseWithCovarianceStamped__TYPE_HASH = {1, {
    0x26, 0x43, 0x2f, 0x98, 0x03, 0xe4, 0x37, 0x27,
    0xd3, 0xc8, 0xf6, 0x68, 0xd1, 0xfd, 0xb3, 0xc6,
    0x30, 0xf5, 0x48, 0xaf, 0x63, 0x1e, 0x2f, 0x4e,
    0x31, 0x38, 0x23, 0x71, 0xbf, 0xea, 0x3b, 0x6e,
  }};

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
