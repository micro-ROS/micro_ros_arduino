// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__PLANE__STRUCT_H_
#define SHAPE_MSGS__MSG__DETAIL__PLANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Plane in the package shape_msgs.
typedef struct shape_msgs__msg__Plane
{
  double coef[4];
} shape_msgs__msg__Plane;

// Struct for a sequence of shape_msgs__msg__Plane.
typedef struct shape_msgs__msg__Plane__Sequence
{
  shape_msgs__msg__Plane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_msgs__msg__Plane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__DETAIL__PLANE__STRUCT_H_
