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


#define control_msgs__action__SingleJointPosition__TYPE_VERSION_HASH__INIT {1, { \
      0x8a, 0xb0, 0x3f, 0x20, 0x74, 0xdb, 0x04, 0x30, \
      0x19, 0xed, 0x50, 0x3a, 0xc9, 0x2d, 0x46, 0xc0, \
      0x22, 0x6b, 0x50, 0xea, 0xdb, 0xee, 0x68, 0x0a, \
      0xd9, 0xd9, 0x14, 0xd5, 0x17, 0x6e, 0x4d, 0xb1, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_Goal__TYPE_VERSION_HASH__INIT {1, { \
      0x97, 0xea, 0xdc, 0x82, 0x59, 0xad, 0x41, 0xf8, \
      0xe2, 0x82, 0xd0, 0x91, 0x95, 0x92, 0x57, 0x0e, \
      0x67, 0x66, 0x21, 0x0d, 0xc8, 0x88, 0x4f, 0xee, \
      0x2e, 0xb1, 0x66, 0x66, 0x11, 0x82, 0xb2, 0xb0, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_Goal__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_Goal__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_Result__TYPE_VERSION_HASH__INIT {1, { \
      0xda, 0x10, 0x83, 0x15, 0xe2, 0xd3, 0x81, 0x4b, \
      0xba, 0x45, 0x67, 0x31, 0x2b, 0x16, 0x86, 0xbf, \
      0x54, 0x3e, 0x5c, 0xe0, 0x2d, 0x2a, 0x62, 0x88, \
      0xa5, 0x8a, 0x9e, 0xfc, 0xbc, 0xc5, 0x89, 0xa3, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_Result__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_Result__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_Feedback__TYPE_VERSION_HASH__INIT {1, { \
      0x50, 0x86, 0xaa, 0x3c, 0x24, 0xd4, 0xe3, 0x42, \
      0x5f, 0x1b, 0x85, 0x56, 0xbe, 0x20, 0x74, 0x0d, \
      0xae, 0x0d, 0x80, 0xc2, 0x48, 0x77, 0x68, 0x7f, \
      0xac, 0x30, 0xf3, 0xfd, 0x21, 0x09, 0xaa, 0x55, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_Feedback__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_Feedback__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_SendGoal__TYPE_VERSION_HASH__INIT {1, { \
      0x8a, 0x4c, 0xc5, 0x21, 0x4a, 0x01, 0x2c, 0x82, \
      0x9d, 0x86, 0xf6, 0x33, 0x11, 0x22, 0x0b, 0x3f, \
      0x31, 0xd2, 0x67, 0x9b, 0xd8, 0x31, 0xc7, 0x78, \
      0x0b, 0xb3, 0xa7, 0xdc, 0xbb, 0x14, 0x66, 0xed, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_SendGoal__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_SendGoal__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_SendGoal_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x7d, 0x5b, 0xd2, 0xc4, 0x56, 0x42, 0x73, 0x4a, \
      0x1d, 0xa1, 0xa6, 0x3e, 0x36, 0xe7, 0x05, 0xd7, \
      0xc5, 0x6b, 0x50, 0xe8, 0xe8, 0xad, 0x43, 0x6c, \
      0x3f, 0x73, 0xb2, 0x68, 0x81, 0x72, 0x33, 0x13, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_SendGoal_Request__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_SendGoal_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_SendGoal_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xa4, 0x56, 0xd6, 0x8b, 0x17, 0x0f, 0x12, 0xb1, \
      0x79, 0x7f, 0xba, 0xeb, 0x8f, 0x0d, 0xbd, 0x8f, \
      0xe9, 0xbb, 0xd4, 0xae, 0x4e, 0x54, 0xac, 0x7f, \
      0x27, 0xf9, 0x17, 0xb0, 0xf7, 0x32, 0x05, 0x8e, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_SendGoal_Response__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_SendGoal_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_SendGoal_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xd6, 0x9d, 0xeb, 0x5f, 0xdf, 0x1f, 0x19, 0x67, \
      0x59, 0x4d, 0xfc, 0xc9, 0x98, 0x8d, 0x1a, 0x1a, \
      0x51, 0xc7, 0x4e, 0x66, 0xce, 0x20, 0x87, 0x9c, \
      0x62, 0xa5, 0xa0, 0x73, 0xda, 0x0d, 0x6f, 0xf6, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_SendGoal_Event__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_SendGoal_Event__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_GetResult__TYPE_VERSION_HASH__INIT {1, { \
      0xd2, 0x76, 0x9d, 0x38, 0x87, 0xab, 0x30, 0x1e, \
      0x7d, 0x2d, 0x25, 0x3c, 0x92, 0x90, 0x34, 0x4c, \
      0x18, 0x37, 0xd6, 0xc4, 0xd9, 0xe6, 0xd2, 0x55, \
      0xee, 0x30, 0x46, 0x20, 0x72, 0x60, 0xb5, 0x25, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_GetResult__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_GetResult__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_GetResult_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x25, 0x9b, 0xd7, 0x6b, 0xeb, 0xcd, 0x5a, 0x79, \
      0xf6, 0xb4, 0xb6, 0x1a, 0x1d, 0x01, 0x48, 0xe7, \
      0xe0, 0x34, 0x04, 0x6a, 0x2b, 0x91, 0xce, 0xd9, \
      0xfa, 0xa7, 0xb1, 0xb2, 0x22, 0xde, 0x2d, 0xe4, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_GetResult_Request__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_GetResult_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_GetResult_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x39, 0x89, 0x3f, 0xbf, 0x71, 0xbd, 0x6a, 0xab, \
      0xb4, 0xb3, 0x8f, 0xa1, 0x84, 0xe8, 0xed, 0x66, \
      0xbe, 0x73, 0xdc, 0xf2, 0x8e, 0x79, 0x34, 0xfb, \
      0xd7, 0x95, 0x47, 0xfd, 0x7b, 0xc7, 0xf1, 0xb5, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_GetResult_Response__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_GetResult_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_GetResult_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xdb, 0xf5, 0x50, 0x12, 0x80, 0x89, 0xaf, 0xd5, \
      0x0f, 0x29, 0xec, 0x7b, 0xf7, 0xf5, 0x67, 0x4f, \
      0x63, 0x57, 0xdf, 0xbe, 0x4b, 0x34, 0x99, 0x8e, \
      0xc6, 0x73, 0xee, 0x36, 0x2e, 0xd0, 0x10, 0x0c, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_GetResult_Event__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_GetResult_Event__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__SingleJointPosition_FeedbackMessage__TYPE_VERSION_HASH__INIT {1, { \
      0xb2, 0xfd, 0x0d, 0x63, 0xb7, 0xf9, 0xe4, 0xa7, \
      0x26, 0x2a, 0xe9, 0x83, 0x1a, 0x00, 0x59, 0x5f, \
      0xcf, 0x75, 0x3a, 0x6d, 0xf4, 0xc6, 0xd7, 0xbb, \
      0x71, 0xb1, 0x2e, 0xb1, 0x1f, 0xef, 0x46, 0xbc, \
    }}
static const rosidl_type_hash_t control_msgs__action__SingleJointPosition_FeedbackMessage__TYPE_VERSION_HASH = control_msgs__action__SingleJointPosition_FeedbackMessage__TYPE_VERSION_HASH__INIT;

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
