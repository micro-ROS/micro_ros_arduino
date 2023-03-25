// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Wrench.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__WRENCH__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__WRENCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__Wrench__TYPE_HASH = {1, {
    0x01, 0x8e, 0x85, 0x19, 0xd5, 0x7c, 0x16, 0xad,
    0xbe, 0x97, 0xc9, 0xfe, 0x14, 0x60, 0xef, 0x21,
    0xfe, 0xc7, 0xe3, 0x1b, 0xc5, 0x41, 0xde, 0x3d,
    0x65, 0x3a, 0x35, 0x89, 0x56, 0x77, 0xce, 0x52,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'force'
// Member 'torque'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Wrench in the package geometry_msgs.
/**
  * This represents force in free space, separated into its linear and angular parts.
 */
typedef struct geometry_msgs__msg__Wrench
{
  geometry_msgs__msg__Vector3 force;
  geometry_msgs__msg__Vector3 torque;
} geometry_msgs__msg__Wrench;

// Struct for a sequence of geometry_msgs__msg__Wrench.
typedef struct geometry_msgs__msg__Wrench__Sequence
{
  geometry_msgs__msg__Wrench * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Wrench__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__WRENCH__STRUCT_H_
