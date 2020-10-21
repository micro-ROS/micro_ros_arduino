// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/TwistWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

// Struct defined in msg/TwistWithCovariance in the package geometry_msgs.
typedef struct geometry_msgs__msg__TwistWithCovariance
{
  geometry_msgs__msg__Twist twist;
  double covariance[36];
} geometry_msgs__msg__TwistWithCovariance;

// Struct for a sequence of geometry_msgs__msg__TwistWithCovariance.
typedef struct geometry_msgs__msg__TwistWithCovariance__Sequence
{
  geometry_msgs__msg__TwistWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__TwistWithCovariance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE__STRUCT_H_
