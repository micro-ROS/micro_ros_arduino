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


#define tf2_msgs__action__LookupTransform__TYPE_VERSION_HASH__INIT {1, { \
      0x26, 0x8c, 0x1d, 0x45, 0x42, 0x35, 0x1c, 0x24, \
      0x3d, 0xae, 0x52, 0x34, 0xa2, 0x35, 0x68, 0x17, \
      0x12, 0x1f, 0xc4, 0xad, 0xad, 0xfa, 0x41, 0x8d, \
      0x44, 0x20, 0xe6, 0x83, 0x9f, 0x9d, 0x82, 0x60, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_Goal__TYPE_VERSION_HASH__INIT {1, { \
      0x87, 0x6c, 0xee, 0x36, 0xc5, 0x0f, 0xfe, 0x08, \
      0x16, 0xfb, 0x3e, 0xfb, 0x71, 0x02, 0x01, 0x2c, \
      0x06, 0x93, 0xaa, 0xbf, 0x47, 0x3b, 0x8b, 0x6c, \
      0x5a, 0x44, 0xf8, 0xb5, 0xc9, 0x47, 0xc3, 0x9c, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_Goal__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_Goal__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_Result__TYPE_VERSION_HASH__INIT {1, { \
      0x68, 0x76, 0xeb, 0x61, 0x1c, 0x2a, 0xd2, 0x6d, \
      0x3d, 0xf7, 0xc7, 0x66, 0x9e, 0x10, 0xb8, 0xb9, \
      0x70, 0x3b, 0xf4, 0x3d, 0xd1, 0x04, 0xb6, 0xd5, \
      0xed, 0x28, 0x7e, 0xd0, 0x94, 0x8d, 0xe0, 0x52, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_Result__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_Result__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_Feedback__TYPE_VERSION_HASH__INIT {1, { \
      0xf8, 0x50, 0x9b, 0x08, 0x1c, 0xc8, 0x24, 0xae, \
      0x35, 0xf5, 0x45, 0x60, 0x2d, 0xdd, 0x60, 0xfd, \
      0xef, 0x30, 0x00, 0xb5, 0x06, 0x29, 0x39, 0x24, \
      0x94, 0x19, 0xf5, 0x4c, 0x22, 0xa5, 0xdf, 0x8b, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_Feedback__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_Feedback__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_SendGoal__TYPE_VERSION_HASH__INIT {1, { \
      0x05, 0x17, 0xd4, 0x77, 0x56, 0xd0, 0x6e, 0x2b, \
      0x52, 0xef, 0xf8, 0x2c, 0x1f, 0xdd, 0x72, 0x2c, \
      0x3e, 0x52, 0xa8, 0x1e, 0x75, 0x40, 0xa3, 0x43, \
      0x60, 0x96, 0xea, 0xc5, 0x12, 0x3a, 0x10, 0xf1, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_SendGoal__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_SendGoal__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_SendGoal_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x73, 0x08, 0x80, 0x19, 0x8c, 0xb8, 0xc3, 0xd3, \
      0x71, 0xa4, 0xb6, 0xde, 0xef, 0x58, 0xf9, 0xc0, \
      0x0c, 0x09, 0x99, 0x4c, 0xa5, 0x43, 0x20, 0x11, \
      0x6b, 0xb8, 0x36, 0x9e, 0x8e, 0xe0, 0xb5, 0x0b, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_SendGoal_Request__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_SendGoal_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_SendGoal_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x86, 0x43, 0xc6, 0x10, 0x95, 0x39, 0xdf, 0xe1, \
      0x62, 0xa4, 0x27, 0xc3, 0xd9, 0x19, 0x68, 0xad, \
      0xd1, 0xe3, 0xd4, 0xf6, 0xc1, 0xc5, 0xcc, 0x6a, \
      0x34, 0x96, 0x95, 0x75, 0x7c, 0x3b, 0x8d, 0xeb, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_SendGoal_Response__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_SendGoal_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_SendGoal_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x5d, 0x51, 0x33, 0x9c, 0x02, 0xbe, 0x26, 0x96, \
      0xd8, 0x55, 0x37, 0xd9, 0x7c, 0x97, 0xfb, 0x24, \
      0xee, 0xc1, 0x2b, 0x66, 0x97, 0xf5, 0x9d, 0x77, \
      0xe2, 0x32, 0x75, 0xca, 0x0c, 0x8e, 0xef, 0xdc, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_SendGoal_Event__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_SendGoal_Event__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_GetResult__TYPE_VERSION_HASH__INIT {1, { \
      0xac, 0xa4, 0xce, 0xdf, 0xaa, 0x02, 0xdb, 0x11, \
      0x07, 0x62, 0xb9, 0x26, 0x53, 0xf9, 0x00, 0xad, \
      0x86, 0x2b, 0x8c, 0x70, 0xf9, 0xb5, 0xff, 0x51, \
      0x6b, 0x21, 0x19, 0x39, 0xc8, 0x84, 0x4e, 0x48, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_GetResult__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_GetResult__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_GetResult_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x11, 0x2f, 0xd3, 0x9e, 0x5a, 0xd8, 0xf3, 0x80, \
      0xf1, 0x2e, 0x54, 0x80, 0xd5, 0x8b, 0x15, 0xfa, \
      0xd0, 0xd0, 0x4a, 0xe8, 0x62, 0xec, 0x92, 0x41, \
      0xce, 0x5f, 0x3a, 0x0b, 0xde, 0x6b, 0x21, 0x68, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_GetResult_Request__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_GetResult_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_GetResult_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xae, 0x7a, 0xf1, 0xbe, 0xff, 0xb2, 0xc8, 0x4c, \
      0x33, 0x0d, 0x64, 0x2d, 0x46, 0x83, 0xed, 0x56, \
      0xae, 0x37, 0x7d, 0x21, 0xc9, 0xcc, 0xb5, 0x72, \
      0xd7, 0xdf, 0xba, 0x00, 0x65, 0x2f, 0x65, 0xf2, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_GetResult_Response__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_GetResult_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_GetResult_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x25, 0x2d, 0x1a, 0x49, 0x81, 0x54, 0x7f, 0x54, \
      0x54, 0x83, 0x48, 0x9b, 0x02, 0x0a, 0x5a, 0x97, \
      0x87, 0xdf, 0x53, 0x44, 0x72, 0x67, 0xa1, 0x00, \
      0x3d, 0x02, 0x4d, 0x8a, 0xc7, 0xf3, 0xc4, 0xb3, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_GetResult_Event__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_GetResult_Event__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define tf2_msgs__action__LookupTransform_FeedbackMessage__TYPE_VERSION_HASH__INIT {1, { \
      0xfb, 0x6e, 0x8c, 0x4e, 0xb8, 0x5f, 0x27, 0x2b, \
      0x4d, 0x30, 0x18, 0xb5, 0x0c, 0xfa, 0x92, 0xa1, \
      0x20, 0x18, 0xbd, 0xde, 0xd3, 0xbc, 0x13, 0xcb, \
      0xe9, 0xac, 0xc5, 0xf8, 0xbd, 0x4c, 0x36, 0xe0, \
    }}
static const rosidl_type_hash_t tf2_msgs__action__LookupTransform_FeedbackMessage__TYPE_VERSION_HASH = tf2_msgs__action__LookupTransform_FeedbackMessage__TYPE_VERSION_HASH__INIT;

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
