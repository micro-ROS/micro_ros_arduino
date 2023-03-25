// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:action/SingleJointPosition.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__STRUCT_H_
#define CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t control_msgs__action__SingleJointPosition__TYPE_HASH = {1, {
    0x1b, 0x33, 0x0d, 0x11, 0x63, 0x8c, 0x0b, 0x1d,
    0x32, 0x28, 0xcc, 0x80, 0xb1, 0x12, 0x3e, 0x5b,
    0x3d, 0xb3, 0xd2, 0x45, 0x92, 0xe9, 0x54, 0x29,
    0x81, 0x2b, 0xf3, 0x00, 0x56, 0xe3, 0xdb, 0x7b,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_Goal__TYPE_HASH = {1, {
    0xc4, 0x34, 0xf6, 0xbb, 0x75, 0x53, 0x96, 0xb6,
    0x03, 0x7c, 0x46, 0x76, 0x1f, 0x49, 0x25, 0x80,
    0xe7, 0x12, 0x1d, 0x17, 0x15, 0x7e, 0xad, 0x1d,
    0x58, 0xdf, 0xee, 0x17, 0x40, 0x01, 0xcf, 0x79,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'min_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_Goal
{
  double position;
  builtin_interfaces__msg__Duration min_duration;
  double max_velocity;
} control_msgs__action__SingleJointPosition_Goal;

// Struct for a sequence of control_msgs__action__SingleJointPosition_Goal.
typedef struct control_msgs__action__SingleJointPosition_Goal__Sequence
{
  control_msgs__action__SingleJointPosition_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_Goal__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_Result__TYPE_HASH = {1, {
    0x4f, 0xa1, 0x0d, 0x55, 0x5d, 0x53, 0x9d, 0x00,
    0x37, 0x0b, 0x71, 0x14, 0xdb, 0x3c, 0x3d, 0xdd,
    0xb1, 0x82, 0x64, 0x7e, 0x72, 0x0c, 0x8c, 0x5f,
    0xaa, 0xf8, 0xe1, 0x84, 0x82, 0x2d, 0xb1, 0x4c,
  }};

// Constants defined in the message

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_Result
{
  uint8_t structure_needs_at_least_one_member;
} control_msgs__action__SingleJointPosition_Result;

// Struct for a sequence of control_msgs__action__SingleJointPosition_Result.
typedef struct control_msgs__action__SingleJointPosition_Result__Sequence
{
  control_msgs__action__SingleJointPosition_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_Result__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_Feedback__TYPE_HASH = {1, {
    0xb3, 0xeb, 0x28, 0x91, 0x32, 0x08, 0xb0, 0x1d,
    0x27, 0x13, 0xc9, 0x08, 0x06, 0x7a, 0x80, 0x3a,
    0x97, 0x5e, 0xf8, 0x1a, 0x8b, 0x94, 0x31, 0xfd,
    0x6b, 0x46, 0x39, 0xf2, 0xe9, 0x1f, 0xc1, 0xfc,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_Feedback
{
  std_msgs__msg__Header header;
  double position;
  double velocity;
  double error;
} control_msgs__action__SingleJointPosition_Feedback;

// Struct for a sequence of control_msgs__action__SingleJointPosition_Feedback.
typedef struct control_msgs__action__SingleJointPosition_Feedback__Sequence
{
  control_msgs__action__SingleJointPosition_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_Feedback__Sequence;

static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_SendGoal__TYPE_HASH = {1, {
    0xab, 0xcf, 0x6f, 0x8a, 0xcd, 0x18, 0x89, 0xa6,
    0x85, 0xcd, 0x6a, 0xc2, 0xe9, 0x48, 0x28, 0x4a,
    0x80, 0x12, 0xa8, 0x1d, 0x01, 0xe6, 0xaf, 0x0d,
    0x6a, 0x91, 0x8c, 0x52, 0xd7, 0x59, 0xca, 0x47,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_SendGoal_Request__TYPE_HASH = {1, {
    0x5d, 0xdd, 0x69, 0x89, 0xbd, 0xf3, 0x38, 0x9d,
    0xf3, 0x44, 0x90, 0x4c, 0x69, 0xb0, 0x41, 0xd2,
    0xb7, 0xee, 0xc7, 0x6d, 0xfb, 0xb9, 0xfa, 0xd4,
    0xf6, 0x6c, 0xf3, 0x71, 0x4a, 0x3f, 0x08, 0x06,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "control_msgs/action/detail/single_joint_position__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__SingleJointPosition_Goal goal;
} control_msgs__action__SingleJointPosition_SendGoal_Request;

// Struct for a sequence of control_msgs__action__SingleJointPosition_SendGoal_Request.
typedef struct control_msgs__action__SingleJointPosition_SendGoal_Request__Sequence
{
  control_msgs__action__SingleJointPosition_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_SendGoal_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_SendGoal_Response__TYPE_HASH = {1, {
    0xbd, 0x3d, 0x63, 0xd7, 0x23, 0x61, 0xe5, 0x78,
    0xcc, 0x20, 0x35, 0xb5, 0xb2, 0x8d, 0xb7, 0x4b,
    0x10, 0xe8, 0x76, 0xdb, 0x60, 0x50, 0x60, 0x85,
    0x89, 0xfc, 0x8f, 0x0b, 0x52, 0x3f, 0x98, 0x39,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} control_msgs__action__SingleJointPosition_SendGoal_Response;

// Struct for a sequence of control_msgs__action__SingleJointPosition_SendGoal_Response.
typedef struct control_msgs__action__SingleJointPosition_SendGoal_Response__Sequence
{
  control_msgs__action__SingleJointPosition_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_SendGoal_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_SendGoal_Event__TYPE_HASH = {1, {
    0xb5, 0x57, 0x2c, 0x9d, 0xd9, 0x29, 0x46, 0xf9,
    0x3c, 0x34, 0x1f, 0x99, 0x32, 0x79, 0x16, 0x68,
    0x90, 0x83, 0x11, 0x7d, 0x0b, 0x35, 0x12, 0x86,
    0x03, 0x97, 0x3a, 0x59, 0x0c, 0xe7, 0x31, 0x57,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  control_msgs__action__SingleJointPosition_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__action__SingleJointPosition_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__action__SingleJointPosition_SendGoal_Request__Sequence request;
  control_msgs__action__SingleJointPosition_SendGoal_Response__Sequence response;
} control_msgs__action__SingleJointPosition_SendGoal_Event;

// Struct for a sequence of control_msgs__action__SingleJointPosition_SendGoal_Event.
typedef struct control_msgs__action__SingleJointPosition_SendGoal_Event__Sequence
{
  control_msgs__action__SingleJointPosition_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_SendGoal_Event__Sequence;

static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_GetResult__TYPE_HASH = {1, {
    0xaf, 0xe9, 0x5c, 0x54, 0xe7, 0xc5, 0x9c, 0xdb,
    0x7e, 0x0d, 0x97, 0x8b, 0xfa, 0xfb, 0x90, 0x8e,
    0x3f, 0x15, 0x46, 0x97, 0x5d, 0x54, 0x09, 0x11,
    0xa1, 0x76, 0x80, 0x09, 0xd5, 0x77, 0x35, 0x1d,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_GetResult_Request__TYPE_HASH = {1, {
    0xd2, 0xb8, 0x70, 0x49, 0x68, 0x7e, 0xba, 0xd7,
    0x9b, 0xeb, 0xbd, 0x13, 0x0e, 0x69, 0x13, 0xb6,
    0x90, 0x06, 0x9f, 0xba, 0x19, 0xf1, 0x9b, 0x4b,
    0x47, 0x74, 0x75, 0x4f, 0x96, 0x9d, 0x15, 0x66,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} control_msgs__action__SingleJointPosition_GetResult_Request;

// Struct for a sequence of control_msgs__action__SingleJointPosition_GetResult_Request.
typedef struct control_msgs__action__SingleJointPosition_GetResult_Request__Sequence
{
  control_msgs__action__SingleJointPosition_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_GetResult_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_GetResult_Response__TYPE_HASH = {1, {
    0x64, 0x75, 0xdf, 0x69, 0xe4, 0xfb, 0xff, 0x1a,
    0xa8, 0xdc, 0xd8, 0xd2, 0x82, 0x5e, 0x03, 0xf6,
    0xfa, 0xa3, 0xc6, 0x9f, 0x15, 0x8c, 0x8f, 0xe1,
    0xd0, 0x58, 0xeb, 0x50, 0x6d, 0x53, 0xee, 0x9e,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/single_joint_position__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_GetResult_Response
{
  int8_t status;
  control_msgs__action__SingleJointPosition_Result result;
} control_msgs__action__SingleJointPosition_GetResult_Response;

// Struct for a sequence of control_msgs__action__SingleJointPosition_GetResult_Response.
typedef struct control_msgs__action__SingleJointPosition_GetResult_Response__Sequence
{
  control_msgs__action__SingleJointPosition_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_GetResult_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_GetResult_Event__TYPE_HASH = {1, {
    0x1e, 0x88, 0x99, 0x81, 0x04, 0xec, 0x86, 0x15,
    0x63, 0x21, 0x94, 0x31, 0xe9, 0x75, 0x80, 0xd3,
    0xed, 0x24, 0xff, 0xc7, 0x92, 0xbe, 0xd4, 0xa9,
    0xfe, 0x26, 0x1a, 0x83, 0xe3, 0x95, 0x4c, 0x3a,
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
  control_msgs__action__SingleJointPosition_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__action__SingleJointPosition_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__action__SingleJointPosition_GetResult_Request__Sequence request;
  control_msgs__action__SingleJointPosition_GetResult_Response__Sequence response;
} control_msgs__action__SingleJointPosition_GetResult_Event;

// Struct for a sequence of control_msgs__action__SingleJointPosition_GetResult_Event.
typedef struct control_msgs__action__SingleJointPosition_GetResult_Event__Sequence
{
  control_msgs__action__SingleJointPosition_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_GetResult_Event__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_FeedbackMessage__TYPE_HASH = {1, {
    0x6d, 0xa1, 0x9e, 0xb4, 0x20, 0xdb, 0x90, 0x08,
    0x0a, 0x9b, 0xd9, 0xca, 0xc0, 0x04, 0x1c, 0x86,
    0x52, 0x54, 0xb8, 0xe4, 0x9c, 0xbe, 0x0d, 0x2b,
    0x54, 0xc7, 0x8e, 0x18, 0x14, 0xed, 0x49, 0x9b,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/single_joint_position__struct.h"

/// Struct defined in action/SingleJointPosition in the package control_msgs.
typedef struct control_msgs__action__SingleJointPosition_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__SingleJointPosition_Feedback feedback;
} control_msgs__action__SingleJointPosition_FeedbackMessage;

// Struct for a sequence of control_msgs__action__SingleJointPosition_FeedbackMessage.
typedef struct control_msgs__action__SingleJointPosition_FeedbackMessage__Sequence
{
  control_msgs__action__SingleJointPosition_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__SingleJointPosition_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__SINGLE_JOINT_POSITION__STRUCT_H_
