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


// Type Hash for interface
static const rosidl_type_hash_t shape_msgs__msg__Plane__TYPE_HASH = {1, {
    0xdf, 0xbf, 0xe8, 0x31, 0x46, 0x89, 0xc8, 0x50,
    0x61, 0x5d, 0x4a, 0x72, 0x7a, 0xf0, 0x17, 0xe9,
    0xaa, 0x86, 0xc1, 0x0e, 0x36, 0x9a, 0x60, 0x6c,
    0x8c, 0x85, 0x1e, 0xf8, 0xf1, 0x6c, 0x58, 0xc8,
  }};

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
