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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define geometry_msgs__msg__Wrench__TYPE_VERSION_HASH__INIT {1, { \
      0x10, 0x1b, 0x57, 0x91, 0x82, 0xb3, 0x32, 0xbf, \
      0x6d, 0x63, 0x0b, 0x12, 0x52, 0xde, 0x83, 0xe6, \
      0x2f, 0xce, 0x4c, 0x6f, 0xa5, 0x27, 0x64, 0xd7, \
      0x14, 0x79, 0x00, 0xef, 0x97, 0x66, 0x07, 0xdd, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Wrench__TYPE_VERSION_HASH = geometry_msgs__msg__Wrench__TYPE_VERSION_HASH__INIT;

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
