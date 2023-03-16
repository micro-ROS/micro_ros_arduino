// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Inertia.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__INERTIA__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__INERTIA__STRUCT_H_

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
#define geometry_msgs__msg__Inertia__TYPE_VERSION_HASH__INIT {1, { \
      0xf6, 0xe7, 0x6e, 0xe3, 0x1e, 0x53, 0x57, 0xf0, \
      0x03, 0xf8, 0xfe, 0x16, 0x6d, 0xa9, 0x99, 0x4c, \
      0xd5, 0x93, 0x91, 0xa7, 0x7f, 0x37, 0x77, 0xf2, \
      0x56, 0xee, 0x13, 0xea, 0x4e, 0xb3, 0x34, 0x4b, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Inertia__TYPE_VERSION_HASH = geometry_msgs__msg__Inertia__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'com'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Inertia in the package geometry_msgs.
/**
  * Mass
 */
typedef struct geometry_msgs__msg__Inertia
{
  double m;
  /// Center of mass
  geometry_msgs__msg__Vector3 com;
  /// Inertia Tensor
  ///     | ixx ixy ixz |
  /// I = | ixy iyy iyz |
  ///     | ixz iyz izz |
  double ixx;
  double ixy;
  double ixz;
  double iyy;
  double iyz;
  double izz;
} geometry_msgs__msg__Inertia;

// Struct for a sequence of geometry_msgs__msg__Inertia.
typedef struct geometry_msgs__msg__Inertia__Sequence
{
  geometry_msgs__msg__Inertia * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Inertia__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__INERTIA__STRUCT_H_
