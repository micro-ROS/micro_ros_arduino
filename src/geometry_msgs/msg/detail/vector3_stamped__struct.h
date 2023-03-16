// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Vector3Stamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__VECTOR3_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__VECTOR3_STAMPED__STRUCT_H_

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
#define geometry_msgs__msg__Vector3Stamped__TYPE_VERSION_HASH__INIT {1, { \
      0x88, 0xa9, 0x76, 0x36, 0xd0, 0xaf, 0xfd, 0x21, \
      0xe2, 0x13, 0x9d, 0x2f, 0xa8, 0x7e, 0x94, 0x5f, \
      0x3b, 0x97, 0x1b, 0x7f, 0x32, 0xf0, 0xec, 0x6b, \
      0x64, 0xde, 0x19, 0x21, 0x7b, 0xbb, 0x29, 0x7a, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Vector3Stamped__TYPE_VERSION_HASH = geometry_msgs__msg__Vector3Stamped__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'vector'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Vector3Stamped in the package geometry_msgs.
/**
  * This represents a Vector3 with reference coordinate frame and timestamp
 */
typedef struct geometry_msgs__msg__Vector3Stamped
{
  /// Note that this follows vector semantics with it always anchored at the origin,
  /// so the rotational elements of a transform are the only parts applied when transforming.
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 vector;
} geometry_msgs__msg__Vector3Stamped;

// Struct for a sequence of geometry_msgs__msg__Vector3Stamped.
typedef struct geometry_msgs__msg__Vector3Stamped__Sequence
{
  geometry_msgs__msg__Vector3Stamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Vector3Stamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__VECTOR3_STAMPED__STRUCT_H_
