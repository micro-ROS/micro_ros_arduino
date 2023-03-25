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


// Type Hash for interface
static const rosidl_type_hash_t trajectory_msgs__msg__MultiDOFJointTrajectoryPoint__TYPE_HASH = {1, {
    0x6a, 0xda, 0x10, 0x85, 0xb5, 0xee, 0x64, 0xea,
    0xa0, 0x69, 0xb0, 0x74, 0x96, 0x8e, 0x69, 0xf0,
    0xe2, 0x7c, 0x8c, 0x5e, 0x6f, 0x5b, 0xb0, 0x58,
    0x6d, 0xd1, 0xc8, 0x34, 0xef, 0x0e, 0x32, 0xb8,
  }};

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
