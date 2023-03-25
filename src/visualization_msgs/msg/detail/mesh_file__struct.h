// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/MeshFile.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__MESH_FILE__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__MESH_FILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t visualization_msgs__msg__MeshFile__TYPE_HASH = {1, {
    0x77, 0x10, 0xec, 0xe1, 0x5a, 0x14, 0x8f, 0xb7,
    0xc9, 0xb5, 0x46, 0x36, 0x4c, 0xfb, 0x21, 0x5b,
    0xb0, 0x60, 0x98, 0x08, 0x7b, 0xd6, 0x39, 0x4f,
    0xe5, 0xb7, 0x3a, 0x49, 0x35, 0x08, 0xf8, 0xc4,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'filename'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MeshFile in the package visualization_msgs.
/**
  * Used to send raw mesh files.
 */
typedef struct visualization_msgs__msg__MeshFile
{
  /// The filename is used for both debug purposes and to provide a file extension
  /// for whatever parser is used.
  rosidl_runtime_c__String filename;
  /// This stores the raw text of the mesh file.
  rosidl_runtime_c__uint8__Sequence data;
} visualization_msgs__msg__MeshFile;

// Struct for a sequence of visualization_msgs__msg__MeshFile.
typedef struct visualization_msgs__msg__MeshFile__Sequence
{
  visualization_msgs__msg__MeshFile * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__MeshFile__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__MESH_FILE__STRUCT_H_
