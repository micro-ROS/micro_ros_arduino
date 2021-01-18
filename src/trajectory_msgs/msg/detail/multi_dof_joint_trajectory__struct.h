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


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_names'
#include "rosidl_runtime_c/string.h"
// Member 'points'
#include "trajectory_msgs/msg/detail/multi_dof_joint_trajectory_point__struct.h"

// Struct defined in msg/MultiDOFJointTrajectory in the package trajectory_msgs.
typedef struct trajectory_msgs__msg__MultiDOFJointTrajectory
{
  std_msgs__msg__Header header;
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
