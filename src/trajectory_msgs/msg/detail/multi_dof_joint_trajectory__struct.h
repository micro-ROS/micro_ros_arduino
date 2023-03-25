// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__STRUCT_H_
#define TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t trajectory_msgs__msg__MultiDOFJointTrajectory__TYPE_HASH = {1, {
    0x3a, 0x18, 0xfd, 0x09, 0x52, 0x92, 0xa6, 0x5c,
    0xfd, 0xe8, 0x83, 0x3c, 0x72, 0x98, 0x5a, 0x30,
    0xaf, 0x98, 0x1f, 0x3e, 0xc4, 0x44, 0x94, 0x65,
    0x5c, 0x62, 0x67, 0x26, 0x2b, 0x44, 0x3a, 0x4a,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'points'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.h"

/// Struct defined in msg/MultiDOFJointTrajectory in the package trajectory_msgs.
/**
  * The header is used to specify the coordinate frame and the reference time for the trajectory durations
 */
typedef struct trajectory_msgs__msg__MultiDOFJointTrajectory
{
  std_msgs__msg__Header header;
  /// A representation of a multi-dof joint trajectory (each point is a transformation)
  /// Each point along the trajectory will include an array of positions/velocities/accelerations
  /// that has the same length as the array of joint names, and has the same order of joints as
  /// the joint names array.
  rosidl_runtime_c__String__Sequence joint_names;
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence points;
} trajectory_msgs__msg__MultiDOFJointTrajectory;

// Struct for a sequence of trajectory_msgs__msg__MultiDOFJointTrajectory.
typedef struct trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence
{
  trajectory_msgs__msg__MultiDOFJointTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_msgs__msg__MultiDOFJointTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY__STRUCT_H_
