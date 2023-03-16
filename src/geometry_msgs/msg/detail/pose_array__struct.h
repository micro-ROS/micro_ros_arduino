// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/PoseArray.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__STRUCT_H_

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
#define geometry_msgs__msg__PoseArray__TYPE_VERSION_HASH__INIT {1, { \
      0xc5, 0xbb, 0xab, 0x95, 0xe5, 0xa1, 0x5a, 0xc8, \
      0x76, 0xaf, 0x44, 0xce, 0xae, 0x70, 0x2c, 0x74, \
      0xf6, 0x55, 0xca, 0xc2, 0x93, 0x13, 0x67, 0xc3, \
      0x25, 0x1c, 0x1c, 0x30, 0x9e, 0xe2, 0x17, 0x33, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__PoseArray__TYPE_VERSION_HASH = geometry_msgs__msg__PoseArray__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseArray in the package geometry_msgs.
/**
  * An array of poses with a header for global reference.
 */
typedef struct geometry_msgs__msg__PoseArray
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose__Sequence poses;
} geometry_msgs__msg__PoseArray;

// Struct for a sequence of geometry_msgs__msg__PoseArray.
typedef struct geometry_msgs__msg__PoseArray__Sequence
{
  geometry_msgs__msg__PoseArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PoseArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_ARRAY__STRUCT_H_
