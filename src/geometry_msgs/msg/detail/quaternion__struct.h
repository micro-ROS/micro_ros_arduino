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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define geometry_msgs__msg__Quaternion__TYPE_VERSION_HASH__INIT {1, { \
      0xbb, 0xe9, 0x50, 0xa5, 0x0b, 0x75, 0xb1, 0x4f, \
      0x76, 0x74, 0x01, 0x32, 0x71, 0x8f, 0xd1, 0x76, \
      0xa1, 0x8f, 0xfc, 0x29, 0x7b, 0x6c, 0x39, 0x2a, \
      0x71, 0x67, 0xe1, 0xa1, 0xb8, 0x46, 0x86, 0xc6, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__TYPE_VERSION_HASH = geometry_msgs__msg__Quaternion__TYPE_VERSION_HASH__INIT;

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
