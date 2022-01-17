// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Accel.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Accel in the package geometry_msgs.
/**
  * This expresses acceleration in free space broken into its linear and angular parts.
 */
typedef struct geometry_msgs__msg__Accel
{
  geometry_msgs__msg__Vector3 linear;
  geometry_msgs__msg__Vector3 angular;
} geometry_msgs__msg__Accel;

// Struct for a sequence of geometry_msgs__msg__Accel.
typedef struct geometry_msgs__msg__Accel__Sequence
{
  geometry_msgs__msg__Accel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Accel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL__STRUCT_H_
