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


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__TwistStamped__TYPE_HASH = {1, {
    0x5f, 0x0f, 0xcd, 0x4f, 0x81, 0xd5, 0xd0, 0x6a,
    0xd9, 0xb4, 0xc4, 0xc6, 0x3e, 0x3e, 0xa5, 0x1b,
    0x82, 0xd6, 0xae, 0x4d, 0x05, 0x58, 0xf1, 0xd4,
    0x75, 0x22, 0x9b, 0x11, 0x21, 0xdb, 0x6f, 0x64,
  }};

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
