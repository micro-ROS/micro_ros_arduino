// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/srv/query_trajectory_state.h"


#ifndef CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__STRUCT_H_
#define CONTROL_MSGS__SRV__DETAIL__QUERY_TRAJECTORY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


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
