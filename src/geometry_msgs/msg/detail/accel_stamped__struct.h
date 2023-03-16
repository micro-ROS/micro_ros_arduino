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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define geometry_msgs__msg__AccelStamped__TYPE_VERSION_HASH__INIT {1, { \
      0x5e, 0x5e, 0x38, 0x6e, 0xdd, 0xd8, 0x2e, 0xda, \
      0xa3, 0x8f, 0xff, 0x38, 0xf0, 0x4d, 0x6b, 0xf5, \
      0xd8, 0xb3, 0xb9, 0x6e, 0x21, 0xbb, 0x40, 0x05, \
      0x73, 0xc6, 0x40, 0x3f, 0x65, 0x7b, 0x89, 0x7e, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__AccelStamped__TYPE_VERSION_HASH = geometry_msgs__msg__AccelStamped__TYPE_VERSION_HASH__INIT;

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
