// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/QuaternionStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__QUATERNION_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__QUATERNION_STAMPED__STRUCT_H_

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
#define geometry_msgs__msg__QuaternionStamped__TYPE_VERSION_HASH__INIT {1, { \
      0x54, 0x01, 0x0f, 0x95, 0xbd, 0x3d, 0x42, 0x84, \
      0x40, 0xb7, 0x8a, 0x68, 0x30, 0xa7, 0xc5, 0x54, \
      0xa9, 0x84, 0xd8, 0xe0, 0x54, 0x42, 0x69, 0xf5, \
      0x6e, 0x65, 0x1c, 0xdb, 0x85, 0x33, 0x36, 0xb1, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__QuaternionStamped__TYPE_VERSION_HASH = geometry_msgs__msg__QuaternionStamped__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/QuaternionStamped in the package geometry_msgs.
/**
  * This represents an orientation with reference coordinate frame and timestamp.
 */
typedef struct geometry_msgs__msg__QuaternionStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion quaternion;
} geometry_msgs__msg__QuaternionStamped;

// Struct for a sequence of geometry_msgs__msg__QuaternionStamped.
typedef struct geometry_msgs__msg__QuaternionStamped__Sequence
{
  geometry_msgs__msg__QuaternionStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__QuaternionStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__QUATERNION_STAMPED__STRUCT_H_
