// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:msg/Odometry.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__MSG__DETAIL__ODOMETRY__STRUCT_H_
#define NAV_MSGS__MSG__DETAIL__ODOMETRY__STRUCT_H_

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
// Member 'child_frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"

// Struct defined in msg/Odometry in the package nav_msgs.
typedef struct nav_msgs__msg__Odometry
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String child_frame_id;
  geometry_msgs__msg__PoseWithCovariance pose;
  geometry_msgs__msg__TwistWithCovariance twist;
} nav_msgs__msg__Odometry;

// Struct for a sequence of nav_msgs__msg__Odometry.
typedef struct nav_msgs__msg__Odometry__Sequence
{
  nav_msgs__msg__Odometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__Odometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__DETAIL__ODOMETRY__STRUCT_H_
