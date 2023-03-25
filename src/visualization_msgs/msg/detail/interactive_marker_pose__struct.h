// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/InteractiveMarkerPose.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t visualization_msgs__msg__InteractiveMarkerPose__TYPE_HASH = {1, {
    0xc6, 0x0e, 0x9a, 0x44, 0x07, 0xd5, 0xf7, 0x09,
    0xa6, 0x3e, 0x0f, 0xe9, 0xca, 0xea, 0x32, 0x4a,
    0xee, 0x08, 0xfe, 0x71, 0x7c, 0xd0, 0x90, 0x20,
    0x9e, 0xbe, 0x35, 0x01, 0x2c, 0xe7, 0xcb, 0x66,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/InteractiveMarkerPose in the package visualization_msgs.
typedef struct visualization_msgs__msg__InteractiveMarkerPose
{
  /// Time/frame info.
  std_msgs__msg__Header header;
  /// Initial pose. Also, defines the pivot point for rotations.
  geometry_msgs__msg__Pose pose;
  /// Identifying string. Must be globally unique in
  /// the topic that this message is sent through.
  rosidl_runtime_c__String name;
} visualization_msgs__msg__InteractiveMarkerPose;

// Struct for a sequence of visualization_msgs__msg__InteractiveMarkerPose.
typedef struct visualization_msgs__msg__InteractiveMarkerPose__Sequence
{
  visualization_msgs__msg__InteractiveMarkerPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_POSE__STRUCT_H_
