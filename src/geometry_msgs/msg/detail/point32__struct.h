// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/Point32.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POINT32__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POINT32__STRUCT_H_

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
#define geometry_msgs__msg__Point32__TYPE_VERSION_HASH__INIT {1, { \
      0x4c, 0xe1, 0xcb, 0x79, 0x35, 0x21, 0xbb, 0x07, \
      0xc9, 0x1b, 0xaa, 0xb8, 0x68, 0xb2, 0xf7, 0x08, \
      0xc1, 0x09, 0xce, 0x55, 0x48, 0xf2, 0xe4, 0x99, \
      0x0c, 0x25, 0x40, 0xca, 0x9f, 0x72, 0xa0, 0x6f, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__Point32__TYPE_VERSION_HASH = geometry_msgs__msg__Point32__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/Point32 in the package geometry_msgs.
/**
  * This contains the position of a point in free space(with 32 bits of precision).
  * It is recommended to use Point wherever possible instead of Point32.
  *
  * This recommendation is to promote interoperability.
  *
  * This message is designed to take up less space when sending
  * lots of points at once, as in the case of a PointCloud.
 */
typedef struct geometry_msgs__msg__Point32
{
  float x;
  float y;
  float z;
} geometry_msgs__msg__Point32;

// Struct for a sequence of geometry_msgs__msg__Point32.
typedef struct geometry_msgs__msg__Point32__Sequence
{
  geometry_msgs__msg__Point32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__Point32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POINT32__STRUCT_H_
