// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/AccelWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__AccelWithCovarianceStamped__TYPE_HASH = {1, {
    0x61, 0xc9, 0xad, 0x89, 0x28, 0xe7, 0x1d, 0xd9,
    0x5c, 0xe7, 0x91, 0xb2, 0xf0, 0x28, 0x09, 0xee,
    0x2a, 0x0b, 0xbc, 0xc4, 0x2c, 0xd0, 0xe4, 0x04,
    0x7f, 0xd0, 0x0a, 0x82, 0x2a, 0x08, 0xe4, 0x44,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.h"

/// Struct defined in msg/AccelWithCovarianceStamped in the package geometry_msgs.
/**
  * This represents an estimated accel with reference coordinate frame and timestamp.
 */
typedef struct geometry_msgs__msg__AccelWithCovarianceStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__AccelWithCovariance accel;
} geometry_msgs__msg__AccelWithCovarianceStamped;

// Struct for a sequence of geometry_msgs__msg__AccelWithCovarianceStamped.
typedef struct geometry_msgs__msg__AccelWithCovarianceStamped__Sequence
{
  geometry_msgs__msg__AccelWithCovarianceStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__AccelWithCovarianceStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL_WITH_COVARIANCE_STAMPED__STRUCT_H_
