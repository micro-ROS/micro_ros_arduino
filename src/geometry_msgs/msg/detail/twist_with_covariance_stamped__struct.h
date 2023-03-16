// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/TwistWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE_STAMPED__STRUCT_H_

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
#define geometry_msgs__msg__TwistWithCovarianceStamped__TYPE_VERSION_HASH__INIT {1, { \
      0x36, 0xf8, 0xce, 0xd1, 0xb6, 0xb3, 0x09, 0xa9, \
      0xb1, 0x90, 0x34, 0xe6, 0x47, 0x37, 0xb3, 0x85, \
      0xd2, 0xdf, 0x22, 0x9f, 0xb3, 0x84, 0x32, 0x60, \
      0x76, 0x4e, 0x2b, 0x4f, 0xc2, 0x0f, 0x7e, 0x75, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__TwistWithCovarianceStamped__TYPE_VERSION_HASH = geometry_msgs__msg__TwistWithCovarianceStamped__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"

/// Struct defined in msg/TwistWithCovarianceStamped in the package geometry_msgs.
/**
  * This represents an estimated twist with reference coordinate frame and timestamp.
 */
typedef struct geometry_msgs__msg__TwistWithCovarianceStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__TwistWithCovariance twist;
} geometry_msgs__msg__TwistWithCovarianceStamped;

// Struct for a sequence of geometry_msgs__msg__TwistWithCovarianceStamped.
typedef struct geometry_msgs__msg__TwistWithCovarianceStamped__Sequence
{
  geometry_msgs__msg__TwistWithCovarianceStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__TwistWithCovarianceStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TWIST_WITH_COVARIANCE_STAMPED__STRUCT_H_
