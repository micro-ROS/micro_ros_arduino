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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define visualization_msgs__srv__GetInteractiveMarkers__TYPE_VERSION_HASH__INIT {1, { \
      0x19, 0xde, 0xe2, 0xf6, 0x6b, 0x6d, 0x8f, 0x44, \
      0x27, 0x93, 0xcd, 0x33, 0xb4, 0x49, 0x3c, 0xde, \
      0x35, 0x64, 0x37, 0x63, 0x74, 0x82, 0xd3, 0x67, \
      0xd2, 0x3a, 0x4e, 0xf1, 0xf2, 0x69, 0xcd, 0x23, \
    }}
static const rosidl_type_hash_t visualization_msgs__srv__GetInteractiveMarkers__TYPE_VERSION_HASH = visualization_msgs__srv__GetInteractiveMarkers__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define visualization_msgs__srv__GetInteractiveMarkers_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x81, 0xcd, 0x0d, 0x35, 0x35, 0x65, 0x6f, 0x33, \
      0xc6, 0xe0, 0xec, 0xe5, 0x0f, 0x70, 0x10, 0x6e, \
      0xcd, 0xf4, 0xfc, 0x81, 0x54, 0x4c, 0x7e, 0x77, \
      0x90, 0x3b, 0x18, 0x38, 0xae, 0xc3, 0x03, 0x03, \
    }}
static const rosidl_type_hash_t visualization_msgs__srv__GetInteractiveMarkers_Request__TYPE_VERSION_HASH = visualization_msgs__srv__GetInteractiveMarkers_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define visualization_msgs__srv__GetInteractiveMarkers_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x1c, 0x69, 0x42, 0x11, 0xf2, 0x44, 0x7f, 0x7b, \
      0xce, 0x8a, 0x11, 0x55, 0x23, 0xcc, 0x70, 0x16, \
      0x1a, 0x0d, 0x21, 0x3f, 0x09, 0x53, 0x1b, 0x63, \
      0x99, 0xd7, 0x67, 0x96, 0xd2, 0x2c, 0x81, 0x17, \
    }}
static const rosidl_type_hash_t visualization_msgs__srv__GetInteractiveMarkers_Response__TYPE_VERSION_HASH = visualization_msgs__srv__GetInteractiveMarkers_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define visualization_msgs__srv__GetInteractiveMarkers_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x4d, 0xfe, 0xd3, 0x8c, 0x1c, 0x89, 0xb7, 0x70, \
      0xda, 0x92, 0xa4, 0x4c, 0xca, 0x13, 0x5e, 0x8d, \
      0xf4, 0x16, 0x12, 0x7a, 0xaf, 0x3b, 0xa9, 0x18, \
      0x46, 0x97, 0xed, 0x61, 0xae, 0xb7, 0xa0, 0x2a, \
    }}
static const rosidl_type_hash_t visualization_msgs__srv__GetInteractiveMarkers_Event__TYPE_VERSION_HASH = visualization_msgs__srv__GetInteractiveMarkers_Event__TYPE_VERSION_HASH__INIT;

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
