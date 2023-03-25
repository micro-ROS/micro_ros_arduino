// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from shape_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__DETAIL__MESH__STRUCT_H_
#define SHAPE_MSGS__MSG__DETAIL__MESH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t shape_msgs__msg__Mesh__TYPE_HASH = {1, {
    0xf2, 0x15, 0x0b, 0x82, 0xd8, 0xee, 0x7e, 0x8b,
    0xc3, 0xf3, 0x96, 0xa2, 0xb1, 0x58, 0xae, 0xfb,
    0x4b, 0x9a, 0x55, 0x10, 0xa4, 0x74, 0xbe, 0x27,
    0x1b, 0xa1, 0x26, 0x8a, 0xeb, 0xb5, 0x52, 0x89,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'triangles'
#include "shape_msgs/msg/detail/mesh_triangle__struct.h"
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Mesh in the package shape_msgs.
/**
  * Definition of a mesh.
 */
typedef struct shape_msgs__msg__Mesh
{
  /// List of triangles; the index values refer to positions in vertices[].
  shape_msgs__msg__MeshTriangle__Sequence triangles;
  /// The actual vertices that make up the mesh.
  geometry_msgs__msg__Point__Sequence vertices;
} shape_msgs__msg__Mesh;

// Struct for a sequence of shape_msgs__msg__Mesh.
typedef struct shape_msgs__msg__Mesh__Sequence
{
  shape_msgs__msg__Mesh * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} shape_msgs__msg__Mesh__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SHAPE_MSGS__MSG__DETAIL__MESH__STRUCT_H_
