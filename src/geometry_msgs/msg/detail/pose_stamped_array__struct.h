// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/PoseStampedArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "geometry_msgs/msg/pose_stamped_array.h"


#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_STAMPED_ARRAY__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_STAMPED_ARRAY__STRUCT_H_

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
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/PoseStampedArray in the package geometry_msgs.
/**
  * An array of stamped poses with a header
  * The global header will store the time at which the poses were computed (not to be confused with the stamps of the poses themselves)
 */
typedef struct geometry_msgs__msg__PoseStampedArray
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__PoseStamped__Sequence poses;
} geometry_msgs__msg__PoseStampedArray;

// Struct for a sequence of geometry_msgs__msg__PoseStampedArray.
typedef struct geometry_msgs__msg__PoseStampedArray__Sequence
{
  geometry_msgs__msg__PoseStampedArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PoseStampedArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_STAMPED_ARRAY__STRUCT_H_
