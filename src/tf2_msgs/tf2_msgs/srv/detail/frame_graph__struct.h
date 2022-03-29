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

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__SRV__DETAIL__FRAME_GRAPH__STRUCT_H_
