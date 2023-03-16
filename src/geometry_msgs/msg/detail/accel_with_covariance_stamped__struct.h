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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define geometry_msgs__msg__AccelWithCovarianceStamped__TYPE_VERSION_HASH__INIT {1, { \
      0xf1, 0xbc, 0xb8, 0x7e, 0x0f, 0xc2, 0x91, 0xcd, \
      0x12, 0xad, 0x6e, 0x56, 0xf8, 0x5e, 0xde, 0x70, \
      0xff, 0x3f, 0xc6, 0xcb, 0x61, 0x71, 0xcf, 0x47, \
      0x47, 0xc4, 0xb8, 0xe9, 0x3c, 0x0c, 0x1c, 0x1d, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__AccelWithCovarianceStamped__TYPE_VERSION_HASH = geometry_msgs__msg__AccelWithCovarianceStamped__TYPE_VERSION_HASH__INIT;

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
