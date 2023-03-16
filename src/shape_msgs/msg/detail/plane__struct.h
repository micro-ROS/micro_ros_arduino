// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shape_msgs:msg/Plane.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__PLANE__STRUCT_H_
#define SHAPE_MSGS__MSG__DETAIL__PLANE__STRUCT_H_

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
#define shape_msgs__msg__Plane__TYPE_VERSION_HASH__INIT {1, { \
      0x03, 0x59, 0x35, 0xce, 0x1f, 0x89, 0x2b, 0x86, \
      0x6a, 0xf0, 0xe5, 0x01, 0x96, 0xf6, 0xff, 0xd2, \
      0x4a, 0x4b, 0xbe, 0x3d, 0x77, 0xda, 0xea, 0xee, \
      0xd4, 0x13, 0xd9, 0x49, 0x4c, 0x41, 0xb3, 0x57, \
    }}
static const rosidl_type_hash_t shape_msgs__msg__Plane__TYPE_VERSION_HASH = shape_msgs__msg__Plane__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Plane in the package shape_msgs.
/**
  * Representation of a plane, using the plane equation ax + by + cz + d = 0.
  *
  * a := coef[0]
  * b := coef[1]
  * c := coef[2]
  * d := coef[3]
 */
typedef struct shape_msgs__msg__Plane
{
  double coef[4];
} shape_msgs__msg__Plane;

// Struct for a sequence of shape_msgs__msg__Plane.
typedef struct shape_msgs__msg__Plane__Sequence
{
  shape_msgs__msg__Plane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_msgs__msg__Plane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__DETAIL__PLANE__STRUCT_H_
