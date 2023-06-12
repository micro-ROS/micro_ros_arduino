// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tf2_msgs:srv/FrameGraph.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__STRUCT_H_
#define TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FrameGraph in the package tf2_msgs.
typedef struct tf2_msgs__srv__FrameGraph_Request
{
  uint8_t structure_needs_at_least_one_member;
} tf2_msgs__srv__FrameGraph_Request;

// Struct for a sequence of tf2_msgs__srv__FrameGraph_Request.
typedef struct tf2_msgs__srv__FrameGraph_Request__Sequence
{
  tf2_msgs__srv__FrameGraph_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__srv__FrameGraph_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'frame_yaml'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FrameGraph in the package tf2_msgs.
typedef struct tf2_msgs__srv__FrameGraph_Response
{
  rosidl_runtime_c__String frame_yaml;
} tf2_msgs__srv__FrameGraph_Response;

// Struct for a sequence of tf2_msgs__srv__FrameGraph_Response.
typedef struct tf2_msgs__srv__FrameGraph_Response__Sequence
{
  tf2_msgs__srv__FrameGraph_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__srv__FrameGraph_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tf2_msgs__srv__FrameGraph_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tf2_msgs__srv__FrameGraph_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/FrameGraph in the package tf2_msgs.
typedef struct tf2_msgs__srv__FrameGraph_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tf2_msgs__srv__FrameGraph_Request__Sequence request;
  tf2_msgs__srv__FrameGraph_Response__Sequence response;
} tf2_msgs__srv__FrameGraph_Event;

// Struct for a sequence of tf2_msgs__srv__FrameGraph_Event.
typedef struct tf2_msgs__srv__FrameGraph_Event__Sequence
{
  tf2_msgs__srv__FrameGraph_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__srv__FrameGraph_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__STRUCT_H_
