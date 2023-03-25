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


// Type Hash for interface
static const rosidl_type_hash_t geometry_msgs__msg__Point32__TYPE_HASH = {1, {
    0x2f, 0xc4, 0xdb, 0x7c, 0xae, 0x16, 0xa4, 0x58,
    0x2c, 0x79, 0xa5, 0x6b, 0x66, 0x17, 0x3a, 0x8d,
    0x48, 0xd5, 0x2c, 0x7d, 0xc5, 0x20, 0xdd, 0xc5,
    0x5a, 0x0d, 0x4b, 0xcf, 0x2a, 0x4b, 0xfd, 0xbc,
  }};

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
