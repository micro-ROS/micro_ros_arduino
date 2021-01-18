// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/AccelWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'accel'
#include "geometry_msgs/msg/detail/accel__struct.h"

// Struct defined in msg/AccelWithCovariance in the package geometry_msgs.
typedef struct geometry_msgs__msg__AccelWithCovariance
{
  geometry_msgs__msg__Accel accel;
  double covariance[36];
} geometry_msgs__msg__AccelWithCovariance;

// Struct for a sequence of geometry_msgs__msg__AccelWithCovariance.
typedef struct geometry_msgs__msg__AccelWithCovariance__Sequence
{
  geometry_msgs__msg__AccelWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__AccelWithCovariance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE__STRUCT_H_
