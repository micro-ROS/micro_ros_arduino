// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:srv/GetInteractiveMarkers.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__STRUCT_H_
#define VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t visualization_msgs__srv__GetInteractiveMarkers__TYPE_HASH = {1, {
    0xbf, 0xdf, 0xaa, 0x86, 0x1f, 0x4a, 0x84, 0x22,
    0xb4, 0xec, 0x3b, 0xd0, 0x2c, 0x66, 0x81, 0xe4,
    0xa4, 0x5a, 0x83, 0xbd, 0xc2, 0x91, 0x3d, 0x8f,
    0xac, 0xdf, 0x92, 0x3d, 0x8a, 0xd1, 0x37, 0x6a,
  }};


// Type Hash for interface
static const rosidl_type_hash_t visualization_msgs__srv__GetInteractiveMarkers_Request__TYPE_HASH = {1, {
    0x7f, 0xa7, 0xe0, 0x83, 0x0e, 0x3c, 0xbe, 0x9c,
    0x15, 0x92, 0x7a, 0x29, 0xfd, 0xc0, 0x9f, 0xed,
    0xcd, 0x9a, 0x86, 0x75, 0x7e, 0x37, 0x5f, 0x29,
    0xce, 0x6b, 0x07, 0x44, 0xcb, 0x0b, 0x69, 0x05,
  }};

// Constants defined in the message

/// Struct defined in srv/GetInteractiveMarkers in the package visualization_msgs.
typedef struct visualization_msgs__srv__GetInteractiveMarkers_Request
{
  uint8_t structure_needs_at_least_one_member;
} visualization_msgs__srv__GetInteractiveMarkers_Request;

// Struct for a sequence of visualization_msgs__srv__GetInteractiveMarkers_Request.
typedef struct visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence
{
  visualization_msgs__srv__GetInteractiveMarkers_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t visualization_msgs__srv__GetInteractiveMarkers_Response__TYPE_HASH = {1, {
    0x41, 0x46, 0x20, 0xcf, 0x74, 0x71, 0xb5, 0x46,
    0x9b, 0x15, 0x99, 0x89, 0xaf, 0x34, 0xed, 0xd1,
    0xed, 0x92, 0x76, 0xbe, 0x59, 0x2e, 0x43, 0xd1,
    0xb7, 0x54, 0x42, 0x04, 0xf4, 0x17, 0x73, 0x02,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/interactive_marker__struct.h"

/// Struct defined in srv/GetInteractiveMarkers in the package visualization_msgs.
typedef struct visualization_msgs__srv__GetInteractiveMarkers_Response
{
  uint64_t sequence_number;
  /// All interactive markers provided by the server.
  visualization_msgs__msg__InteractiveMarker__Sequence markers;
} visualization_msgs__srv__GetInteractiveMarkers_Response;

// Struct for a sequence of visualization_msgs__srv__GetInteractiveMarkers_Response.
typedef struct visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence
{
  visualization_msgs__srv__GetInteractiveMarkers_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t visualization_msgs__srv__GetInteractiveMarkers_Event__TYPE_HASH = {1, {
    0x4f, 0x89, 0x24, 0x3e, 0x75, 0x71, 0xb9, 0x56,
    0x34, 0x64, 0xf4, 0x34, 0x9c, 0xeb, 0x14, 0xa6,
    0x08, 0x08, 0xa9, 0xa0, 0xb6, 0xf7, 0x29, 0x44,
    0xdb, 0xdf, 0xff, 0xd6, 0x42, 0x7d, 0xa2, 0xf4,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  visualization_msgs__srv__GetInteractiveMarkers_Event__request__MAX_SIZE = 1
};
// response
enum
{
  visualization_msgs__srv__GetInteractiveMarkers_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetInteractiveMarkers in the package visualization_msgs.
typedef struct visualization_msgs__srv__GetInteractiveMarkers_Event
{
  service_msgs__msg__ServiceEventInfo info;
  visualization_msgs__srv__GetInteractiveMarkers_Request__Sequence request;
  visualization_msgs__srv__GetInteractiveMarkers_Response__Sequence response;
} visualization_msgs__srv__GetInteractiveMarkers_Event;

// Struct for a sequence of visualization_msgs__srv__GetInteractiveMarkers_Event.
typedef struct visualization_msgs__srv__GetInteractiveMarkers_Event__Sequence
{
  visualization_msgs__srv__GetInteractiveMarkers_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__srv__GetInteractiveMarkers_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__SRV__DETAIL__GET_INTERACTIVE_MARKERS__STRUCT_H_
