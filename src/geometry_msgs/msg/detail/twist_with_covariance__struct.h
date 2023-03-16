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

#include "rosidl_runtime_c/type_hash.h"


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define geometry_msgs__msg__TwistWithCovariance__TYPE_VERSION_HASH__INIT {1, { \
      0xe4, 0x6d, 0x17, 0x2d, 0xf1, 0x5d, 0x85, 0x61, \
      0x48, 0xb3, 0xdc, 0x12, 0x72, 0x3e, 0x10, 0x0c, \
      0x2d, 0xa4, 0xd2, 0xc5, 0xd6, 0x76, 0x4d, 0x67, \
      0xaa, 0x98, 0x9f, 0x46, 0x57, 0x43, 0xe7, 0xea, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__TwistWithCovariance__TYPE_VERSION_HASH = geometry_msgs__msg__TwistWithCovariance__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/TwistWithCovariance in the package geometry_msgs.
/**
  * This expresses velocity in free space with uncertainty.
 */
typedef struct geometry_msgs__msg__TwistWithCovariance
{
  geometry_msgs__msg__Twist twist;
  /// Row-major representation of the 6x6 covariance matrix
  /// The orientation parameters use a fixed-axis representation.
  /// In order, the parameters are:
  /// (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
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
