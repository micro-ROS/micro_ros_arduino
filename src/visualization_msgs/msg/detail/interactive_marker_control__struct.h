// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/InteractiveMarkerControl.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INHERIT'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__INHERIT = 0
};

/// Constant 'FIXED'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__FIXED = 1
};

/// Constant 'VIEW_FACING'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__VIEW_FACING = 2
};

/// Constant 'NONE'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__NONE = 0
};

/// Constant 'MENU'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MENU = 1
};

/// Constant 'BUTTON'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__BUTTON = 2
};

/// Constant 'MOVE_AXIS'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MOVE_AXIS = 3
};

/// Constant 'MOVE_PLANE'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MOVE_PLANE = 4
};

/// Constant 'ROTATE_AXIS'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__ROTATE_AXIS = 5
};

/// Constant 'MOVE_ROTATE'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MOVE_ROTATE = 6
};

/// Constant 'MOVE_3D'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MOVE_3D = 7
};

/// Constant 'ROTATE_3D'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__ROTATE_3D = 8
};

/// Constant 'MOVE_ROTATE_3D'.
enum
{
  visualization_msgs__msg__InteractiveMarkerControl__MOVE_ROTATE_3D = 9
};

// Include directives for member types
// Member 'name'
// Member 'description'
#include "rosidl_runtime_c/string.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'markers'
#include "visualization_msgs/msg/detail/marker__struct.h"

// Struct defined in msg/InteractiveMarkerControl in the package visualization_msgs.
typedef struct visualization_msgs__msg__InteractiveMarkerControl
{
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Quaternion orientation;
  uint8_t orientation_mode;
  uint8_t interaction_mode;
  bool always_visible;
  visualization_msgs__msg__Marker__Sequence markers;
  bool independent_marker_orientation;
  rosidl_runtime_c__String description;
} visualization_msgs__msg__InteractiveMarkerControl;

// Struct for a sequence of visualization_msgs__msg__InteractiveMarkerControl.
typedef struct visualization_msgs__msg__InteractiveMarkerControl__Sequence
{
  visualization_msgs__msg__InteractiveMarkerControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_CONTROL__STRUCT_H_
