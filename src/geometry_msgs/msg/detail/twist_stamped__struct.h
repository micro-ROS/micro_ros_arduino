// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/TwistStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TWIST_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__TWIST_STAMPED__STRUCT_H_

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
#define geometry_msgs__msg__TwistStamped__TYPE_VERSION_HASH__INIT {1, { \
      0x21, 0x9c, 0x3e, 0x3b, 0xad, 0x2e, 0xca, 0x47, \
      0xf8, 0xf3, 0xa9, 0x39, 0x7f, 0x45, 0x0a, 0xf7, \
      0x63, 0x70, 0x06, 0x22, 0x1c, 0x5b, 0x1f, 0x4d, \
      0x8a, 0xcf, 0xab, 0xac, 0x4b, 0xbb, 0x2b, 0x9e, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__TwistStamped__TYPE_VERSION_HASH = geometry_msgs__msg__TwistStamped__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/TwistStamped in the package geometry_msgs.
/**
  * A twist with reference coordinate frame and timestamp
 */
typedef struct geometry_msgs__msg__TwistStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Twist twist;
} geometry_msgs__msg__TwistStamped;

// Struct for a sequence of geometry_msgs__msg__TwistStamped.
typedef struct geometry_msgs__msg__TwistStamped__Sequence
{
  geometry_msgs__msg__TwistStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__TwistStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TWIST_STAMPED__STRUCT_H_
