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

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t tf2_msgs__srv__FrameGraph__TYPE_HASH = {1, {
    0x0d, 0x1f, 0xbc, 0x62, 0x22, 0xc0, 0x18, 0xba,
    0x5f, 0x33, 0x82, 0x29, 0x04, 0xa2, 0xfd, 0xd4,
    0x06, 0x37, 0x05, 0x28, 0x99, 0x56, 0xd3, 0xfd,
    0xde, 0x07, 0xcd, 0x8c, 0x50, 0xfe, 0x80, 0x67,
  }};


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__srv__FrameGraph_Request__TYPE_HASH = {1, {
    0x4c, 0xc5, 0x65, 0xda, 0x6b, 0x64, 0x72, 0x6d,
    0x0b, 0x0b, 0xe1, 0xce, 0x20, 0xf3, 0xa3, 0xa6,
    0x95, 0x67, 0x9b, 0x84, 0x1a, 0x79, 0xab, 0xfc,
    0xa2, 0xfc, 0xdc, 0x94, 0xf5, 0x62, 0xb0, 0x8d,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__srv__FrameGraph_Response__TYPE_HASH = {1, {
    0xe3, 0x3d, 0x54, 0x73, 0xce, 0x0f, 0xac, 0x04,
    0xc6, 0x62, 0x03, 0x77, 0x9f, 0x2b, 0x71, 0x9a,
    0x9d, 0xe0, 0xf8, 0x38, 0x8b, 0x24, 0x88, 0x52,
    0xd3, 0xa4, 0x7a, 0x01, 0x9e, 0x62, 0xe3, 0x6d,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__srv__FrameGraph_Event__TYPE_HASH = {1, {
    0x97, 0xe5, 0x49, 0x4f, 0x0a, 0xf6, 0x40, 0x46,
    0xab, 0xdb, 0x3f, 0x1f, 0xc9, 0x1a, 0x91, 0xf0,
    0xa3, 0xac, 0x7f, 0x11, 0x32, 0xdc, 0xfe, 0x32,
    0xf3, 0x50, 0x60, 0x12, 0x27, 0xda, 0xa8, 0x17,
  }};

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
