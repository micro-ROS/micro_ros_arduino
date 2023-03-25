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


// Type Hash for interface
static const rosidl_type_hash_t trajectory_msgs__msg__JointTrajectory__TYPE_HASH = {1, {
    0x17, 0x9b, 0x33, 0xeb, 0xa5, 0x9d, 0x67, 0x6f,
    0x6d, 0x96, 0x7a, 0xc7, 0x1f, 0xe3, 0x5e, 0x7c,
    0xa2, 0xf6, 0x4b, 0x2f, 0x39, 0x28, 0xf4, 0xa0,
    0x18, 0xce, 0xc1, 0x15, 0xe2, 0x13, 0x79, 0x6e,
  }};

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
