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


// Constants defined in the message

// Include directives for member types
// Member 'filename'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/MeshFile in the package visualization_msgs.
typedef struct visualization_msgs__msg__MeshFile
{
  rosidl_runtime_c__String filename;
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
