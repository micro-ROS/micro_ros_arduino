// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tf2_msgs:action/LookupTransform.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__STRUCT_H_
#define TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t tf2_msgs__action__LookupTransform__TYPE_HASH = {1, {
    0x0b, 0x8a, 0xdf, 0x6b, 0xc0, 0xb5, 0x95, 0x88,
    0x79, 0xe3, 0x26, 0x5b, 0x41, 0xa4, 0x57, 0xe0,
    0x35, 0x58, 0xfe, 0x52, 0x38, 0x90, 0xa8, 0x12,
    0x52, 0xc7, 0x0e, 0xba, 0x97, 0xa8, 0x2c, 0x5d,
  }};


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_Goal__TYPE_HASH = {1, {
    0x81, 0x5e, 0xfc, 0x29, 0x4a, 0xd1, 0x7c, 0x81,
    0x3c, 0x60, 0x43, 0xcd, 0xde, 0x78, 0x1f, 0xf5,
    0x58, 0x10, 0xd4, 0x9d, 0xa0, 0x2e, 0xd0, 0x7f,
    0x92, 0x37, 0xdc, 0xd2, 0x0e, 0x88, 0xd4, 0x98,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'target_frame'
// Member 'source_frame'
// Member 'fixed_frame'
#include "rosidl_runtime_c/string.h"
// Member 'source_time'
// Member 'target_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_Goal
{
  rosidl_runtime_c__String target_frame;
  rosidl_runtime_c__String source_frame;
  builtin_interfaces__msg__Time source_time;
  builtin_interfaces__msg__Duration timeout;
  /// Advanced API
  builtin_interfaces__msg__Time target_time;
  rosidl_runtime_c__String fixed_frame;
  /// Whether or not to use the advanced API
  bool advanced;
} tf2_msgs__action__LookupTransform_Goal;

// Struct for a sequence of tf2_msgs__action__LookupTransform_Goal.
typedef struct tf2_msgs__action__LookupTransform_Goal__Sequence
{
  tf2_msgs__action__LookupTransform_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_Goal__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_Result__TYPE_HASH = {1, {
    0x06, 0x1d, 0x44, 0x23, 0xaf, 0x53, 0x52, 0xff,
    0x53, 0x14, 0xc8, 0xef, 0xfe, 0xf8, 0xfa, 0xab,
    0x13, 0x39, 0x91, 0xa7, 0x8f, 0x1b, 0x2b, 0xcd,
    0x1f, 0xec, 0xab, 0xad, 0x80, 0x87, 0x12, 0x25,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"
// Member 'error'
#include "tf2_msgs/msg/detail/tf2_error__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_Result
{
  geometry_msgs__msg__TransformStamped transform;
  tf2_msgs__msg__TF2Error error;
} tf2_msgs__action__LookupTransform_Result;

// Struct for a sequence of tf2_msgs__action__LookupTransform_Result.
typedef struct tf2_msgs__action__LookupTransform_Result__Sequence
{
  tf2_msgs__action__LookupTransform_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_Result__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_Feedback__TYPE_HASH = {1, {
    0x2d, 0xa0, 0xb0, 0x2f, 0x99, 0x0f, 0x04, 0x40,
    0x4a, 0xb8, 0xc9, 0x8a, 0x2a, 0x68, 0xcf, 0x5b,
    0xbc, 0x77, 0x3a, 0xe7, 0x47, 0xf9, 0x69, 0x11,
    0xf2, 0xd5, 0x54, 0x99, 0xcf, 0xb5, 0x15, 0x42,
  }};

// Constants defined in the message

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} tf2_msgs__action__LookupTransform_Feedback;

// Struct for a sequence of tf2_msgs__action__LookupTransform_Feedback.
typedef struct tf2_msgs__action__LookupTransform_Feedback__Sequence
{
  tf2_msgs__action__LookupTransform_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_Feedback__Sequence;

static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_SendGoal__TYPE_HASH = {1, {
    0x46, 0x46, 0xff, 0x57, 0x06, 0xc8, 0x6b, 0x04,
    0xd0, 0xa1, 0x09, 0x8d, 0x32, 0x99, 0x51, 0xa9,
    0x73, 0x1a, 0x75, 0x17, 0xe1, 0x67, 0x02, 0x90,
    0x5d, 0xe6, 0x07, 0x3c, 0xc7, 0x2c, 0x85, 0x30,
  }};


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_SendGoal_Request__TYPE_HASH = {1, {
    0xeb, 0x13, 0x12, 0xeb, 0x7a, 0xab, 0x35, 0xe3,
    0x5c, 0x71, 0xbb, 0x87, 0xc2, 0xba, 0x3a, 0x94,
    0x74, 0x7c, 0x5a, 0x65, 0x44, 0xea, 0x32, 0xbb,
    0x2b, 0x32, 0xb0, 0xf7, 0x57, 0x75, 0xb8, 0xca,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tf2_msgs/action/detail/lookup_transform__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tf2_msgs__action__LookupTransform_Goal goal;
} tf2_msgs__action__LookupTransform_SendGoal_Request;

// Struct for a sequence of tf2_msgs__action__LookupTransform_SendGoal_Request.
typedef struct tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence
{
  tf2_msgs__action__LookupTransform_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_SendGoal_Response__TYPE_HASH = {1, {
    0xc1, 0xad, 0xa9, 0x33, 0x04, 0x79, 0x3c, 0x08,
    0x81, 0x36, 0x57, 0x25, 0x5e, 0x7b, 0xde, 0x2e,
    0x40, 0xe2, 0x11, 0x4a, 0xa6, 0x34, 0xb7, 0x02,
    0xc3, 0xf8, 0xd4, 0xb7, 0x2a, 0xe0, 0x98, 0xbc,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tf2_msgs__action__LookupTransform_SendGoal_Response;

// Struct for a sequence of tf2_msgs__action__LookupTransform_SendGoal_Response.
typedef struct tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence
{
  tf2_msgs__action__LookupTransform_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_SendGoal_Event__TYPE_HASH = {1, {
    0x5a, 0xb9, 0x3d, 0x3d, 0x6c, 0x35, 0xb5, 0x63,
    0x90, 0x32, 0x50, 0x99, 0xcb, 0x08, 0x8c, 0x73,
    0xba, 0xe1, 0x76, 0xa3, 0x91, 0x23, 0xf2, 0xf6,
    0xdf, 0xe1, 0x19, 0x58, 0x24, 0x36, 0xac, 0xc5,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tf2_msgs__action__LookupTransform_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tf2_msgs__action__LookupTransform_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence request;
  tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence response;
} tf2_msgs__action__LookupTransform_SendGoal_Event;

// Struct for a sequence of tf2_msgs__action__LookupTransform_SendGoal_Event.
typedef struct tf2_msgs__action__LookupTransform_SendGoal_Event__Sequence
{
  tf2_msgs__action__LookupTransform_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_SendGoal_Event__Sequence;

static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_GetResult__TYPE_HASH = {1, {
    0x3c, 0xd1, 0x71, 0x57, 0x51, 0x89, 0x9e, 0x31,
    0x67, 0xb5, 0xae, 0xc3, 0xe4, 0xac, 0x19, 0x4f,
    0x7d, 0xa9, 0xe8, 0x49, 0x3a, 0x77, 0x28, 0x5f,
    0x9f, 0x6a, 0x4c, 0x91, 0x4f, 0x5e, 0x8b, 0x24,
  }};


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_GetResult_Request__TYPE_HASH = {1, {
    0x14, 0x8f, 0x9b, 0xdc, 0x01, 0xf9, 0x89, 0x22,
    0xd6, 0xfb, 0x20, 0x72, 0xcb, 0x64, 0x46, 0x8b,
    0x89, 0xc5, 0x7c, 0x78, 0x25, 0xd9, 0xd8, 0x3b,
    0x93, 0x2c, 0x18, 0x3d, 0xea, 0xa4, 0x69, 0x7d,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tf2_msgs__action__LookupTransform_GetResult_Request;

// Struct for a sequence of tf2_msgs__action__LookupTransform_GetResult_Request.
typedef struct tf2_msgs__action__LookupTransform_GetResult_Request__Sequence
{
  tf2_msgs__action__LookupTransform_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_GetResult_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_GetResult_Response__TYPE_HASH = {1, {
    0x95, 0x4d, 0xe3, 0xef, 0xc3, 0x6b, 0x16, 0x4c,
    0x4d, 0x21, 0x11, 0x6a, 0xbd, 0xbd, 0xcc, 0x52,
    0x74, 0x6e, 0x45, 0x4f, 0xd9, 0xc1, 0x69, 0xb5,
    0x5d, 0x9c, 0xfd, 0x89, 0xe8, 0x3d, 0x29, 0x9d,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_GetResult_Response
{
  int8_t status;
  tf2_msgs__action__LookupTransform_Result result;
} tf2_msgs__action__LookupTransform_GetResult_Response;

// Struct for a sequence of tf2_msgs__action__LookupTransform_GetResult_Response.
typedef struct tf2_msgs__action__LookupTransform_GetResult_Response__Sequence
{
  tf2_msgs__action__LookupTransform_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_GetResult_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_GetResult_Event__TYPE_HASH = {1, {
    0x32, 0x60, 0x11, 0x5e, 0x0f, 0x6a, 0x67, 0x6d,
    0x62, 0x1f, 0x19, 0x1f, 0x85, 0xa7, 0x2a, 0x0c,
    0x82, 0xf9, 0xfc, 0xb1, 0x48, 0x39, 0x65, 0xc1,
    0xfb, 0xaa, 0xab, 0x0b, 0x1d, 0x65, 0x1a, 0x9e,
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
  tf2_msgs__action__LookupTransform_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tf2_msgs__action__LookupTransform_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tf2_msgs__action__LookupTransform_GetResult_Request__Sequence request;
  tf2_msgs__action__LookupTransform_GetResult_Response__Sequence response;
} tf2_msgs__action__LookupTransform_GetResult_Event;

// Struct for a sequence of tf2_msgs__action__LookupTransform_GetResult_Event.
typedef struct tf2_msgs__action__LookupTransform_GetResult_Event__Sequence
{
  tf2_msgs__action__LookupTransform_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_GetResult_Event__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_FeedbackMessage__TYPE_HASH = {1, {
    0x10, 0xcb, 0x89, 0x92, 0x2d, 0xcb, 0x10, 0x3e,
    0x95, 0xc1, 0x85, 0xd4, 0x3e, 0x8a, 0x5e, 0xfa,
    0x3d, 0x38, 0xdb, 0x99, 0x6f, 0x73, 0x31, 0x51,
    0xa2, 0xf3, 0xe2, 0xac, 0x13, 0x3f, 0x48, 0x39,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tf2_msgs/action/detail/lookup_transform__struct.h"

/// Struct defined in action/LookupTransform in the package tf2_msgs.
typedef struct tf2_msgs__action__LookupTransform_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tf2_msgs__action__LookupTransform_Feedback feedback;
} tf2_msgs__action__LookupTransform_FeedbackMessage;

// Struct for a sequence of tf2_msgs__action__LookupTransform_FeedbackMessage.
typedef struct tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence
{
  tf2_msgs__action__LookupTransform_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__STRUCT_H_
