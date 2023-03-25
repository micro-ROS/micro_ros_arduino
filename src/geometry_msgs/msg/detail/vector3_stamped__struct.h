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


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__Vector3Stamped__TYPE_HASH = {1, {
    0xd4, 0x82, 0x96, 0x22, 0x28, 0x8c, 0xbb, 0x44,
    0x38, 0x86, 0xe7, 0xea, 0x94, 0xea, 0x56, 0x71,
    0xa3, 0xb1, 0xbe, 0x6b, 0xab, 0x4a, 0xd0, 0x42,
    0x24, 0x43, 0x2a, 0x65, 0xf7, 0xd7, 0x88, 0x7a,
  }};

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
