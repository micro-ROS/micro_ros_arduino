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


// Constants defined in the message

// Include directives for member types
// Member 'positions'
// Member 'velocities'
// Member 'accelerations'
// Member 'effort'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/JointTrajectoryPoint in the package trajectory_msgs.
typedef struct trajectory_msgs__msg__JointTrajectoryPoint
{
  rosidl_runtime_c__double__Sequence positions;
  rosidl_runtime_c__double__Sequence velocities;
  rosidl_runtime_c__double__Sequence accelerations;
  rosidl_runtime_c__double__Sequence effort;
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
