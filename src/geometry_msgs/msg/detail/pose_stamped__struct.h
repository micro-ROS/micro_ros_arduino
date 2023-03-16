// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from geometry_msgs:msg/PoseStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POSE_STAMPED__STRUCT_H_
#define GEOMETRY_MSGS__MSG__DETAIL__POSE_STAMPED__STRUCT_H_

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
#define geometry_msgs__msg__PoseStamped__TYPE_VERSION_HASH__INIT {1, { \
      0x06, 0x6c, 0xf7, 0xf2, 0xb2, 0xf4, 0xb6, 0xe8, \
      0x1d, 0xdd, 0x63, 0xc9, 0x9b, 0xf3, 0x77, 0x89, \
      0xfe, 0xdd, 0x8c, 0x78, 0x4e, 0x0b, 0x9a, 0x7c, \
      0x3c, 0x25, 0xa9, 0xa8, 0x47, 0xa7, 0x24, 0xba, \
    }}
static const rosidl_type_hash_t geometry_msgs__msg__PoseStamped__TYPE_VERSION_HASH = geometry_msgs__msg__PoseStamped__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/PoseStamped in the package geometry_msgs.
/**
  * A Pose with reference coordinate frame and timestamp
 */
typedef struct geometry_msgs__msg__PoseStamped
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
} geometry_msgs__msg__PoseStamped;

// Struct for a sequence of geometry_msgs__msg__PoseStamped.
typedef struct geometry_msgs__msg__PoseStamped__Sequence
{
  geometry_msgs__msg__PoseStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} geometry_msgs__msg__PoseStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POSE_STAMPED__STRUCT_H_
