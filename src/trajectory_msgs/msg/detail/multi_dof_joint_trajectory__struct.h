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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define trajectory_msgs__msg__MultiDOFJointTrajectory__TYPE_VERSION_HASH__INIT {1, { \
      0xa3, 0x7b, 0xcc, 0x20, 0x5a, 0xae, 0x3d, 0x4e, \
      0x18, 0x21, 0x8d, 0x8b, 0x25, 0xfe, 0xce, 0xc0, \
      0xd7, 0xe8, 0x7f, 0x78, 0x86, 0x03, 0xab, 0xfd, \
      0xd7, 0xc0, 0x71, 0xa5, 0xaa, 0x72, 0xbd, 0x9d, \
    }}
static const rosidl_type_hash_t trajectory_msgs__msg__MultiDOFJointTrajectory__TYPE_VERSION_HASH = trajectory_msgs__msg__MultiDOFJointTrajectory__TYPE_VERSION_HASH__INIT;

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
