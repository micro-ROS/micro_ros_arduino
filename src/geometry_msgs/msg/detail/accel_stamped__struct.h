// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/AccelStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__AccelStamped__TYPE_HASH = {1, {
    0xef, 0x1d, 0xf9, 0xea, 0xba, 0xe0, 0xa7, 0x08,
    0xcc, 0x04, 0x9a, 0x06, 0x1e, 0xbc, 0xdd, 0xc4,
    0xe2, 0xa5, 0xf7, 0x45, 0x73, 0x01, 0x00, 0xba,
    0x68, 0x0e, 0x08, 0x6a, 0x96, 0x98, 0xb1, 0x65,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel__struct.h"

/// Struct defined in msg/AccelStamped in the package geometry_msgs.
/**
  * An accel with reference coordinate frame and timestamp
 */
typedef struct geometry_msgs__msg__AccelStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Accel accel;
} geometry_msgs__msg__AccelStamped;

// Struct for a sequence of geometry_msgs__msg__AccelStamped.
typedef struct geometry_msgs__msg__AccelStamped__Sequence
{
  geometry_msgs__msg__AccelStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__AccelStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL_STAMPED__STRUCT_H_
