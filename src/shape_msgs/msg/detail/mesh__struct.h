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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define shape_msgs__msg__Mesh__TYPE_VERSION_HASH__INIT {1, { \
      0xb1, 0x02, 0x33, 0x0d, 0x83, 0x6a, 0xfa, 0x94, \
      0x26, 0xa5, 0xf9, 0x37, 0x17, 0x04, 0xbd, 0xe0, \
      0xb7, 0x68, 0xab, 0x55, 0xb3, 0x4a, 0xdc, 0x40, \
      0xcd, 0x25, 0x03, 0x72, 0xcd, 0xd3, 0x9b, 0x29, \
    }}
static const rosidl_type_hash_t shape_msgs__msg__Mesh__TYPE_VERSION_HASH = shape_msgs__msg__Mesh__TYPE_VERSION_HASH__INIT;

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
