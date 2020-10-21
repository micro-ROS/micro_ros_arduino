// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/InteractiveMarkerFeedback.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_FEEDBACK__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'KEEP_ALIVE'.
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__KEEP_ALIVE = 0
};

/// Constant 'POSE_UPDATE'.
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__POSE_UPDATE = 1
};

/// Constant 'MENU_SELECT'.
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__MENU_SELECT = 2
};

/// Constant 'BUTTON_CLICK'.
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__BUTTON_CLICK = 3
};

/// Constant 'MOUSE_DOWN'.
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__MOUSE_DOWN = 4
};

/// Constant 'MOUSE_UP'.
enum
{
  visualization_msgs__msg__InteractiveMarkerFeedback__MOUSE_UP = 5
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'client_id'
// Member 'marker_name'
// Member 'control_name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'mouse_point'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/InteractiveMarkerFeedback in the package visualization_msgs.
typedef struct visualization_msgs__msg__InteractiveMarkerFeedback
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String client_id;
  rosidl_runtime_c__String marker_name;
  rosidl_runtime_c__String control_name;
  uint8_t event_type;
  geometry_msgs__msg__Pose pose;
  uint32_t menu_entry_id;
  geometry_msgs__msg__Point mouse_point;
  bool mouse_point_valid;
} visualization_msgs__msg__InteractiveMarkerFeedback;

// Struct for a sequence of visualization_msgs__msg__InteractiveMarkerFeedback.
typedef struct visualization_msgs__msg__InteractiveMarkerFeedback__Sequence
{
  visualization_msgs__msg__InteractiveMarkerFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_FEEDBACK__STRUCT_H_
