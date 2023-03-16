// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trajectory_msgs:msg/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
#define TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_H_

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
#define trajectory_msgs__msg__JointTrajectory__TYPE_VERSION_HASH__INIT {1, { \
      0x02, 0x4a, 0x6f, 0xe9, 0x2a, 0xa6, 0x75, 0x09, \
      0x1b, 0x87, 0x08, 0x14, 0x8b, 0x84, 0xcd, 0xb0, \
      0x5a, 0xc4, 0x45, 0x34, 0x05, 0xb5, 0xd0, 0xb9, \
      0xf8, 0x2f, 0x13, 0x8f, 0xb3, 0x28, 0x0a, 0x1b, \
    }}
static const rosidl_type_hash_t trajectory_msgs__msg__JointTrajectory__TYPE_VERSION_HASH = trajectory_msgs__msg__JointTrajectory__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'points'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.h"

/// Struct defined in msg/JointTrajectory in the package trajectory_msgs.
/**
  * The header is used to specify the coordinate frame and the reference time for
  * the trajectory durations
 */
typedef struct trajectory_msgs__msg__JointTrajectory
{
  std_msgs__msg__Header header;
  /// The names of the active joints in each trajectory point. These names are
  /// ordered and must correspond to the values in each trajectory point.
  rosidl_runtime_c__String__Sequence joint_names;
  /// Array of trajectory points, which describe the positions, velocities,
  /// accelerations and/or efforts of the joints at each time point.
  trajectory_msgs__msg__JointTrajectoryPoint__Sequence points;
} trajectory_msgs__msg__JointTrajectory;

// Struct for a sequence of trajectory_msgs__msg__JointTrajectory.
typedef struct trajectory_msgs__msg__JointTrajectory__Sequence
{
  trajectory_msgs__msg__JointTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_msgs__msg__JointTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
