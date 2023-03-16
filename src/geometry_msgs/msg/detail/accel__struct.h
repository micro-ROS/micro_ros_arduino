// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Accel.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__ACCEL__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__ACCEL__STRUCT_H_

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
#define geometry_msgs__msg__Accel__TYPE_VERSION_HASH__INIT {1, { \
      0x09, 0xae, 0xe2, 0x1c, 0xc8, 0xca, 0xe4, 0x05, \
      0xb3, 0x5d, 0xf5, 0x74, 0x97, 0xa4, 0x79, 0xbb, \
      0xd3, 0x71, 0x64, 0x71, 0x53, 0xd5, 0x51, 0x1d, \
      0x08, 0x15, 0x7c, 0xb8, 0xcb, 0xc1, 0x18, 0x76, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Accel__TYPE_VERSION_HASH = geometry_msgs__msg__Accel__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Accel in the package geometry_msgs.
/**
  * This expresses acceleration in free space broken into its linear and angular parts.
 */
typedef struct geometry_msgs__msg__Accel
{
  geometry_msgs__msg__Vector3 linear;
  geometry_msgs__msg__Vector3 angular;
} geometry_msgs__msg__Accel;

// Struct for a sequence of geometry_msgs__msg__Accel.
typedef struct geometry_msgs__msg__Accel__Sequence
{
  geometry_msgs__msg__Accel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Accel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__ACCEL__STRUCT_H_
