// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__STRUCT_H_
#define EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


#define example_interfaces__action__Fibonacci__TYPE_VERSION_HASH__INIT {1, { \
      0x18, 0xfe, 0xe5, 0x9a, 0xae, 0x91, 0x3c, 0x0b, \
      0x21, 0x8f, 0xd3, 0x6f, 0x13, 0x18, 0x4d, 0xf6, \
      0x58, 0xb8, 0xfa, 0xe8, 0xe1, 0xd3, 0x98, 0xe7, \
      0xd3, 0xb4, 0xa1, 0xfe, 0xfc, 0x24, 0x73, 0x6c, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_Goal__TYPE_VERSION_HASH__INIT {1, { \
      0x72, 0x28, 0xcc, 0x65, 0xfe, 0x90, 0x84, 0x0d, \
      0xbc, 0x6d, 0x59, 0xa5, 0xe0, 0xdc, 0xf1, 0x7e, \
      0xfb, 0x68, 0x5e, 0xed, 0xa9, 0xb7, 0x82, 0x72, \
      0x95, 0x9c, 0x41, 0x35, 0xb6, 0xe0, 0x1f, 0x57, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_Goal__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_Goal__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in action/Fibonacci in the package example_interfaces.
typedef struct example_interfaces__action__Fibonacci_Goal
{
  int32_t order;
} example_interfaces__action__Fibonacci_Goal;

// Struct for a sequence of example_interfaces__action__Fibonacci_Goal.
typedef struct example_interfaces__action__Fibonacci_Goal__Sequence
{
  example_interfaces__action__Fibonacci_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_Goal__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_Result__TYPE_VERSION_HASH__INIT {1, { \
      0x93, 0x99, 0xef, 0x6a, 0x29, 0x1c, 0xbe, 0xae, \
      0xb4, 0x5b, 0x8d, 0x6c, 0xcb, 0x0f, 0x9b, 0xbc, \
      0x9e, 0xcc, 0x77, 0x5c, 0x4a, 0x90, 0xb8, 0x49, \
      0x2f, 0x41, 0xd7, 0x39, 0x13, 0xeb, 0x9b, 0xa0, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_Result__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_Result__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Fibonacci in the package example_interfaces.
typedef struct example_interfaces__action__Fibonacci_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} example_interfaces__action__Fibonacci_Result;

// Struct for a sequence of example_interfaces__action__Fibonacci_Result.
typedef struct example_interfaces__action__Fibonacci_Result__Sequence
{
  example_interfaces__action__Fibonacci_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_Result__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_Feedback__TYPE_VERSION_HASH__INIT {1, { \
      0xa3, 0xe7, 0x73, 0x83, 0xf0, 0x77, 0x2c, 0xea, \
      0x79, 0x50, 0xc5, 0x76, 0x65, 0xdf, 0x4a, 0x7d, \
      0x77, 0x3f, 0x66, 0xd0, 0x39, 0x58, 0xbf, 0x72, \
      0xe5, 0xec, 0x60, 0x65, 0xe8, 0xe8, 0x73, 0x8e, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_Feedback__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_Feedback__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Fibonacci in the package example_interfaces.
typedef struct example_interfaces__action__Fibonacci_Feedback
{
  rosidl_runtime_c__int32__Sequence sequence;
} example_interfaces__action__Fibonacci_Feedback;

// Struct for a sequence of example_interfaces__action__Fibonacci_Feedback.
typedef struct example_interfaces__action__Fibonacci_Feedback__Sequence
{
  example_interfaces__action__Fibonacci_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_Feedback__Sequence;

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_SendGoal__TYPE_VERSION_HASH__INIT {1, { \
      0x2b, 0xb7, 0xff, 0x12, 0x04, 0x76, 0x88, 0x61, \
      0xb8, 0x05, 0xf5, 0xb9, 0x79, 0xf6, 0xca, 0xfd, \
      0x5b, 0x64, 0x2d, 0x51, 0xe5, 0x39, 0x7f, 0xe1, \
      0x08, 0x68, 0x27, 0xa9, 0xba, 0x56, 0x81, 0xc9, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_SendGoal__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_SendGoal__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_SendGoal_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x78, 0xc3, 0x20, 0x41, 0x07, 0xd7, 0xeb, 0x40, \
      0xca, 0xa6, 0x4c, 0xbb, 0x7a, 0xb2, 0x4d, 0x58, \
      0xab, 0x97, 0xfa, 0x29, 0xfd, 0xec, 0x92, 0x31, \
      0x5b, 0x12, 0x07, 0x54, 0xc9, 0xe9, 0x1f, 0xdf, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_SendGoal_Request__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_SendGoal_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "example_interfaces/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package example_interfaces.
typedef struct example_interfaces__action__Fibonacci_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  example_interfaces__action__Fibonacci_Goal goal;
} example_interfaces__action__Fibonacci_SendGoal_Request;

// Struct for a sequence of example_interfaces__action__Fibonacci_SendGoal_Request.
typedef struct example_interfaces__action__Fibonacci_SendGoal_Request__Sequence
{
  example_interfaces__action__Fibonacci_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_SendGoal_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_SendGoal_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x76, 0x95, 0xbd, 0xc4, 0x01, 0x99, 0x5c, 0x7f, \
      0x6b, 0x41, 0x4c, 0x4c, 0x23, 0xa8, 0xde, 0x3e, \
      0x7a, 0x63, 0x40, 0xb7, 0x2d, 0xf4, 0x10, 0x89, \
      0x61, 0xfc, 0xbd, 0x61, 0xef, 0xf5, 0xfc, 0x85, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_SendGoal_Response__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_SendGoal_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Fibonacci in the package example_interfaces.
typedef struct example_interfaces__action__Fibonacci_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} example_interfaces__action__Fibonacci_SendGoal_Response;

// Struct for a sequence of example_interfaces__action__Fibonacci_SendGoal_Response.
typedef struct example_interfaces__action__Fibonacci_SendGoal_Response__Sequence
{
  example_interfaces__action__Fibonacci_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_SendGoal_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_SendGoal_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x60, 0xad, 0x87, 0xa9, 0x7b, 0x75, 0x3b, 0x1d, \
      0x00, 0x82, 0x1a, 0xff, 0x91, 0xcb, 0x38, 0xb1, \
      0xc3, 0x33, 0x7d, 0x6a, 0x81, 0x59, 0xae, 0xa6, \
      0x08, 0xa1, 0xe3, 0xaf, 0x63, 0xaa, 0xe5, 0x59, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_SendGoal_Event__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_SendGoal_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  example_interfaces__action__Fibonacci_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  example_interfaces__action__Fibonacci_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Fibonacci in the package example_interfaces.
typedef struct example_interfaces__action__Fibonacci_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  example_interfaces__action__Fibonacci_SendGoal_Request__Sequence request;
  example_interfaces__action__Fibonacci_SendGoal_Response__Sequence response;
} example_interfaces__action__Fibonacci_SendGoal_Event;

// Struct for a sequence of example_interfaces__action__Fibonacci_SendGoal_Event.
typedef struct example_interfaces__action__Fibonacci_SendGoal_Event__Sequence
{
  example_interfaces__action__Fibonacci_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_SendGoal_Event__Sequence;

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_GetResult__TYPE_VERSION_HASH__INIT {1, { \
      0x04, 0xee, 0x37, 0x8c, 0x8d, 0x29, 0xba, 0x5e, \
      0x99, 0x48, 0xb9, 0x75, 0xb8, 0x40, 0xba, 0xbe, \
      0xed, 0x3b, 0x15, 0x5f, 0x80, 0x93, 0x54, 0xa7, \
      0x14, 0x64, 0xd5, 0x50, 0xfd, 0xb2, 0x9a, 0x2b, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_GetResult__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_GetResult__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_GetResult_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x42, 0x0a, 0x4a, 0xa5, 0x1b, 0x5c, 0x03, 0xc1, \
      0xa9, 0xf5, 0xd9, 0xc3, 0x40, 0x74, 0x39, 0x76, \
      0x25, 0xa6, 0x49, 0xb9, 0x59, 0xb8, 0x29, 0x33, \
      0x77, 0x7c, 0xa0, 0xa8, 0x2b, 0xd1, 0x4a, 0x94, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_GetResult_Request__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_GetResult_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Fibonacci in the package example_interfaces.
typedef struct example_interfaces__action__Fibonacci_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} example_interfaces__action__Fibonacci_GetResult_Request;

// Struct for a sequence of example_interfaces__action__Fibonacci_GetResult_Request.
typedef struct example_interfaces__action__Fibonacci_GetResult_Request__Sequence
{
  example_interfaces__action__Fibonacci_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_GetResult_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_GetResult_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xa7, 0xd4, 0xaa, 0x50, 0x9f, 0x45, 0x4d, 0x55, \
      0xfd, 0xb8, 0x5a, 0x52, 0x0b, 0x95, 0x5f, 0x49, \
      0xa0, 0x1f, 0x64, 0x56, 0x6e, 0x76, 0x9e, 0xf8, \
      0xc1, 0x2d, 0x41, 0x97, 0xe9, 0xab, 0x6b, 0x61, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_GetResult_Response__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_GetResult_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "example_interfaces/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package example_interfaces.
typedef struct example_interfaces__action__Fibonacci_GetResult_Response
{
  int8_t status;
  example_interfaces__action__Fibonacci_Result result;
} example_interfaces__action__Fibonacci_GetResult_Response;

// Struct for a sequence of example_interfaces__action__Fibonacci_GetResult_Response.
typedef struct example_interfaces__action__Fibonacci_GetResult_Response__Sequence
{
  example_interfaces__action__Fibonacci_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_GetResult_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_GetResult_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xa0, 0x34, 0x64, 0x36, 0x4b, 0xe8, 0xec, 0xcb, \
      0x32, 0x19, 0x8a, 0x7b, 0x0f, 0x4b, 0xbe, 0x2f, \
      0x7f, 0xfb, 0x6c, 0x13, 0x08, 0x6e, 0x99, 0x43, \
      0x6a, 0x51, 0xf2, 0x81, 0xc9, 0x24, 0xf4, 0xe2, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_GetResult_Event__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_GetResult_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  example_interfaces__action__Fibonacci_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  example_interfaces__action__Fibonacci_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Fibonacci in the package example_interfaces.
typedef struct example_interfaces__action__Fibonacci_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  example_interfaces__action__Fibonacci_GetResult_Request__Sequence request;
  example_interfaces__action__Fibonacci_GetResult_Response__Sequence response;
} example_interfaces__action__Fibonacci_GetResult_Event;

// Struct for a sequence of example_interfaces__action__Fibonacci_GetResult_Event.
typedef struct example_interfaces__action__Fibonacci_GetResult_Event__Sequence
{
  example_interfaces__action__Fibonacci_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_GetResult_Event__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__action__Fibonacci_FeedbackMessage__TYPE_VERSION_HASH__INIT {1, { \
      0x5e, 0xb5, 0x4c, 0x19, 0x06, 0x71, 0xe0, 0x95, \
      0x2f, 0xa4, 0x15, 0x96, 0xe8, 0xf3, 0xe1, 0xdc, \
      0x0a, 0x26, 0xe7, 0x10, 0xfd, 0x61, 0xec, 0xa7, \
      0x2c, 0x21, 0x50, 0x20, 0x66, 0xe1, 0xf6, 0x2f, \
    }}
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_FeedbackMessage__TYPE_VERSION_HASH = example_interfaces__action__Fibonacci_FeedbackMessage__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "example_interfaces/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package example_interfaces.
typedef struct example_interfaces__action__Fibonacci_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  example_interfaces__action__Fibonacci_Feedback feedback;
} example_interfaces__action__Fibonacci_FeedbackMessage;

// Struct for a sequence of example_interfaces__action__Fibonacci_FeedbackMessage.
typedef struct example_interfaces__action__Fibonacci_FeedbackMessage__Sequence
{
  example_interfaces__action__Fibonacci_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__action__Fibonacci_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__ACTION__DETAIL__FIBONACCI__STRUCT_H_
