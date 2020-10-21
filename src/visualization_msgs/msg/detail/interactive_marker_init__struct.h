// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/InteractiveMarkerInit.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'server_id'
#include "rosidl_runtime_c/string.h"
// Member 'markers'
#include "visualization_msgs/msg/detail/interactive_marker__struct.h"

// Struct defined in msg/InteractiveMarkerInit in the package visualization_msgs.
typedef struct visualization_msgs__msg__InteractiveMarkerInit
{
  rosidl_runtime_c__String server_id;
  uint64_t seq_num;
  visualization_msgs__msg__InteractiveMarker__Sequence markers;
} visualization_msgs__msg__InteractiveMarkerInit;

// Struct for a sequence of visualization_msgs__msg__InteractiveMarkerInit.
typedef struct visualization_msgs__msg__InteractiveMarkerInit__Sequence
{
  visualization_msgs__msg__InteractiveMarkerInit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerInit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_INIT__STRUCT_H_
