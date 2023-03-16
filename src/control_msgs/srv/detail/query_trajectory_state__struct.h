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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__srv__QueryTrajectoryState__TYPE_VERSION_HASH__INIT {1, { \
      0x33, 0x8c, 0x94, 0x3f, 0xd1, 0xbe, 0x13, 0x2b, \
      0x71, 0xc8, 0xf1, 0x05, 0xea, 0x04, 0xe1, 0x00, \
      0x38, 0x7f, 0xbc, 0x2c, 0x1f, 0x07, 0x61, 0xff, \
      0xca, 0xbd, 0x60, 0xd7, 0x18, 0x9c, 0x20, 0xe3, \
    }}
static const rosidl_type_hash_t control_msgs__srv__QueryTrajectoryState__TYPE_VERSION_HASH = control_msgs__srv__QueryTrajectoryState__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__srv__QueryTrajectoryState_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x79, 0x50, 0x84, 0xf2, 0x19, 0x19, 0x3d, 0x67, \
      0x07, 0x31, 0xd9, 0xe0, 0x98, 0xc5, 0x18, 0xda, \
      0xda, 0x0a, 0xef, 0xa5, 0xe1, 0xaa, 0x31, 0xd1, \
      0x79, 0xfc, 0xf3, 0xf8, 0x34, 0xf8, 0x47, 0x5c, \
    }}
static const rosidl_type_hash_t control_msgs__srv__QueryTrajectoryState_Request__TYPE_VERSION_HASH = control_msgs__srv__QueryTrajectoryState_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__srv__QueryTrajectoryState_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x88, 0x9b, 0x6c, 0xaa, 0xf1, 0x6a, 0xfe, 0x09, \
      0x11, 0x69, 0x27, 0x4f, 0x99, 0x44, 0x6f, 0xeb, \
      0xd7, 0x2e, 0x76, 0x58, 0x92, 0x40, 0x09, 0xf4, \
      0x0f, 0xa2, 0xe8, 0xb3, 0x37, 0x5c, 0x09, 0xe5, \
    }}
static const rosidl_type_hash_t control_msgs__srv__QueryTrajectoryState_Response__TYPE_VERSION_HASH = control_msgs__srv__QueryTrajectoryState_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__srv__QueryTrajectoryState_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xba, 0x45, 0xed, 0x54, 0xf4, 0xca, 0x25, 0xb5, \
      0x24, 0x68, 0xc6, 0x1d, 0x88, 0x04, 0xee, 0x17, \
      0x86, 0x64, 0x59, 0x5d, 0x36, 0xbb, 0x7d, 0x1c, \
      0x1a, 0xfb, 0x4e, 0x07, 0x4a, 0x1e, 0xe1, 0xcc, \
    }}
static const rosidl_type_hash_t control_msgs__srv__QueryTrajectoryState_Event__TYPE_VERSION_HASH = control_msgs__srv__QueryTrajectoryState_Event__TYPE_VERSION_HASH__INIT;

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
