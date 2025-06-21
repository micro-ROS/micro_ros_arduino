// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:msg/Goals.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nav_msgs/msg/goals.h"


#ifndef NAV_MSGS__MSG__DETAIL__GOALS__STRUCT_H_
#define NAV_MSGS__MSG__DETAIL__GOALS__STRUCT_H_

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
// Member 'goals'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/Goals in the package nav_msgs.
/**
  * An array of navigation goals
 */
typedef struct nav_msgs__msg__Goals
{
  /// This header will store the time at which the poses were computed (not to be confused with the stamps of the poses themselves)
  /// In the case that individual poses do not have their frame_id set or their timetamp set they will use the default value here.
  std_msgs__msg__Header header;
  /// An array of goals to for navigation to achieve.
  /// The goals should be executed in the order of the array.
  /// The header and stamp are intended to be used for computing the position of the goals.
  /// They may vary to support cases of goals that are moving with respect to the robot.
  geometry_msgs__msg__PoseStamped__Sequence goals;
} nav_msgs__msg__Goals;

// Struct for a sequence of nav_msgs__msg__Goals.
typedef struct nav_msgs__msg__Goals__Sequence
{
  nav_msgs__msg__Goals * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__msg__Goals__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__MSG__DETAIL__GOALS__STRUCT_H_
