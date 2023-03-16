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


#define control_msgs__action__JointTrajectory__TYPE_VERSION_HASH__INIT {1, { \
      0x20, 0x22, 0x55, 0x0f, 0xbb, 0x1c, 0x33, 0x68, \
      0x92, 0xdb, 0xad, 0x5b, 0x98, 0x47, 0x79, 0xa6, \
      0x03, 0x40, 0x69, 0x42, 0x7c, 0x6a, 0x8f, 0xbf, \
      0xa7, 0x94, 0x15, 0x1e, 0x9a, 0xd8, 0x04, 0x16, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_Goal__TYPE_VERSION_HASH__INIT {1, { \
      0x7e, 0x1c, 0x40, 0xc4, 0xcd, 0x07, 0x30, 0x2c, \
      0x3d, 0xb1, 0x7a, 0x31, 0x0d, 0x78, 0x39, 0x72, \
      0xe5, 0x4d, 0xc6, 0xf0, 0xb1, 0xe4, 0x34, 0x2b, \
      0x00, 0x70, 0x14, 0xe4, 0x10, 0x53, 0x83, 0x77, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_Goal__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_Goal__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_Result__TYPE_VERSION_HASH__INIT {1, { \
      0x34, 0x0b, 0x28, 0xff, 0x3f, 0xa8, 0xb0, 0x7d, \
      0xdc, 0x1d, 0xba, 0x77, 0xb8, 0x22, 0x2c, 0x16, \
      0x51, 0x59, 0xf5, 0x68, 0x0a, 0xc8, 0xfa, 0xf1, \
      0x00, 0xf3, 0x4f, 0x2a, 0x3c, 0xab, 0x92, 0xd9, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_Result__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_Result__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_Feedback__TYPE_VERSION_HASH__INIT {1, { \
      0x2a, 0x72, 0x9a, 0x0e, 0x38, 0xee, 0x37, 0x29, \
      0xdd, 0x9f, 0x3b, 0x3c, 0xce, 0xb6, 0xad, 0xa6, \
      0xbb, 0x6f, 0x75, 0x32, 0x1a, 0xa4, 0x51, 0x87, \
      0x2e, 0xdd, 0xda, 0x47, 0x90, 0x63, 0x88, 0x2a, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_Feedback__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_Feedback__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_SendGoal__TYPE_VERSION_HASH__INIT {1, { \
      0x0b, 0x5e, 0xed, 0x08, 0xdd, 0xf7, 0xf5, 0xff, \
      0x0d, 0x93, 0xf4, 0xb6, 0x46, 0x27, 0xcc, 0x5a, \
      0x60, 0x7c, 0xc7, 0x38, 0xbf, 0x85, 0x89, 0xe9, \
      0x49, 0x56, 0xe3, 0x05, 0x34, 0x75, 0xff, 0xf0, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_SendGoal__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_SendGoal__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_SendGoal_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x02, 0xab, 0x00, 0x8c, 0x3d, 0x8f, 0xbc, 0x89, \
      0xf9, 0xc3, 0x50, 0x71, 0x1a, 0x06, 0x51, 0x86, \
      0x5b, 0xfa, 0xb5, 0xca, 0x10, 0x2e, 0x51, 0x5a, \
      0xec, 0x10, 0x5f, 0x08, 0xea, 0x25, 0xe7, 0xe7, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_SendGoal_Request__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_SendGoal_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_SendGoal_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xf1, 0x7e, 0x70, 0x03, 0xee, 0xf9, 0x48, 0xf5, \
      0xf8, 0x5b, 0xe2, 0x21, 0x9e, 0x38, 0x49, 0x7d, \
      0xf8, 0x1e, 0xa9, 0xb3, 0xe3, 0xc8, 0x0a, 0x1b, \
      0xbb, 0x47, 0x0e, 0xde, 0x9a, 0xba, 0x74, 0x06, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_SendGoal_Response__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_SendGoal_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_SendGoal_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xcb, 0xa1, 0x1a, 0x6b, 0x37, 0xfd, 0xa8, 0x47, \
      0x47, 0xc7, 0x3a, 0xe6, 0x40, 0xf2, 0x85, 0x32, \
      0x87, 0x0a, 0x97, 0x78, 0x3c, 0x14, 0xa6, 0xb1, \
      0xa1, 0xe8, 0x3e, 0x2f, 0xd8, 0x6d, 0x2b, 0xd2, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_SendGoal_Event__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_SendGoal_Event__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_GetResult__TYPE_VERSION_HASH__INIT {1, { \
      0x25, 0x81, 0x5f, 0xef, 0x09, 0x9b, 0x20, 0xd5, \
      0x46, 0xbd, 0x3d, 0x40, 0xc4, 0xbd, 0xe5, 0xd5, \
      0xca, 0xb9, 0x88, 0xef, 0x64, 0xdf, 0xba, 0x70, \
      0x93, 0x4d, 0xf3, 0x6a, 0x3f, 0x0e, 0xcd, 0xe9, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_GetResult__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_GetResult__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_GetResult_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x8d, 0x57, 0x56, 0xb1, 0xd8, 0x14, 0x17, 0xdd, \
      0x21, 0x27, 0xfb, 0xa1, 0x05, 0x13, 0x77, 0xe8, \
      0x09, 0x78, 0x45, 0x52, 0x78, 0x13, 0xa8, 0xc9, \
      0x9c, 0xd7, 0x4c, 0x4d, 0x4f, 0x6c, 0x25, 0x0a, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_GetResult_Request__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_GetResult_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_GetResult_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xb6, 0x28, 0x14, 0xbf, 0xeb, 0x03, 0x01, 0x92, \
      0x9a, 0x69, 0x65, 0x57, 0xe0, 0x89, 0x46, 0xb1, \
      0x26, 0x70, 0x7a, 0x28, 0x36, 0x42, 0xe9, 0xe8, \
      0xfb, 0x80, 0xb5, 0x7d, 0xd4, 0x4d, 0x44, 0x28, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_GetResult_Response__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_GetResult_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_GetResult_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x29, 0x7c, 0x88, 0x19, 0xc9, 0x23, 0x1c, 0xe3, \
      0x56, 0x41, 0xb0, 0x72, 0x37, 0x42, 0x42, 0xee, \
      0x26, 0x70, 0x09, 0x41, 0xdb, 0x97, 0x8e, 0xfd, \
      0x69, 0xc7, 0xb1, 0xe5, 0xcd, 0xaf, 0xb9, 0x6e, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_GetResult_Event__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_GetResult_Event__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__JointTrajectory_FeedbackMessage__TYPE_VERSION_HASH__INIT {1, { \
      0xf1, 0x62, 0x49, 0xbf, 0x5c, 0x31, 0x2e, 0x94, \
      0x5b, 0xfa, 0x55, 0x5d, 0x1b, 0x5c, 0x8c, 0x94, \
      0xdb, 0x56, 0x96, 0x26, 0x9e, 0x28, 0x03, 0xd7, \
      0x32, 0x1e, 0x65, 0xf4, 0xd6, 0xd0, 0x2e, 0x3d, \
    }}
static const rosidl_type_hash_t control_msgs__action__JointTrajectory_FeedbackMessage__TYPE_VERSION_HASH = control_msgs__action__JointTrajectory_FeedbackMessage__TYPE_VERSION_HASH__INIT;

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
