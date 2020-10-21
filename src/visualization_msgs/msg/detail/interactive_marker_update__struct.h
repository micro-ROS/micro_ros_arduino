// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/InteractiveMarkerUpdate.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_UPDATE__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_UPDATE__STRUCT_H_

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
  visualization_msgs__msg__InteractiveMarkerUpdate__KEEP_ALIVE = 0
};

/// Constant 'UPDATE'.
enum
{
  visualization_msgs__msg__InteractiveMarkerUpdate__UPDATE = 1
};

// Include directives for member types
// Member 'server_id'
// Member 'erases'
#include "rosidl_runtime_c/string.h"
// Member 'markers'
#include "visualization_msgs/msg/detail/interactive_marker__struct.h"
// Member 'poses'
#include "visualization_msgs/msg/detail/interactive_marker_pose__struct.h"

// Struct defined in msg/InteractiveMarkerUpdate in the package visualization_msgs.
typedef struct visualization_msgs__msg__InteractiveMarkerUpdate
{
  rosidl_runtime_c__String server_id;
  uint64_t seq_num;
  uint8_t type;
  visualization_msgs__msg__InteractiveMarker__Sequence markers;
  visualization_msgs__msg__InteractiveMarkerPose__Sequence poses;
  rosidl_runtime_c__String__Sequence erases;
} visualization_msgs__msg__InteractiveMarkerUpdate;

// Struct for a sequence of visualization_msgs__msg__InteractiveMarkerUpdate.
typedef struct visualization_msgs__msg__InteractiveMarkerUpdate__Sequence
{
  visualization_msgs__msg__InteractiveMarkerUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__InteractiveMarkerUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__DETAIL__INTERACTIVE_MARKER_UPDATE__STRUCT_H_
