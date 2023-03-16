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


#define control_msgs__action__PointHead__TYPE_VERSION_HASH__INIT {1, { \
      0x24, 0x87, 0xd8, 0x27, 0xab, 0xab, 0x3c, 0x84, \
      0xb9, 0xae, 0x42, 0x19, 0x89, 0xd9, 0xee, 0x53, \
      0xbf, 0x38, 0xc6, 0x72, 0x79, 0x8e, 0x19, 0xd5, \
      0xbc, 0x33, 0xd2, 0x67, 0x2f, 0x6e, 0xdc, 0xbc, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead__TYPE_VERSION_HASH = control_msgs__action__PointHead__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_Goal__TYPE_VERSION_HASH__INIT {1, { \
      0x55, 0xf9, 0x86, 0xa1, 0xbf, 0x6b, 0xa9, 0x86, \
      0x32, 0x73, 0x56, 0x74, 0x3d, 0xea, 0xea, 0x3a, \
      0xd6, 0x1b, 0x71, 0x63, 0x9a, 0x1c, 0x14, 0x55, \
      0x07, 0x2b, 0x18, 0x96, 0x29, 0xef, 0x15, 0xc3, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_Goal__TYPE_VERSION_HASH = control_msgs__action__PointHead_Goal__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_Result__TYPE_VERSION_HASH__INIT {1, { \
      0x6d, 0xc0, 0xd3, 0xb9, 0x9f, 0x76, 0x52, 0xbf, \
      0x8d, 0xc8, 0xcf, 0xa2, 0x55, 0x1c, 0xe8, 0x6e, \
      0x3d, 0x29, 0x67, 0x96, 0x76, 0xd5, 0xd5, 0x6b, \
      0xbb, 0x1a, 0x77, 0x20, 0x76, 0x5d, 0xd0, 0x8e, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_Result__TYPE_VERSION_HASH = control_msgs__action__PointHead_Result__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_Feedback__TYPE_VERSION_HASH__INIT {1, { \
      0x9d, 0x78, 0x02, 0x69, 0xa1, 0xa8, 0xf5, 0xc4, \
      0x3a, 0x37, 0xb9, 0x5f, 0x18, 0x6b, 0x16, 0x06, \
      0x59, 0x77, 0xa1, 0x01, 0xc7, 0x42, 0xfd, 0xb8, \
      0xc9, 0x26, 0x83, 0x09, 0xd7, 0x1b, 0xa2, 0x09, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_Feedback__TYPE_VERSION_HASH = control_msgs__action__PointHead_Feedback__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_SendGoal__TYPE_VERSION_HASH__INIT {1, { \
      0xef, 0x0a, 0x8b, 0x13, 0x13, 0x40, 0x78, 0x00, \
      0x09, 0x0a, 0x90, 0xcb, 0x7b, 0x20, 0x59, 0xae, \
      0xd1, 0x8c, 0x4c, 0xf0, 0x3e, 0xd3, 0xfe, 0x6a, \
      0xec, 0xd2, 0x35, 0xd2, 0xcd, 0x1d, 0xa1, 0x75, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_SendGoal__TYPE_VERSION_HASH = control_msgs__action__PointHead_SendGoal__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_SendGoal_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xc9, 0x1c, 0x6b, 0x94, 0x1c, 0x43, 0x14, 0x48, \
      0x97, 0x83, 0x92, 0xdd, 0xac, 0x91, 0xb9, 0xc8, \
      0x00, 0x55, 0x19, 0x3e, 0x47, 0x17, 0x41, 0x0f, \
      0x68, 0x6d, 0x8d, 0x51, 0xc4, 0x52, 0x29, 0xac, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_SendGoal_Request__TYPE_VERSION_HASH = control_msgs__action__PointHead_SendGoal_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_SendGoal_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xe8, 0x6b, 0x9b, 0xab, 0xee, 0xf6, 0x09, 0x62, \
      0xc9, 0x42, 0x52, 0x20, 0x17, 0x29, 0xa4, 0x63, \
      0xcd, 0x5e, 0x9c, 0xc0, 0xa7, 0xaf, 0x74, 0xd7, \
      0xbf, 0x9e, 0xff, 0xce, 0xe0, 0xd9, 0xe4, 0xa8, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_SendGoal_Response__TYPE_VERSION_HASH = control_msgs__action__PointHead_SendGoal_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_SendGoal_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xed, 0xdc, 0x1d, 0x05, 0x97, 0x9f, 0xb4, 0xc6, \
      0xd4, 0x97, 0x5f, 0x75, 0x61, 0x2f, 0x45, 0x2a, \
      0x02, 0x19, 0x9e, 0xfe, 0x68, 0x70, 0xb6, 0x8f, \
      0x1d, 0xca, 0x30, 0xed, 0x7b, 0x82, 0xd9, 0x72, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_SendGoal_Event__TYPE_VERSION_HASH = control_msgs__action__PointHead_SendGoal_Event__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_GetResult__TYPE_VERSION_HASH__INIT {1, { \
      0x6e, 0x2b, 0xb4, 0x45, 0x44, 0x63, 0x03, 0x93, \
      0x16, 0xa7, 0x98, 0xb3, 0x5d, 0x20, 0x4b, 0x47, \
      0xae, 0x4d, 0x82, 0xd6, 0x43, 0x6e, 0x66, 0xa6, \
      0x70, 0xb6, 0xc1, 0xfe, 0xd1, 0x48, 0xa8, 0x33, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_GetResult__TYPE_VERSION_HASH = control_msgs__action__PointHead_GetResult__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_GetResult_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x9d, 0x6b, 0xf0, 0x16, 0x72, 0x08, 0x87, 0x83, \
      0x5f, 0x11, 0x28, 0xd4, 0xca, 0x88, 0xd1, 0xab, \
      0x13, 0x60, 0x4d, 0xea, 0x69, 0xe3, 0x87, 0xf8, \
      0xef, 0x4e, 0xfd, 0xcd, 0x96, 0x1b, 0x8f, 0x41, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_GetResult_Request__TYPE_VERSION_HASH = control_msgs__action__PointHead_GetResult_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_GetResult_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x28, 0x51, 0x66, 0x73, 0x6e, 0xa2, 0x2b, 0x09, \
      0xd3, 0xe6, 0xf3, 0x1c, 0xaf, 0xa7, 0x70, 0x68, \
      0x04, 0x56, 0xfc, 0x60, 0x87, 0xb0, 0x59, 0xf9, \
      0x41, 0x03, 0xf3, 0xb1, 0x49, 0x16, 0x9e, 0xe8, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_GetResult_Response__TYPE_VERSION_HASH = control_msgs__action__PointHead_GetResult_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_GetResult_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x1b, 0x38, 0xd0, 0xb7, 0xfd, 0xa2, 0x5d, 0x15, \
      0x2a, 0xc4, 0x68, 0x0f, 0xef, 0x0f, 0x0e, 0xd1, \
      0x87, 0xa5, 0x6a, 0xc2, 0x03, 0x8a, 0x99, 0x36, \
      0xae, 0x59, 0x39, 0xe9, 0xf5, 0x33, 0xc2, 0x6b, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_GetResult_Event__TYPE_VERSION_HASH = control_msgs__action__PointHead_GetResult_Event__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define control_msgs__action__PointHead_FeedbackMessage__TYPE_VERSION_HASH__INIT {1, { \
      0x72, 0x05, 0xae, 0x84, 0xf4, 0xb5, 0x23, 0xc0, \
      0xa9, 0x41, 0x5b, 0x9b, 0x9f, 0x82, 0x5b, 0x26, \
      0x7a, 0xb3, 0x41, 0x42, 0xd4, 0xb9, 0x9c, 0x1e, \
      0x8b, 0xa6, 0xa9, 0x28, 0x04, 0x3d, 0xeb, 0xce, \
    }}
static const rosidl_type_hash_t control_msgs__action__PointHead_FeedbackMessage__TYPE_VERSION_HASH = control_msgs__action__PointHead_FeedbackMessage__TYPE_VERSION_HASH__INIT;

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
