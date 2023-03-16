// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shape_msgs:msg/MeshTriangle.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__STRUCT_H_
#define SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__STRUCT_H_

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
#define shape_msgs__msg__MeshTriangle__TYPE_VERSION_HASH__INIT {1, { \
      0x80, 0xa3, 0xe9, 0x53, 0xc8, 0x0b, 0xfc, 0x62, \
      0x91, 0x06, 0x53, 0x88, 0x4e, 0x98, 0xd7, 0xc1, \
      0x05, 0x0c, 0x2d, 0xd9, 0xc0, 0x87, 0xe7, 0xf3, \
      0xfa, 0x77, 0xf0, 0x6e, 0xd0, 0x96, 0x9b, 0x60, \
    }}
static const rosidl_type_hash_t shape_msgs__msg__MeshTriangle__TYPE_VERSION_HASH = shape_msgs__msg__MeshTriangle__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in msg/MeshTriangle in the package shape_msgs.
/**
  * Definition of a triangle's vertices.
 */
typedef struct shape_msgs__msg__MeshTriangle
{
  uint32_t vertex_indices[3];
} shape_msgs__msg__MeshTriangle;

// Struct for a sequence of shape_msgs__msg__MeshTriangle.
typedef struct shape_msgs__msg__MeshTriangle__Sequence
{
  shape_msgs__msg__MeshTriangle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_msgs__msg__MeshTriangle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH_TRIANGLE__STRUCT_H_
