// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__STRUCT_H_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t control_msgs__srv__QueryTrajectoryState__TYPE_HASH = {1, {
    0x4a, 0x09, 0x35, 0xdf, 0xfe, 0xf1, 0x8b, 0xc5,
    0xb9, 0xe1, 0x01, 0xc9, 0xd0, 0x3d, 0x84, 0xe6,
    0x81, 0xec, 0xd4, 0xce, 0xbd, 0x72, 0x4b, 0x8f,
    0x11, 0xfd, 0xe0, 0x08, 0x75, 0x1a, 0x32, 0x5a,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__srv__QueryTrajectoryState_Request__TYPE_HASH = {1, {
    0xec, 0x33, 0x22, 0x82, 0x4b, 0x7a, 0x1e, 0xe8,
    0x50, 0xe0, 0x3f, 0xf9, 0x51, 0xf4, 0x8b, 0x10,
    0x39, 0x5c, 0xab, 0x62, 0xa5, 0xa5, 0x66, 0x2d,
    0xa3, 0x20, 0x00, 0xf8, 0xb0, 0x6a, 0xa7, 0x91,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in srv/QueryTrajectoryState in the package control_msgs.
typedef struct control_msgs__srv__QueryTrajectoryState_Request
{
  builtin_interfaces__msg__Time time;
} control_msgs__srv__QueryTrajectoryState_Request;

// Struct for a sequence of control_msgs__srv__QueryTrajectoryState_Request.
typedef struct control_msgs__srv__QueryTrajectoryState_Request__Sequence
{
  control_msgs__srv__QueryTrajectoryState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__srv__QueryTrajectoryState_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__srv__QueryTrajectoryState_Response__TYPE_HASH = {1, {
    0xf7, 0xb9, 0x20, 0x12, 0x9b, 0x8d, 0x58, 0x41,
    0x31, 0x2b, 0xcb, 0x89, 0xe6, 0x27, 0x55, 0x08,
    0xe1, 0x9b, 0x37, 0x35, 0xa3, 0x71, 0xb2, 0xdf,
    0x6e, 0x41, 0x74, 0x47, 0xa4, 0x4e, 0xa5, 0xdb,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'position'
// Member 'velocity'
// Member 'acceleration'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/QueryTrajectoryState in the package control_msgs.
typedef struct control_msgs__srv__QueryTrajectoryState_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String__Sequence name;
  rosidl_runtime_c__double__Sequence position;
  rosidl_runtime_c__double__Sequence velocity;
  rosidl_runtime_c__double__Sequence acceleration;
} control_msgs__srv__QueryTrajectoryState_Response;

// Struct for a sequence of control_msgs__srv__QueryTrajectoryState_Response.
typedef struct control_msgs__srv__QueryTrajectoryState_Response__Sequence
{
  control_msgs__srv__QueryTrajectoryState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__srv__QueryTrajectoryState_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__srv__QueryTrajectoryState_Event__TYPE_HASH = {1, {
    0x87, 0x0d, 0xaa, 0x47, 0x2c, 0x1a, 0x56, 0xf2,
    0x28, 0x59, 0xcd, 0x73, 0xe9, 0xb0, 0x08, 0x92,
    0x3e, 0xcf, 0x1e, 0x48, 0x01, 0x56, 0xc4, 0xdd,
    0xfc, 0x91, 0xed, 0xee, 0x98, 0x88, 0x54, 0x74,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  control_msgs__srv__QueryTrajectoryState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__srv__QueryTrajectoryState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/QueryTrajectoryState in the package control_msgs.
typedef struct control_msgs__srv__QueryTrajectoryState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__srv__QueryTrajectoryState_Request__Sequence request;
  control_msgs__srv__QueryTrajectoryState_Response__Sequence response;
} control_msgs__srv__QueryTrajectoryState_Event;

// Struct for a sequence of control_msgs__srv__QueryTrajectoryState_Event.
typedef struct control_msgs__srv__QueryTrajectoryState_Event__Sequence
{
  control_msgs__srv__QueryTrajectoryState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__srv__QueryTrajectoryState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__STRUCT_H_
