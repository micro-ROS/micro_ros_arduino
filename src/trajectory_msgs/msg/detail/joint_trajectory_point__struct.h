// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trajectory_msgs:msg/JointTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_POINT__STRUCT_H_
#define TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t trajectory_msgs__msg__JointTrajectoryPoint__TYPE_HASH = {1, {
    0xde, 0x89, 0x07, 0x03, 0x6d, 0x8b, 0xd4, 0x5a,
    0xac, 0x6f, 0x30, 0xcc, 0x90, 0x44, 0xa3, 0xd4,
    0xa3, 0x29, 0xc4, 0x2c, 0xbf, 0x71, 0x9a, 0xff,
    0x7d, 0x95, 0xa5, 0x84, 0xcf, 0xa5, 0x32, 0xd7,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'positions'
// Member 'velocities'
// Member 'accelerations'
// Member 'effort'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/JointTrajectoryPoint in the package trajectory_msgs.
/**
  * Each trajectory point specifies either positions[, velocities[, accelerations]]
  * or positions[, effort] for the trajectory to be executed.
  * All specified values are in the same order as the joint names in JointTrajectory.msg.
 */
typedef struct trajectory_msgs__msg__JointTrajectoryPoint
{
  /// Single DOF joint positions for each joint relative to their "0" position.
  /// The units depend on the specific joint type: radians for revolute or
  /// continuous joints, and meters for prismatic joints.
  rosidl_runtime_c__double__Sequence positions;
  /// The rate of change in position of each joint. Units are joint type dependent.
  /// Radians/second for revolute or continuous joints, and meters/second for
  /// prismatic joints.
  rosidl_runtime_c__double__Sequence velocities;
  /// Rate of change in velocity of each joint. Units are joint type dependent.
  /// Radians/second^2 for revolute or continuous joints, and meters/second^2 for
  /// prismatic joints.
  rosidl_runtime_c__double__Sequence accelerations;
  /// The torque or the force to be applied at each joint. For revolute/continuous
  /// joints effort denotes a torque in newton-meters. For prismatic joints, effort
  /// denotes a force in newtons.
  rosidl_runtime_c__double__Sequence effort;
  /// Desired time from the trajectory start to arrive at this trajectory point.
  builtin_interfaces__msg__Duration time_from_start;
} trajectory_msgs__msg__JointTrajectoryPoint;

// Struct for a sequence of trajectory_msgs__msg__JointTrajectoryPoint.
typedef struct trajectory_msgs__msg__JointTrajectoryPoint__Sequence
{
  trajectory_msgs__msg__JointTrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_msgs__msg__JointTrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_MSGS__MSG__DETAIL__JOINT_TRAJECTORY_POINT__STRUCT_H_
