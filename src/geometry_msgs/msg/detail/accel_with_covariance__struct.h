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

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__AccelWithCovariance__TYPE_HASH = {1, {
    0x23, 0x0d, 0x51, 0xbd, 0x53, 0xbc, 0x36, 0xf2,
    0x60, 0x57, 0x4e, 0x73, 0xb4, 0x29, 0x41, 0xce,
    0xfe, 0x44, 0x68, 0x47, 0x53, 0x48, 0x0b, 0x6f,
    0xc3, 0x30, 0xc0, 0x32, 0xc5, 0xdb, 0x59, 0x97,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'accel'
#include "geometry_msgs/msg/detail/accel__struct.h"

/// Struct defined in msg/AccelWithCovariance in the package geometry_msgs.
/**
  * This expresses acceleration in free space with uncertainty.
 */
typedef struct geometry_msgs__msg__AccelWithCovariance
{
  geometry_msgs__msg__Accel accel;
  /// Row-major representation of the 6x6 covariance matrix
  /// The orientation parameters use a fixed-axis representation.
  /// In order, the parameters are:
  /// (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
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
