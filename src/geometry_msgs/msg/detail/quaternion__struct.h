// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__QUATERNION__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__QUATERNION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__TYPE_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};

// Constants defined in the message

/// Struct defined in msg/Quaternion in the package geometry_msgs.
/**
  * This represents an orientation in free space in quaternion form.
 */
typedef struct geometry_msgs__msg__Quaternion
{
  double x;
  double y;
  double z;
  double w;
} geometry_msgs__msg__Quaternion;

// Struct for a sequence of geometry_msgs__msg__Quaternion.
typedef struct geometry_msgs__msg__Quaternion__Sequence
{
  geometry_msgs__msg__Quaternion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Quaternion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__QUATERNION__STRUCT_H_
