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


static const rosidl_type_hash_t example_interfaces__action__Fibonacci__TYPE_HASH = {1, {
    0x95, 0x08, 0x05, 0x1d, 0xa1, 0xea, 0x46, 0x58,
    0xde, 0x14, 0x4b, 0x09, 0xbd, 0x06, 0x90, 0xff,
    0x3d, 0xe5, 0x21, 0x04, 0x68, 0x3d, 0x84, 0x7a,
    0xed, 0x76, 0x4d, 0x29, 0x15, 0x90, 0x6f, 0x51,
  }};


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_Goal__TYPE_HASH = {1, {
    0x22, 0x6c, 0xb4, 0x37, 0xe4, 0x35, 0x5d, 0xcd,
    0x3e, 0x91, 0x4f, 0x93, 0x03, 0x82, 0xa3, 0xb0,
    0xcc, 0x1d, 0xa8, 0x15, 0x45, 0xbd, 0x31, 0x9e,
    0xd5, 0x54, 0xe9, 0x5a, 0x03, 0x25, 0x5f, 0x51,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_Result__TYPE_HASH = {1, {
    0xfe, 0xa8, 0x13, 0x94, 0xf2, 0x5a, 0xa4, 0x50,
    0x22, 0x17, 0x95, 0x3f, 0x1a, 0x02, 0x1f, 0xb7,
    0x50, 0xe7, 0x9c, 0x10, 0xbb, 0xd4, 0x3f, 0x13,
    0xdd, 0x94, 0x63, 0x2d, 0xa6, 0x56, 0x96, 0x49,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_Feedback__TYPE_HASH = {1, {
    0x2b, 0x12, 0xe3, 0x73, 0x61, 0xda, 0x6f, 0x40,
    0x8d, 0x4c, 0x85, 0xbc, 0x24, 0xa1, 0x8d, 0xe6,
    0x43, 0x33, 0xf2, 0x90, 0x82, 0xf2, 0xca, 0x34,
    0xb5, 0xee, 0x33, 0xdc, 0x4c, 0x8b, 0x42, 0xa9,
  }};

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

static const rosidl_type_hash_t example_interfaces__action__Fibonacci_SendGoal__TYPE_HASH = {1, {
    0xd1, 0xa5, 0x7f, 0xb2, 0xa4, 0xaf, 0xe8, 0xc2,
    0x1e, 0x34, 0xfb, 0x10, 0xdb, 0x20, 0x6f, 0x16,
    0xce, 0x67, 0x29, 0xb2, 0x85, 0x31, 0x14, 0x14,
    0x72, 0xdf, 0x92, 0x27, 0x7c, 0x55, 0xb5, 0x57,
  }};


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_SendGoal_Request__TYPE_HASH = {1, {
    0x3d, 0x08, 0x89, 0x42, 0xb4, 0x13, 0x24, 0x7d,
    0xb5, 0x36, 0x57, 0x6f, 0x02, 0x86, 0x76, 0x8c,
    0x6b, 0xe8, 0xfc, 0xd5, 0xd0, 0xc9, 0xa5, 0xd5,
    0x44, 0xf3, 0x59, 0xfb, 0xa0, 0x90, 0xa2, 0x38,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_SendGoal_Response__TYPE_HASH = {1, {
    0xd8, 0xc0, 0x7b, 0xb3, 0xd5, 0xb7, 0x66, 0xfe,
    0x4b, 0x43, 0x15, 0x9c, 0x9a, 0x52, 0x22, 0xaf,
    0x52, 0x14, 0xe2, 0xfc, 0xc2, 0x92, 0x29, 0xb9,
    0x91, 0xd8, 0x26, 0x16, 0x6c, 0x51, 0x2b, 0xe1,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_SendGoal_Event__TYPE_HASH = {1, {
    0xd5, 0xe5, 0xb3, 0x12, 0xdb, 0xf8, 0x47, 0x30,
    0x7b, 0x0e, 0x87, 0x6c, 0x2e, 0xcc, 0x9d, 0x80,
    0x25, 0x8e, 0x95, 0xb0, 0xd1, 0x7f, 0x8f, 0x7b,
    0xfc, 0x58, 0x1c, 0x4a, 0x29, 0xc8, 0x34, 0x84,
  }};

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

static const rosidl_type_hash_t example_interfaces__action__Fibonacci_GetResult__TYPE_HASH = {1, {
    0x1b, 0x0d, 0xe0, 0xd5, 0xd2, 0x9d, 0xc9, 0x55,
    0xd9, 0x2f, 0x54, 0x67, 0x06, 0x56, 0x84, 0x28,
    0x63, 0x27, 0x71, 0xdb, 0x13, 0xec, 0x84, 0xc1,
    0x5e, 0xc1, 0xc1, 0xa5, 0x9f, 0x42, 0x4a, 0x57,
  }};


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_GetResult_Request__TYPE_HASH = {1, {
    0xc8, 0xa4, 0xf5, 0xe7, 0xd1, 0x3b, 0x81, 0x28,
    0x6e, 0xe1, 0x04, 0x3e, 0x2e, 0xcd, 0x08, 0x42,
    0x81, 0xce, 0xcf, 0x1f, 0xf0, 0x6a, 0xaa, 0x79,
    0x94, 0x64, 0xf5, 0xf1, 0x54, 0x79, 0xf0, 0x03,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_GetResult_Response__TYPE_HASH = {1, {
    0x60, 0x21, 0xdc, 0x98, 0xab, 0x9b, 0x4b, 0xbe,
    0x39, 0x5e, 0x48, 0xaa, 0x4d, 0xe8, 0x1e, 0xe5,
    0xf6, 0x8e, 0xb5, 0x70, 0xf8, 0x83, 0x58, 0xaf,
    0xfc, 0xc6, 0x48, 0x14, 0x66, 0x68, 0xb2, 0x4f,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_GetResult_Event__TYPE_HASH = {1, {
    0xac, 0x4e, 0x9c, 0xdb, 0x95, 0x4c, 0x2e, 0x19,
    0x2c, 0x9f, 0x07, 0x53, 0xd4, 0x6f, 0x59, 0xab,
    0x6f, 0x01, 0x01, 0xd5, 0xfb, 0x5b, 0x95, 0x42,
    0xfd, 0x8a, 0xb2, 0x90, 0x6e, 0x40, 0xc4, 0xd9,
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


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__action__Fibonacci_FeedbackMessage__TYPE_HASH = {1, {
    0xc1, 0xde, 0x71, 0xaf, 0xd5, 0x2e, 0x49, 0xa8,
    0x9c, 0x53, 0xd8, 0x26, 0x23, 0x66, 0x88, 0x41,
    0x85, 0xbc, 0x0a, 0x02, 0xf7, 0x8c, 0xe0, 0x51,
    0xc4, 0xe4, 0x6b, 0x0a, 0x7f, 0xe5, 0x9b, 0xb2,
  }};

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
