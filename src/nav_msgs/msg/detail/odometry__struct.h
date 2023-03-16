// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:msg/Odometry.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__ODOMETRY__STRUCT_H_
#define NAV_MSGS__MSG__DETAIL__ODOMETRY__STRUCT_H_

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
#define nav_msgs__msg__Odometry__TYPE_VERSION_HASH__INIT {1, { \
      0x70, 0xc8, 0x3d, 0x70, 0x39, 0x23, 0x13, 0xe4, \
      0xbd, 0x2c, 0x8d, 0xa1, 0xce, 0xe7, 0x50, 0x93, \
      0xbd, 0xf3, 0x69, 0x81, 0x4d, 0xc7, 0x11, 0xbe, \
      0xa8, 0xf7, 0x56, 0xe9, 0x96, 0xd5, 0x44, 0x26, \
    }}
static const rosidl_type_hash_t nav_msgs__msg__Odometry__TYPE_VERSION_HASH = nav_msgs__msg__Odometry__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'child_frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"

/// Struct defined in msg/Odometry in the package nav_msgs.
/**
  * This represents an estimate of a position and velocity in free space.
  * The pose in this message should be specified in the coordinate frame given by header.frame_id
  * The twist in this message should be specified in the coordinate frame given by the child_frame_id
 */
typedef struct nav_msgs__msg__Odometry
{
  /// Includes the frame id of the pose parent.
  std_msgs__msg__Header header;
  /// Frame id the pose points to. The twist is in this coordinate frame.
  rosidl_runtime_c__String child_frame_id;
  /// Estimated pose that is typically relative to a fixed world frame.
  geometry_msgs__msg__PoseWithCovariance pose;
  /// Estimated linear and angular velocity relative to child_frame_id.
  geometry_msgs__msg__TwistWithCovariance twist;
} nav_msgs__msg__Odometry;

// Struct for a sequence of nav_msgs__msg__Odometry.
typedef struct nav_msgs__msg__Odometry__Sequence
{
  nav_msgs__msg__Odometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__Odometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__DETAIL__ODOMETRY__STRUCT_H_
