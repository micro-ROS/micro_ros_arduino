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


#define control_msgs__action__GripperCommand__TYPE_VERSION_HASH__INIT {1, { \
      0xad, 0x62, 0x79, 0x6c, 0x55, 0xac, 0x47, 0x90, \
      0xa6, 0xb9, 0xb2, 0xfd, 0x64, 0xdf, 0x23, 0xf0, \
      0x95, 0xbd, 0x6e, 0x8b, 0xf9, 0x80, 0x7e, 0x1a, \
      0xf7, 0xb1, 0xb3, 0x8f, 0x2b, 0x2c, 0x67, 0x0d, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand__TYPE_VERSION_HASH = control_msgs__action__GripperCommand__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_Goal__TYPE_VERSION_HASH__INIT {1, { \
      0xeb, 0xaa, 0x4e, 0xfd, 0x20, 0x85, 0x4d, 0x3e, \
      0x1a, 0x24, 0x1b, 0x5f, 0x37, 0x4a, 0x39, 0xd6, \
      0x3d, 0x1b, 0xe0, 0x9b, 0xb5, 0x7e, 0x67, 0xe5, \
      0x5e, 0x3a, 0x90, 0x3a, 0x74, 0xd9, 0xd7, 0xc5, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_Goal__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_Goal__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_Result__TYPE_VERSION_HASH__INIT {1, { \
      0x79, 0xb0, 0xd2, 0x85, 0x52, 0x55, 0xda, 0xe5, \
      0xbd, 0xf1, 0xf7, 0x0a, 0xe0, 0x74, 0x63, 0x36, \
      0x8c, 0x9a, 0x89, 0xbe, 0x68, 0x01, 0x85, 0x5b, \
      0xdb, 0xf1, 0x97, 0x59, 0x4b, 0xda, 0x1a, 0x5c, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_Result__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_Result__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_Feedback__TYPE_VERSION_HASH__INIT {1, { \
      0xd5, 0x2e, 0x5b, 0x85, 0x24, 0xdb, 0x5f, 0x75, \
      0x37, 0x23, 0x80, 0x7d, 0x61, 0x86, 0x75, 0x17, \
      0xea, 0x8e, 0xf7, 0x30, 0x69, 0x41, 0xc3, 0xbe, \
      0x4e, 0xd9, 0xfe, 0x1c, 0xfc, 0x78, 0xf1, 0xe5, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_Feedback__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_Feedback__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_SendGoal__TYPE_VERSION_HASH__INIT {1, { \
      0xcd, 0x44, 0x4e, 0x75, 0x4e, 0xba, 0x98, 0x2b, \
      0xca, 0x6c, 0xfe, 0x43, 0xd8, 0x9e, 0x40, 0x81, \
      0x65, 0x43, 0x53, 0x03, 0x2d, 0xa0, 0x4e, 0x8f, \
      0xd4, 0x19, 0x76, 0xa5, 0x7b, 0x79, 0xb9, 0x84, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_SendGoal__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_SendGoal__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_SendGoal_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xe4, 0xbb, 0xe3, 0x0a, 0x38, 0x94, 0x5a, 0x96, \
      0x7c, 0xa8, 0x7c, 0x60, 0xab, 0x7b, 0x18, 0xaa, \
      0x74, 0x40, 0xc7, 0x6b, 0xe8, 0xce, 0x8e, 0xab, \
      0x08, 0x16, 0xea, 0x9e, 0x71, 0x98, 0x07, 0xf6, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_SendGoal_Request__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_SendGoal_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_SendGoal_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xc9, 0xf0, 0x5e, 0xef, 0x59, 0x63, 0x97, 0xb6, \
      0xd8, 0xf2, 0xef, 0x66, 0xe3, 0xca, 0x28, 0x44, \
      0xed, 0xf5, 0x58, 0x51, 0x46, 0xa4, 0x82, 0xa2, \
      0x1b, 0x20, 0xac, 0x42, 0xe5, 0x6f, 0x7f, 0xc2, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_SendGoal_Response__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_SendGoal_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_SendGoal_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x70, 0x05, 0xb3, 0x6d, 0x45, 0x39, 0xe1, 0x1b, \
      0x3a, 0x4a, 0xf4, 0xe0, 0x67, 0xf0, 0x57, 0x35, \
      0xc0, 0x7b, 0xa2, 0x62, 0x57, 0x2a, 0x66, 0xd3, \
      0xea, 0xbc, 0x84, 0x88, 0x2a, 0x7d, 0x0d, 0x39, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_SendGoal_Event__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_SendGoal_Event__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_GetResult__TYPE_VERSION_HASH__INIT {1, { \
      0x92, 0x05, 0xbb, 0x72, 0xab, 0xd1, 0xcd, 0x1d, \
      0xe7, 0xac, 0x51, 0x49, 0x0e, 0xbb, 0xea, 0xef, \
      0x47, 0x96, 0x0c, 0x69, 0xfe, 0xc6, 0x30, 0xea, \
      0xde, 0xdb, 0x10, 0xa1, 0x06, 0x86, 0x7b, 0x94, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_GetResult__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_GetResult__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_GetResult_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x35, 0xe5, 0xf0, 0x0c, 0xd6, 0xe4, 0x5a, 0xc5, \
      0x9f, 0x9d, 0xe7, 0x97, 0x6e, 0x73, 0x45, 0xec, \
      0x4a, 0x7b, 0x50, 0x78, 0xa1, 0xb8, 0x9b, 0xe3, \
      0x87, 0xc5, 0x44, 0x3a, 0xf9, 0xde, 0xcf, 0xc7, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_GetResult_Request__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_GetResult_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_GetResult_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xfc, 0xcf, 0x4e, 0xde, 0x9c, 0x90, 0x7a, 0x78, \
      0xc8, 0xbc, 0x08, 0x3a, 0x8e, 0x55, 0x08, 0xf0, \
      0x03, 0x8e, 0xcc, 0x3c, 0xf3, 0x79, 0xaf, 0x9b, \
      0x10, 0xa9, 0x79, 0xbd, 0xe8, 0x83, 0x31, 0x46, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_GetResult_Response__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_GetResult_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_GetResult_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xbe, 0xd3, 0x66, 0xe5, 0xf3, 0xea, 0x0c, 0x97, \
      0x32, 0x09, 0x8a, 0xca, 0x3e, 0x0c, 0xdd, 0x28, \
      0x0e, 0xa7, 0x8a, 0xff, 0xe6, 0x01, 0x62, 0x4a, \
      0x12, 0x95, 0xb7, 0x7b, 0x20, 0x17, 0x62, 0xcb, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_GetResult_Event__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_GetResult_Event__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__GripperCommand_FeedbackMessage__TYPE_VERSION_HASH__INIT {1, { \
      0xb7, 0x7f, 0x90, 0x21, 0x2b, 0xf9, 0x1b, 0x5e, \
      0x7d, 0xce, 0xea, 0x44, 0x3f, 0x9d, 0x2a, 0xe4, \
      0x56, 0x02, 0xa1, 0x26, 0x33, 0x1b, 0x3f, 0x08, \
      0xf3, 0x19, 0xce, 0xee, 0x6b, 0xe9, 0x66, 0x37, \
    }}
static const rosidl_type_hash_t control_msgs__action__GripperCommand_FeedbackMessage__TYPE_VERSION_HASH = control_msgs__action__GripperCommand_FeedbackMessage__TYPE_VERSION_HASH__INIT;

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
