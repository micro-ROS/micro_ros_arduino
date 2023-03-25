// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:action/JointTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
#define CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t control_msgs__action__JointTrajectory__TYPE_HASH = {1, {
    0x8d, 0xb0, 0x17, 0x6d, 0x97, 0x78, 0xd5, 0x01,
    0x03, 0x62, 0x34, 0xe2, 0x38, 0x56, 0x8b, 0x82,
    0xaf, 0x95, 0xce, 0x3f, 0x69, 0x27, 0x15, 0x92,
    0xfb, 0xf9, 0x88, 0x7c, 0xa9, 0x42, 0x13, 0x80,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_Goal__TYPE_HASH = {1, {
    0x88, 0xa8, 0x39, 0x73, 0xa9, 0x2c, 0x92, 0xd1,
    0xd7, 0x7d, 0x65, 0x68, 0x8c, 0x47, 0x82, 0x84,
    0x2c, 0x8e, 0xfe, 0xc6, 0x1e, 0x28, 0x97, 0x16,
    0x12, 0x72, 0xab, 0x16, 0x6f, 0xc5, 0x95, 0x83,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"

/// Struct defined in action/JointTrajectory in the package control_msgs.
typedef struct control_msgs__action__JointTrajectory_Goal
{
  trajectory_msgs__msg__JointTrajectory trajectory;
} control_msgs__action__JointTrajectory_Goal;

// Struct for a sequence of control_msgs__action__JointTrajectory_Goal.
typedef struct control_msgs__action__JointTrajectory_Goal__Sequence
{
  control_msgs__action__JointTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__JointTrajectory_Goal__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_Result__TYPE_HASH = {1, {
    0x8e, 0x85, 0x7c, 0xe4, 0x3c, 0x02, 0xc4, 0x5b,
    0xe3, 0xa4, 0x19, 0x24, 0x54, 0xbc, 0xdc, 0x72,
    0x30, 0xcd, 0x78, 0x35, 0xc5, 0xee, 0x8f, 0x4e,
    0xbc, 0x25, 0x30, 0xb1, 0xe7, 0x61, 0x01, 0xbc,
  }};

// Constants defined in the message

/// Struct defined in action/JointTrajectory in the package control_msgs.
typedef struct control_msgs__action__JointTrajectory_Result
{
  uint8_t structure_needs_at_least_one_member;
} control_msgs__action__JointTrajectory_Result;

// Struct for a sequence of control_msgs__action__JointTrajectory_Result.
typedef struct control_msgs__action__JointTrajectory_Result__Sequence
{
  control_msgs__action__JointTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__JointTrajectory_Result__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_Feedback__TYPE_HASH = {1, {
    0xa5, 0x04, 0x28, 0x37, 0xe7, 0xb0, 0x10, 0xc5,
    0xba, 0xf7, 0xec, 0x9e, 0xba, 0xac, 0x3a, 0x33,
    0x9d, 0x19, 0x21, 0xea, 0x65, 0xf7, 0x3f, 0x54,
    0x9b, 0xdf, 0x7a, 0x52, 0x55, 0xf6, 0x2b, 0xb1,
  }};

// Constants defined in the message

/// Struct defined in action/JointTrajectory in the package control_msgs.
typedef struct control_msgs__action__JointTrajectory_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} control_msgs__action__JointTrajectory_Feedback;

// Struct for a sequence of control_msgs__action__JointTrajectory_Feedback.
typedef struct control_msgs__action__JointTrajectory_Feedback__Sequence
{
  control_msgs__action__JointTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__JointTrajectory_Feedback__Sequence;

static const rosidl_type_hash_t control_msgs__action__JointTrajectory_SendGoal__TYPE_HASH = {1, {
    0x77, 0x8a, 0x01, 0xff, 0x37, 0xb1, 0x71, 0x73,
    0xc0, 0x09, 0x62, 0x14, 0x47, 0x10, 0xf8, 0xc9,
    0x98, 0xf5, 0x09, 0x56, 0x41, 0x6d, 0x84, 0xe0,
    0xc6, 0x69, 0xca, 0x0c, 0x53, 0x87, 0xef, 0x46,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_SendGoal_Request__TYPE_HASH = {1, {
    0xc5, 0x8a, 0x4b, 0xcf, 0x0a, 0x11, 0x36, 0xab,
    0x31, 0x4a, 0x43, 0xdd, 0xef, 0xa5, 0x92, 0x4b,
    0x98, 0x87, 0x4e, 0x1d, 0x08, 0xb4, 0xeb, 0x2a,
    0x44, 0xab, 0xa9, 0xfd, 0xa0, 0x10, 0x3a, 0xaa,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "control_msgs/action/detail/joint_trajectory__struct.h"

/// Struct defined in action/JointTrajectory in the package control_msgs.
typedef struct control_msgs__action__JointTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__JointTrajectory_Goal goal;
} control_msgs__action__JointTrajectory_SendGoal_Request;

// Struct for a sequence of control_msgs__action__JointTrajectory_SendGoal_Request.
typedef struct control_msgs__action__JointTrajectory_SendGoal_Request__Sequence
{
  control_msgs__action__JointTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__JointTrajectory_SendGoal_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_SendGoal_Response__TYPE_HASH = {1, {
    0x7a, 0x32, 0xce, 0xd8, 0xe0, 0x50, 0x7d, 0x50,
    0xe7, 0x95, 0x93, 0xd8, 0x13, 0x98, 0xd3, 0xe4,
    0x6a, 0x86, 0x8e, 0x4e, 0xd8, 0xe9, 0x67, 0x6d,
    0xd3, 0x77, 0xc6, 0x2c, 0x86, 0xb4, 0xcb, 0xd2,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/JointTrajectory in the package control_msgs.
typedef struct control_msgs__action__JointTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} control_msgs__action__JointTrajectory_SendGoal_Response;

// Struct for a sequence of control_msgs__action__JointTrajectory_SendGoal_Response.
typedef struct control_msgs__action__JointTrajectory_SendGoal_Response__Sequence
{
  control_msgs__action__JointTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__JointTrajectory_SendGoal_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_SendGoal_Event__TYPE_HASH = {1, {
    0x9d, 0x29, 0x6f, 0x84, 0x0c, 0xb1, 0x06, 0x3b,
    0xfd, 0x6e, 0xaa, 0xe7, 0xbf, 0x9c, 0xb5, 0xf0,
    0x76, 0x20, 0xfd, 0xff, 0x3d, 0xbb, 0x66, 0xf4,
    0xc1, 0x26, 0x6c, 0x5e, 0x4a, 0x42, 0xb6, 0x22,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  control_msgs__action__JointTrajectory_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__action__JointTrajectory_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/JointTrajectory in the package control_msgs.
typedef struct control_msgs__action__JointTrajectory_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__action__JointTrajectory_SendGoal_Request__Sequence request;
  control_msgs__action__JointTrajectory_SendGoal_Response__Sequence response;
} control_msgs__action__JointTrajectory_SendGoal_Event;

// Struct for a sequence of control_msgs__action__JointTrajectory_SendGoal_Event.
typedef struct control_msgs__action__JointTrajectory_SendGoal_Event__Sequence
{
  control_msgs__action__JointTrajectory_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__JointTrajectory_SendGoal_Event__Sequence;

static const rosidl_type_hash_t control_msgs__action__JointTrajectory_GetResult__TYPE_HASH = {1, {
    0xf2, 0x08, 0xb4, 0xc5, 0x90, 0x19, 0x66, 0x84,
    0x5c, 0xf4, 0x05, 0xb9, 0x5d, 0xa4, 0xac, 0x61,
    0x1e, 0xb1, 0xc5, 0x56, 0xf3, 0xb9, 0x04, 0xc2,
    0x1a, 0xb9, 0xde, 0xd6, 0x4d, 0x83, 0x5f, 0xd4,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_GetResult_Request__TYPE_HASH = {1, {
    0x08, 0x49, 0x3b, 0xa7, 0xd1, 0x5c, 0x5d, 0x78,
    0x40, 0x78, 0x26, 0x14, 0xf3, 0x98, 0x8e, 0xdc,
    0x56, 0x56, 0x8e, 0x91, 0xa6, 0x52, 0xed, 0xaf,
    0xce, 0x93, 0xc6, 0x2e, 0x19, 0x50, 0x8b, 0x7f,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/JointTrajectory in the package control_msgs.
typedef struct control_msgs__action__JointTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} control_msgs__action__JointTrajectory_GetResult_Request;

// Struct for a sequence of control_msgs__action__JointTrajectory_GetResult_Request.
typedef struct control_msgs__action__JointTrajectory_GetResult_Request__Sequence
{
  control_msgs__action__JointTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__JointTrajectory_GetResult_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_GetResult_Response__TYPE_HASH = {1, {
    0x1c, 0x22, 0xb1, 0xca, 0xfd, 0x7e, 0xa5, 0x0f,
    0x67, 0x55, 0xff, 0xca, 0x8d, 0xd7, 0x81, 0xfb,
    0xfc, 0x49, 0xd4, 0xb0, 0x59, 0x16, 0xd6, 0x1e,
    0xbc, 0x05, 0x89, 0x5c, 0x1b, 0x7b, 0x35, 0xdb,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/joint_trajectory__struct.h"

/// Struct defined in action/JointTrajectory in the package control_msgs.
typedef struct control_msgs__action__JointTrajectory_GetResult_Response
{
  int8_t status;
  control_msgs__action__JointTrajectory_Result result;
} control_msgs__action__JointTrajectory_GetResult_Response;

// Struct for a sequence of control_msgs__action__JointTrajectory_GetResult_Response.
typedef struct control_msgs__action__JointTrajectory_GetResult_Response__Sequence
{
  control_msgs__action__JointTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__JointTrajectory_GetResult_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_GetResult_Event__TYPE_HASH = {1, {
    0x92, 0x30, 0x57, 0xc2, 0x80, 0xb5, 0x69, 0xf8,
    0xf1, 0xf4, 0xa2, 0x14, 0x94, 0x97, 0x8a, 0x34,
    0x90, 0x0e, 0xc2, 0x04, 0x8f, 0x8e, 0x75, 0xd5,
    0x49, 0x48, 0x36, 0x3e, 0xf6, 0xd9, 0xd3, 0xb4,
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
  control_msgs__action__JointTrajectory_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__action__JointTrajectory_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/JointTrajectory in the package control_msgs.
typedef struct control_msgs__action__JointTrajectory_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__action__JointTrajectory_GetResult_Request__Sequence request;
  control_msgs__action__JointTrajectory_GetResult_Response__Sequence response;
} control_msgs__action__JointTrajectory_GetResult_Event;

// Struct for a sequence of control_msgs__action__JointTrajectory_GetResult_Event.
typedef struct control_msgs__action__JointTrajectory_GetResult_Event__Sequence
{
  control_msgs__action__JointTrajectory_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__JointTrajectory_GetResult_Event__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_FeedbackMessage__TYPE_HASH = {1, {
    0x8c, 0x25, 0x80, 0x80, 0x47, 0xbb, 0xc5, 0xf3,
    0xa9, 0x16, 0x8b, 0x85, 0xb0, 0xde, 0xd4, 0xb5,
    0x4b, 0x3d, 0x20, 0x59, 0x42, 0xba, 0x45, 0xb6,
    0xc9, 0x81, 0x78, 0xce, 0x9f, 0xa1, 0x71, 0x0b,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/joint_trajectory__struct.h"

/// Struct defined in action/JointTrajectory in the package control_msgs.
typedef struct control_msgs__action__JointTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__JointTrajectory_Feedback feedback;
} control_msgs__action__JointTrajectory_FeedbackMessage;

// Struct for a sequence of control_msgs__action__JointTrajectory_FeedbackMessage.
typedef struct control_msgs__action__JointTrajectory_FeedbackMessage__Sequence
{
  control_msgs__action__JointTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__JointTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__JOINT_TRAJECTORY__STRUCT_H_
