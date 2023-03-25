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


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__Transform__TYPE_HASH = {1, {
    0xbe, 0xb8, 0x3f, 0xbe, 0x69, 0x86, 0x36, 0x35,
    0x14, 0x61, 0xf6, 0xf3, 0x5d, 0x1a, 0xbb, 0x20,
    0x01, 0x0c, 0x43, 0xd5, 0x53, 0x74, 0xd8, 0x1b,
    0xd0, 0x41, 0xf1, 0xba, 0x25, 0x81, 0xfd, 0xdc,
  }};

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
