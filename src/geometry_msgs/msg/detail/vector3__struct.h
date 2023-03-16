// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Vector3.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__VECTOR3__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__VECTOR3__STRUCT_H_

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
#define geometry_msgs__msg__Vector3__TYPE_VERSION_HASH__INIT {1, { \
      0x6e, 0x0d, 0x79, 0xcf, 0xb6, 0x30, 0xd2, 0xe1, \
      0xb0, 0x5b, 0x89, 0x88, 0xa2, 0x55, 0xd2, 0xa8, \
      0x28, 0xb6, 0xd2, 0x17, 0x26, 0xdf, 0x71, 0xf6, \
      0xac, 0xdb, 0xb7, 0x30, 0x1c, 0x95, 0x5c, 0x8b, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__TYPE_VERSION_HASH = geometry_msgs__msg__Vector3__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Vector3 in the package geometry_msgs.
/**
  * This represents a vector in free space.
 */
typedef struct geometry_msgs__msg__Vector3
{
  /// This is semantically different than a point.
  /// A vector is always anchored at the origin.
  /// When a transform is applied to a vector, only the rotational component is applied.
  double x;
  double y;
  double z;
} geometry_msgs__msg__Vector3;

// Struct for a sequence of geometry_msgs__msg__Vector3.
typedef struct geometry_msgs__msg__Vector3__Sequence
{
  geometry_msgs__msg__Vector3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Vector3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__VECTOR3__STRUCT_H_
