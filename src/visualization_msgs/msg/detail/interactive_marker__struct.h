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

// Struct defined in msg/InteractiveMarker in the package visualization_msgs.
typedef struct visualization_msgs__msg__InteractiveMarker
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String description;
  float scale;
  visualization_msgs__msg__MenuEntry__Sequence menu_entries;
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
