// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:action/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__STRUCT_H_
#define CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t control_msgs__action__GripperCommand__TYPE_HASH = {1, {
    0xe1, 0x7c, 0x0e, 0x64, 0x4e, 0xcc, 0xf1, 0x4b,
    0xea, 0x84, 0xa0, 0xa9, 0x3e, 0x09, 0x77, 0x18,
    0x28, 0x72, 0xc2, 0xeb, 0x78, 0x73, 0xca, 0x66,
    0x94, 0x90, 0x00, 0x59, 0xb4, 0x6d, 0xbc, 0x84,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__GripperCommand_Goal__TYPE_HASH = {1, {
    0x60, 0x7d, 0x9f, 0x41, 0xeb, 0x24, 0x1e, 0x19,
    0x22, 0xe9, 0x0f, 0x02, 0x12, 0x5e, 0x87, 0xae,
    0x6b, 0xfb, 0x78, 0xf7, 0xf6, 0x4a, 0x71, 0xdc,
    0x92, 0x63, 0x02, 0x63, 0xd0, 0x1f, 0x8b, 0x6d,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "control_msgs/msg/detail/gripper_command__struct.h"

/// Struct defined in action/GripperCommand in the package control_msgs.
typedef struct control_msgs__action__GripperCommand_Goal
{
  control_msgs__msg__GripperCommand command;
} control_msgs__action__GripperCommand_Goal;

// Struct for a sequence of control_msgs__action__GripperCommand_Goal.
typedef struct control_msgs__action__GripperCommand_Goal__Sequence
{
  control_msgs__action__GripperCommand_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__GripperCommand_Goal__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__GripperCommand_Result__TYPE_HASH = {1, {
    0xbf, 0x51, 0x2d, 0x5a, 0xa6, 0xa0, 0xe4, 0xfe,
    0x4d, 0x8b, 0xe2, 0x2b, 0x2e, 0xc4, 0xa1, 0x97,
    0x3c, 0x3d, 0x25, 0x0f, 0xa1, 0xf6, 0x5e, 0x47,
    0x45, 0x03, 0x22, 0xc2, 0x5c, 0x45, 0xc0, 0xa0,
  }};

// Constants defined in the message

/// Struct defined in action/GripperCommand in the package control_msgs.
typedef struct control_msgs__action__GripperCommand_Result
{
  /// The current gripper gap size (in meters)
  double position;
  /// The current effort exerted (in Newtons)
  double effort;
  /// True iff the gripper is exerting max effort and not moving
  bool stalled;
  /// True iff the gripper position has reached the commanded setpoint
  bool reached_goal;
} control_msgs__action__GripperCommand_Result;

// Struct for a sequence of control_msgs__action__GripperCommand_Result.
typedef struct control_msgs__action__GripperCommand_Result__Sequence
{
  control_msgs__action__GripperCommand_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__GripperCommand_Result__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__GripperCommand_Feedback__TYPE_HASH = {1, {
    0x8f, 0x7c, 0x52, 0x00, 0x77, 0xba, 0xb5, 0x28,
    0xbb, 0x91, 0x61, 0xee, 0x3b, 0x83, 0xc8, 0x1e,
    0xee, 0x1f, 0x8a, 0xec, 0xad, 0xb8, 0x92, 0x2c,
    0xe8, 0x2c, 0x79, 0xd6, 0x67, 0xa8, 0x19, 0xc4,
  }};

// Constants defined in the message

/// Struct defined in action/GripperCommand in the package control_msgs.
typedef struct control_msgs__action__GripperCommand_Feedback
{
  /// The current gripper gap size (in meters)
  double position;
  /// The current effort exerted (in Newtons)
  double effort;
  /// True iff the gripper is exerting max effort and not moving
  bool stalled;
  /// True iff the gripper position has reached the commanded setpoint
  bool reached_goal;
} control_msgs__action__GripperCommand_Feedback;

// Struct for a sequence of control_msgs__action__GripperCommand_Feedback.
typedef struct control_msgs__action__GripperCommand_Feedback__Sequence
{
  control_msgs__action__GripperCommand_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__GripperCommand_Feedback__Sequence;

static const rosidl_type_hash_t control_msgs__action__GripperCommand_SendGoal__TYPE_HASH = {1, {
    0x6b, 0xf8, 0xcc, 0x4c, 0xe8, 0x0c, 0xd4, 0x99,
    0xe7, 0xdd, 0x32, 0x58, 0xc0, 0x3c, 0x50, 0xc3,
    0xfa, 0x66, 0x72, 0xb4, 0x69, 0xff, 0x83, 0x55,
    0x33, 0x9e, 0xf1, 0xdf, 0x77, 0xfc, 0xd2, 0x12,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__GripperCommand_SendGoal_Request__TYPE_HASH = {1, {
    0x1b, 0x86, 0x9b, 0x7b, 0x40, 0x42, 0x27, 0x2d,
    0xc0, 0xf8, 0xed, 0x65, 0x46, 0x8c, 0x4e, 0x57,
    0xc9, 0xe5, 0x32, 0xea, 0x5e, 0x53, 0xce, 0x74,
    0xfd, 0xa0, 0x76, 0x7e, 0xef, 0xbf, 0xa9, 0x83,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "control_msgs/action/detail/gripper_command__struct.h"

/// Struct defined in action/GripperCommand in the package control_msgs.
typedef struct control_msgs__action__GripperCommand_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__GripperCommand_Goal goal;
} control_msgs__action__GripperCommand_SendGoal_Request;

// Struct for a sequence of control_msgs__action__GripperCommand_SendGoal_Request.
typedef struct control_msgs__action__GripperCommand_SendGoal_Request__Sequence
{
  control_msgs__action__GripperCommand_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__GripperCommand_SendGoal_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__GripperCommand_SendGoal_Response__TYPE_HASH = {1, {
    0x0c, 0x8d, 0xda, 0x5e, 0x9d, 0x39, 0xab, 0x5e,
    0x31, 0x62, 0xb6, 0x6e, 0x79, 0xb2, 0x92, 0xa4,
    0x25, 0x86, 0x59, 0xdd, 0xfc, 0xf8, 0x72, 0x2d,
    0x39, 0x46, 0x3f, 0x71, 0x8b, 0x6c, 0x59, 0xbc,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GripperCommand in the package control_msgs.
typedef struct control_msgs__action__GripperCommand_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} control_msgs__action__GripperCommand_SendGoal_Response;

// Struct for a sequence of control_msgs__action__GripperCommand_SendGoal_Response.
typedef struct control_msgs__action__GripperCommand_SendGoal_Response__Sequence
{
  control_msgs__action__GripperCommand_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__GripperCommand_SendGoal_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__GripperCommand_SendGoal_Event__TYPE_HASH = {1, {
    0x5c, 0x80, 0xea, 0xc9, 0x8b, 0xcd, 0xe7, 0xd6,
    0x4f, 0xaf, 0x4b, 0x94, 0xf7, 0x7e, 0xf6, 0x9f,
    0x12, 0xe4, 0x42, 0x87, 0x0d, 0xc1, 0xeb, 0xa2,
    0x6d, 0x25, 0xb4, 0x68, 0x1e, 0xf9, 0xac, 0x0a,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  control_msgs__action__GripperCommand_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__action__GripperCommand_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/GripperCommand in the package control_msgs.
typedef struct control_msgs__action__GripperCommand_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__action__GripperCommand_SendGoal_Request__Sequence request;
  control_msgs__action__GripperCommand_SendGoal_Response__Sequence response;
} control_msgs__action__GripperCommand_SendGoal_Event;

// Struct for a sequence of control_msgs__action__GripperCommand_SendGoal_Event.
typedef struct control_msgs__action__GripperCommand_SendGoal_Event__Sequence
{
  control_msgs__action__GripperCommand_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__GripperCommand_SendGoal_Event__Sequence;

static const rosidl_type_hash_t control_msgs__action__GripperCommand_GetResult__TYPE_HASH = {1, {
    0x7e, 0x60, 0xa7, 0x60, 0x60, 0x63, 0xd4, 0xa2,
    0x72, 0x8d, 0x21, 0xba, 0xda, 0xc0, 0x99, 0xe6,
    0x8b, 0x73, 0x4a, 0x19, 0x6a, 0xc3, 0xab, 0x42,
    0xd1, 0xd4, 0xc6, 0x68, 0xeb, 0x0b, 0xb3, 0xcd,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__GripperCommand_GetResult_Request__TYPE_HASH = {1, {
    0x1a, 0x33, 0x08, 0xda, 0x3a, 0xcb, 0xc6, 0x2c,
    0xd8, 0xa3, 0xc8, 0x23, 0xde, 0x80, 0xba, 0x9e,
    0x5f, 0x9b, 0x6b, 0xb6, 0xf6, 0x05, 0x6d, 0x1a,
    0xd6, 0xb2, 0x9f, 0x5f, 0x28, 0x5f, 0x97, 0xae,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GripperCommand in the package control_msgs.
typedef struct control_msgs__action__GripperCommand_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} control_msgs__action__GripperCommand_GetResult_Request;

// Struct for a sequence of control_msgs__action__GripperCommand_GetResult_Request.
typedef struct control_msgs__action__GripperCommand_GetResult_Request__Sequence
{
  control_msgs__action__GripperCommand_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__GripperCommand_GetResult_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__GripperCommand_GetResult_Response__TYPE_HASH = {1, {
    0x32, 0xed, 0x5e, 0x1b, 0x59, 0x06, 0x76, 0x7a,
    0x3e, 0x99, 0x14, 0xdc, 0xa4, 0xc4, 0xae, 0xd2,
    0x25, 0x29, 0x91, 0x8f, 0x6c, 0x23, 0x60, 0xe6,
    0xfb, 0x38, 0x23, 0x63, 0xd4, 0xdf, 0x4b, 0x45,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/gripper_command__struct.h"

/// Struct defined in action/GripperCommand in the package control_msgs.
typedef struct control_msgs__action__GripperCommand_GetResult_Response
{
  int8_t status;
  control_msgs__action__GripperCommand_Result result;
} control_msgs__action__GripperCommand_GetResult_Response;

// Struct for a sequence of control_msgs__action__GripperCommand_GetResult_Response.
typedef struct control_msgs__action__GripperCommand_GetResult_Response__Sequence
{
  control_msgs__action__GripperCommand_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__GripperCommand_GetResult_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__GripperCommand_GetResult_Event__TYPE_HASH = {1, {
    0xc6, 0xa1, 0xf7, 0xaf, 0xeb, 0x87, 0xbf, 0x8b,
    0x31, 0x65, 0xbd, 0x7b, 0x03, 0xec, 0x01, 0x73,
    0xff, 0xad, 0xa3, 0x5f, 0x08, 0x3a, 0x58, 0x31,
    0x44, 0xab, 0x7a, 0xc9, 0x6e, 0xdc, 0x5a, 0x04,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  control_msgs__action__GripperCommand_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__action__GripperCommand_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/GripperCommand in the package control_msgs.
typedef struct control_msgs__action__GripperCommand_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__action__GripperCommand_GetResult_Request__Sequence request;
  control_msgs__action__GripperCommand_GetResult_Response__Sequence response;
} control_msgs__action__GripperCommand_GetResult_Event;

// Struct for a sequence of control_msgs__action__GripperCommand_GetResult_Event.
typedef struct control_msgs__action__GripperCommand_GetResult_Event__Sequence
{
  control_msgs__action__GripperCommand_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__GripperCommand_GetResult_Event__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__GripperCommand_FeedbackMessage__TYPE_HASH = {1, {
    0x39, 0x2f, 0xf0, 0x3f, 0xcd, 0x87, 0x2f, 0x9d,
    0xc2, 0x40, 0x5c, 0xbe, 0xb2, 0x89, 0x7f, 0xcf,
    0x01, 0x1a, 0xd9, 0x99, 0x84, 0x58, 0xb6, 0xaa,
    0x85, 0xc6, 0x03, 0xb8, 0xa4, 0x9e, 0x43, 0x1d,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/gripper_command__struct.h"

/// Struct defined in action/GripperCommand in the package control_msgs.
typedef struct control_msgs__action__GripperCommand_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__GripperCommand_Feedback feedback;
} control_msgs__action__GripperCommand_FeedbackMessage;

// Struct for a sequence of control_msgs__action__GripperCommand_FeedbackMessage.
typedef struct control_msgs__action__GripperCommand_FeedbackMessage__Sequence
{
  control_msgs__action__GripperCommand_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__GripperCommand_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__STRUCT_H_
