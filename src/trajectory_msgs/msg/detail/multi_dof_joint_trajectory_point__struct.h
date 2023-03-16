// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trajectory_msgs:msg/MultiDOFJointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_H_
#define TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_H_

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
#define trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__TYPE_VERSION_HASH__INIT {1, { \
      0x85, 0x01, 0xd0, 0x57, 0xc2, 0x20, 0xaf, 0x21, \
      0xcb, 0xe8, 0x88, 0x9b, 0xf3, 0x1d, 0xd8, 0x95, \
      0x78, 0x29, 0x7f, 0x76, 0x41, 0x06, 0x3e, 0xd6, \
      0x16, 0x39, 0xaa, 0x44, 0x45, 0x4a, 0xbc, 0xc8, \
    }}
static const rosidl_type_hash_t trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__TYPE_VERSION_HASH = trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform__struct.h"
// Member 'velocities'
// Member 'accelerations'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/MultiDOFJointTrajectoryPoint in the package trajectory_msgs.
/**
  * Each multi-dof joint can specify a transform (up to 6 DOF).
 */
typedef struct trajectory_msgs__msg__MultiDOFJointTrajectoryPoint
{
  geometry_msgs__msg__Transform__Sequence transforms;
  /// There can be a velocity specified for the origin of the joint.
  geometry_msgs__msg__Twist__Sequence velocities;
  /// There can be an acceleration specified for the origin of the joint.
  geometry_msgs__msg__Twist__Sequence accelerations;
  /// Desired time from the trajectory start to arrive at this trajectory point.
  builtin_interfaces__msg__Duration time_from_start;
} trajectory_msgs__msg__MultiDOFJointTrajectoryPoint;

// Struct for a sequence of trajectory_msgs__msg__MultiDOFJointTrajectoryPoint.
typedef struct trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence
{
  trajectory_msgs__msg__MultiDOFJointTrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__MULTI_DOF_JOINT_TRAJECTORY_POINT__STRUCT_H_
