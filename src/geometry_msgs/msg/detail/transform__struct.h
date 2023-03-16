// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Transform.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM__STRUCT_H_

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
#define geometry_msgs__msg__Transform__TYPE_VERSION_HASH__INIT {1, { \
      0xf3, 0x0d, 0x44, 0xb2, 0xea, 0xe1, 0xf6, 0xe1, \
      0x2a, 0x89, 0x11, 0x80, 0x30, 0xbb, 0x69, 0x01, \
      0xc6, 0x77, 0x3c, 0x85, 0xf2, 0x83, 0xac, 0x1d, \
      0xfb, 0x37, 0xc8, 0xa8, 0xc1, 0x29, 0xe3, 0x55, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Transform__TYPE_VERSION_HASH = geometry_msgs__msg__Transform__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'rotation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/Transform in the package geometry_msgs.
/**
  * This represents the transform between two coordinate frames in free space.
 */
typedef struct geometry_msgs__msg__Transform
{
  geometry_msgs__msg__Vector3 translation;
  geometry_msgs__msg__Quaternion rotation;
} geometry_msgs__msg__Transform;

// Struct for a sequence of geometry_msgs__msg__Transform.
typedef struct geometry_msgs__msg__Transform__Sequence
{
  geometry_msgs__msg__Transform * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Transform__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__TRANSFORM__STRUCT_H_
