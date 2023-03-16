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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__srv__FrameGraph__TYPE_VERSION_HASH__INIT {1, { \
      0x86, 0xa3, 0x12, 0x6b, 0x31, 0x82, 0xe9, 0xff, \
      0x1a, 0xb3, 0x75, 0xc7, 0xb0, 0x70, 0x95, 0xfc, \
      0x0e, 0xa2, 0xd1, 0xcc, 0x90, 0x99, 0x59, 0x6a, \
      0x49, 0x66, 0x58, 0x11, 0x13, 0x2e, 0xd5, 0x50, \
    }}
static const rosidl_type_hash_t tf2_msgs__srv__FrameGraph__TYPE_VERSION_HASH = tf2_msgs__srv__FrameGraph__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__srv__FrameGraph_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x86, 0x85, 0x22, 0x9c, 0xc9, 0x52, 0x81, 0xac, \
      0xcd, 0x67, 0xe5, 0x5c, 0x79, 0x65, 0xe6, 0x3d, \
      0xfd, 0x9f, 0x57, 0x35, 0x55, 0x23, 0x82, 0xdd, \
      0x9b, 0x9f, 0x69, 0xf3, 0x2c, 0x30, 0x58, 0x83, \
    }}
static const rosidl_type_hash_t tf2_msgs__srv__FrameGraph_Request__TYPE_VERSION_HASH = tf2_msgs__srv__FrameGraph_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__srv__FrameGraph_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x09, 0xc3, 0x79, 0x4e, 0x46, 0x7f, 0xca, 0x6c, \
      0xac, 0x44, 0x0c, 0x7a, 0x3e, 0x2a, 0x11, 0x99, \
      0x13, 0xed, 0x80, 0x35, 0x8e, 0x03, 0xb6, 0x79, \
      0x13, 0x93, 0xdd, 0xaa, 0x0e, 0xba, 0x9f, 0xb3, \
    }}
static const rosidl_type_hash_t tf2_msgs__srv__FrameGraph_Response__TYPE_VERSION_HASH = tf2_msgs__srv__FrameGraph_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__srv__FrameGraph_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xb9, 0x4f, 0xf2, 0x99, 0xb8, 0x45, 0x1b, 0xdc, \
      0x6f, 0xaf, 0x88, 0x54, 0x1d, 0xf7, 0xe6, 0xbb, \
      0x3c, 0x6e, 0xa8, 0x3b, 0xbd, 0x09, 0xcc, 0x1c, \
      0x36, 0xc3, 0xdc, 0x19, 0x86, 0xd5, 0xe7, 0x1d, \
    }}
static const rosidl_type_hash_t tf2_msgs__srv__FrameGraph_Event__TYPE_VERSION_HASH = tf2_msgs__srv__FrameGraph_Event__TYPE_VERSION_HASH__INIT;

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
