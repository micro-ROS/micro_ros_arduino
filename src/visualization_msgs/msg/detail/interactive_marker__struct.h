// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/InteractiveMarker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Type Hash for interface
static const rosidl_type_hash_t visualization_msgs__msg__InteractiveMarker__TYPE_HASH = {1, {
    0x3d, 0x5b, 0x51, 0x44, 0x8b, 0x51, 0xd7, 0x3b,
    0x0f, 0x39, 0x5b, 0x94, 0xd2, 0x59, 0xed, 0xd3,
    0xa5, 0xd2, 0x69, 0xae, 0x9f, 0x7d, 0x9f, 0xd5,
    0xcc, 0xeb, 0x9a, 0xe4, 0xb7, 0x2b, 0xe3, 0x46,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'name'
// Member 'description'
#include "rosidl_runtime_c/string.h"
// Member 'menu_entries'
#include "visualization_msgs/msg/detail/menu_entry__struct.h"
// Member 'controls'
#include "visualization_msgs/msg/detail/interactive_marker_control__struct.h"

/// Struct defined in msg/InteractiveMarker in the package visualization_msgs.
/**
  * Time/frame info.
  * If header.time is set to 0, the marker will be retransformed into
  * its frame on each timestep. You will receive the pose feedback
  * in the same frame.
  * Otherwise, you might receive feedback in a different frame.
  * For rviz, this will be the current 'fixed frame' set by the user.
 */
typedef struct visualization_msgs__msg__InteractiveMarker
{
  std_msgs__msg__Header header;
  /// Initial pose. Also, defines the pivot point for rotations.
  geometry_msgs__msg__Pose pose;
  /// Identifying string. Must be globally unique in
  /// the topic that this message is sent through.
  rosidl_runtime_c__String name;
  /// Short description (< 40 characters).
  rosidl_runtime_c__String description;
  /// Scale to be used for default controls (default=1).
  float scale;
  /// All menu and submenu entries associated with this marker.
  visualization_msgs__msg__MenuEntry__Sequence menu_entries;
  /// List of controls displayed for this marker.
  visualization_msgs__msg__InteractiveMarkerControl__Sequence controls;
} visualization_msgs__msg__InteractiveMarker;

// Struct for a sequence of visualization_msgs__msg__InteractiveMarker.
typedef struct visualization_msgs__msg__InteractiveMarker__Sequence
{
  visualization_msgs__msg__InteractiveMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER__STRUCT_H_
