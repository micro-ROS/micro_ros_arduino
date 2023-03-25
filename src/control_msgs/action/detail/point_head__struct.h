// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from control_msgs:action/PointHead.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__STRUCT_H_
#define CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t control_msgs__action__PointHead__TYPE_HASH = {1, {
    0x70, 0x74, 0xc3, 0xbd, 0xda, 0xd3, 0x93, 0xf3,
    0xdb, 0x72, 0xda, 0x02, 0xa8, 0xbb, 0x0f, 0xe3,
    0xd8, 0x32, 0xc2, 0x14, 0x47, 0x45, 0x26, 0x94,
    0xb4, 0x96, 0x96, 0x5b, 0xdb, 0xfc, 0x9c, 0xc1,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__PointHead_Goal__TYPE_HASH = {1, {
    0x07, 0x78, 0x83, 0xbf, 0x47, 0xf9, 0x44, 0x2e,
    0x43, 0x05, 0xe5, 0x7f, 0xdd, 0x60, 0xc8, 0x13,
    0x11, 0x5d, 0xef, 0x08, 0x66, 0x9e, 0x6b, 0x7b,
    0x62, 0xd8, 0x57, 0x95, 0xe6, 0xcf, 0xc0, 0xf9,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"
// Member 'pointing_axis'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'pointing_frame'
#include "rosidl_runtime_c/string.h"
// Member 'min_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_Goal
{
  geometry_msgs__msg__PointStamped target;
  geometry_msgs__msg__Vector3 pointing_axis;
  rosidl_runtime_c__String pointing_frame;
  builtin_interfaces__msg__Duration min_duration;
  double max_velocity;
} control_msgs__action__PointHead_Goal;

// Struct for a sequence of control_msgs__action__PointHead_Goal.
typedef struct control_msgs__action__PointHead_Goal__Sequence
{
  control_msgs__action__PointHead_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_Goal__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__PointHead_Result__TYPE_HASH = {1, {
    0x76, 0xd2, 0x21, 0xe8, 0x71, 0x9c, 0xd8, 0x56,
    0x0d, 0x7f, 0xe4, 0x78, 0xd8, 0xe1, 0x89, 0x95,
    0xfa, 0x59, 0x5e, 0x81, 0x2a, 0xa3, 0xf1, 0x4f,
    0xce, 0xf9, 0xc1, 0x80, 0x2c, 0x35, 0x05, 0x05,
  }};

// Constants defined in the message

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_Result
{
  uint8_t structure_needs_at_least_one_member;
} control_msgs__action__PointHead_Result;

// Struct for a sequence of control_msgs__action__PointHead_Result.
typedef struct control_msgs__action__PointHead_Result__Sequence
{
  control_msgs__action__PointHead_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_Result__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__PointHead_Feedback__TYPE_HASH = {1, {
    0x83, 0xa5, 0xdd, 0x2c, 0x90, 0x24, 0x80, 0xc1,
    0xd1, 0x10, 0x6b, 0xbe, 0x99, 0x16, 0xf6, 0x64,
    0xd8, 0x90, 0xbe, 0xe7, 0x8f, 0xd7, 0x51, 0xc8,
    0x58, 0x01, 0x07, 0x93, 0x9a, 0x48, 0x5b, 0x15,
  }};

// Constants defined in the message

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_Feedback
{
  double pointing_angle_error;
} control_msgs__action__PointHead_Feedback;

// Struct for a sequence of control_msgs__action__PointHead_Feedback.
typedef struct control_msgs__action__PointHead_Feedback__Sequence
{
  control_msgs__action__PointHead_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_Feedback__Sequence;

static const rosidl_type_hash_t control_msgs__action__PointHead_SendGoal__TYPE_HASH = {1, {
    0x48, 0xf5, 0x33, 0xaa, 0x84, 0x58, 0x8d, 0x8f,
    0x21, 0x24, 0xfc, 0xb7, 0xad, 0x42, 0xdc, 0x25,
    0xb7, 0xa7, 0xc1, 0x85, 0xcc, 0x51, 0xe9, 0xcc,
    0x33, 0x29, 0xf1, 0xb1, 0x27, 0x3b, 0x34, 0x23,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__PointHead_SendGoal_Request__TYPE_HASH = {1, {
    0xab, 0x02, 0x02, 0xbf, 0xd4, 0xed, 0xa8, 0xd7,
    0xfd, 0x54, 0x6e, 0x78, 0x6a, 0xcc, 0x4b, 0x07,
    0x9c, 0x4a, 0xa6, 0xd3, 0xea, 0x43, 0xea, 0x28,
    0xf0, 0x09, 0x0d, 0x69, 0x09, 0x09, 0x2e, 0xd1,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "control_msgs/action/detail/point_head__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__PointHead_Goal goal;
} control_msgs__action__PointHead_SendGoal_Request;

// Struct for a sequence of control_msgs__action__PointHead_SendGoal_Request.
typedef struct control_msgs__action__PointHead_SendGoal_Request__Sequence
{
  control_msgs__action__PointHead_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_SendGoal_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__PointHead_SendGoal_Response__TYPE_HASH = {1, {
    0x44, 0xcd, 0x7c, 0x0e, 0x5a, 0x09, 0x71, 0x25,
    0x67, 0xe0, 0xdc, 0xec, 0xde, 0x57, 0x8d, 0xe0,
    0x5c, 0x71, 0x0c, 0xc5, 0xe7, 0x25, 0x2f, 0xe6,
    0x7c, 0x55, 0x28, 0xbe, 0x41, 0xf1, 0x86, 0x8d,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} control_msgs__action__PointHead_SendGoal_Response;

// Struct for a sequence of control_msgs__action__PointHead_SendGoal_Response.
typedef struct control_msgs__action__PointHead_SendGoal_Response__Sequence
{
  control_msgs__action__PointHead_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_SendGoal_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__PointHead_SendGoal_Event__TYPE_HASH = {1, {
    0x17, 0xd5, 0xf8, 0x15, 0x0a, 0xee, 0x00, 0x3a,
    0x0a, 0x75, 0xb6, 0x32, 0xa7, 0x2c, 0x5e, 0xe9,
    0xa6, 0x45, 0x71, 0xf2, 0x98, 0x35, 0xfe, 0x8d,
    0x9a, 0xd8, 0x9a, 0xd0, 0xb3, 0xa5, 0x1f, 0x10,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  control_msgs__action__PointHead_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__action__PointHead_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__action__PointHead_SendGoal_Request__Sequence request;
  control_msgs__action__PointHead_SendGoal_Response__Sequence response;
} control_msgs__action__PointHead_SendGoal_Event;

// Struct for a sequence of control_msgs__action__PointHead_SendGoal_Event.
typedef struct control_msgs__action__PointHead_SendGoal_Event__Sequence
{
  control_msgs__action__PointHead_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_SendGoal_Event__Sequence;

static const rosidl_type_hash_t control_msgs__action__PointHead_GetResult__TYPE_HASH = {1, {
    0x0b, 0x73, 0x8b, 0xb4, 0x1d, 0xb0, 0xa1, 0x2a,
    0x00, 0x12, 0x9d, 0x8b, 0xa5, 0xc1, 0xd7, 0xa2,
    0x05, 0x5c, 0xda, 0x21, 0x96, 0x05, 0x7b, 0xef,
    0x20, 0x9a, 0x51, 0x1b, 0x60, 0xbf, 0xfb, 0x6c,
  }};


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__PointHead_GetResult_Request__TYPE_HASH = {1, {
    0xb1, 0x93, 0x92, 0x32, 0xfd, 0xf8, 0x57, 0xe5,
    0x63, 0x88, 0x13, 0xa8, 0x05, 0xbf, 0x66, 0x7a,
    0x1a, 0x98, 0xe2, 0xc9, 0x62, 0xe2, 0x07, 0x05,
    0xa0, 0xf4, 0xe4, 0xa9, 0x9b, 0x3f, 0xc4, 0x26,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} control_msgs__action__PointHead_GetResult_Request;

// Struct for a sequence of control_msgs__action__PointHead_GetResult_Request.
typedef struct control_msgs__action__PointHead_GetResult_Request__Sequence
{
  control_msgs__action__PointHead_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_GetResult_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__PointHead_GetResult_Response__TYPE_HASH = {1, {
    0x50, 0xec, 0xd9, 0x39, 0x67, 0xc2, 0xef, 0x33,
    0x2a, 0x4c, 0x89, 0xa3, 0xba, 0x2e, 0x46, 0x27,
    0xbe, 0x87, 0xf0, 0x71, 0x9c, 0x1f, 0x6a, 0x94,
    0x45, 0xb4, 0xa2, 0x45, 0x17, 0x69, 0xfe, 0x5f,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/point_head__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_GetResult_Response
{
  int8_t status;
  control_msgs__action__PointHead_Result result;
} control_msgs__action__PointHead_GetResult_Response;

// Struct for a sequence of control_msgs__action__PointHead_GetResult_Response.
typedef struct control_msgs__action__PointHead_GetResult_Response__Sequence
{
  control_msgs__action__PointHead_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_GetResult_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__PointHead_GetResult_Event__TYPE_HASH = {1, {
    0x56, 0x7d, 0xe7, 0x02, 0xe3, 0x45, 0x94, 0x1d,
    0xbe, 0x4a, 0xb7, 0xd1, 0xca, 0x09, 0x27, 0x29,
    0x27, 0x15, 0x40, 0xed, 0x47, 0xa3, 0x34, 0x03,
    0xf6, 0x01, 0x9b, 0x92, 0xac, 0xc7, 0x2b, 0xfd,
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
  control_msgs__action__PointHead_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  control_msgs__action__PointHead_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  control_msgs__action__PointHead_GetResult_Request__Sequence request;
  control_msgs__action__PointHead_GetResult_Response__Sequence response;
} control_msgs__action__PointHead_GetResult_Event;

// Struct for a sequence of control_msgs__action__PointHead_GetResult_Event.
typedef struct control_msgs__action__PointHead_GetResult_Event__Sequence
{
  control_msgs__action__PointHead_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_GetResult_Event__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t control_msgs__action__PointHead_FeedbackMessage__TYPE_HASH = {1, {
    0xb1, 0xf7, 0x24, 0xf9, 0x86, 0x37, 0x5e, 0x8f,
    0x9c, 0xf9, 0x62, 0x46, 0xc2, 0x32, 0xcd, 0xb2,
    0x93, 0x62, 0x39, 0x8c, 0xe3, 0x52, 0xc6, 0x45,
    0xe2, 0xaf, 0x8f, 0x99, 0xb2, 0x87, 0x43, 0xf2,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/point_head__struct.h"

/// Struct defined in action/PointHead in the package control_msgs.
typedef struct control_msgs__action__PointHead_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  control_msgs__action__PointHead_Feedback feedback;
} control_msgs__action__PointHead_FeedbackMessage;

// Struct for a sequence of control_msgs__action__PointHead_FeedbackMessage.
typedef struct control_msgs__action__PointHead_FeedbackMessage__Sequence
{
  control_msgs__action__PointHead_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} control_msgs__action__PointHead_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROL_MSGS__ACTION__DETAIL__POINT_HEAD__STRUCT_H_
