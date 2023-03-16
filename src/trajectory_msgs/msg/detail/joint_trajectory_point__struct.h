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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define trajectory_msgs__msg__JointTrajectoryPoint__TYPE_VERSION_HASH__INIT {1, { \
      0xd0, 0xf0, 0xed, 0x7d, 0x16, 0x1f, 0x07, 0x04, \
      0x51, 0x68, 0x69, 0x62, 0xf9, 0x5c, 0xb4, 0xb6, \
      0xd7, 0x3d, 0x57, 0x98, 0x8b, 0x6d, 0x99, 0xaf, \
      0xa0, 0x3c, 0xa6, 0x22, 0xeb, 0xf0, 0x0b, 0x89, \
    }}
static const rosidl_type_hash_t trajectory_msgs__msg__JointTrajectoryPoint__TYPE_VERSION_HASH = trajectory_msgs__msg__JointTrajectoryPoint__TYPE_VERSION_HASH__INIT;

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
