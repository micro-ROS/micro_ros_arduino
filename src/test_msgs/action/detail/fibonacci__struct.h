// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__DETAIL__FIBONACCI__STRUCT_H_
#define TEST_MSGS__ACTION__DETAIL__FIBONACCI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t test_msgs__action__Fibonacci__TYPE_HASH = {1, {
    0xbe, 0x92, 0x73, 0xe3, 0x55, 0x72, 0x25, 0x04,
    0x4b, 0x4a, 0x04, 0x08, 0x11, 0x11, 0x24, 0x91,
    0xf7, 0x07, 0x93, 0x26, 0xe3, 0xa5, 0x73, 0xf8,
    0x32, 0x58, 0xb0, 0xb4, 0xc3, 0x0b, 0xd0, 0x69,
  }};


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__Fibonacci_Goal__TYPE_HASH = {1, {
    0xe5, 0x8e, 0xf5, 0xa8, 0xf4, 0xf0, 0x39, 0xab,
    0x52, 0x2a, 0x74, 0x08, 0x23, 0x54, 0x7c, 0x46,
    0x0b, 0x1d, 0x5a, 0xed, 0x80, 0x31, 0xc8, 0xb7,
    0x82, 0x5d, 0x33, 0xd3, 0x45, 0xd9, 0x0d, 0xf8,
  }};

// Constants defined in the message

/// Struct defined in action/Fibonacci in the package test_msgs.
typedef struct test_msgs__action__Fibonacci_Goal
{
  int32_t order;
} test_msgs__action__Fibonacci_Goal;

// Struct for a sequence of test_msgs__action__Fibonacci_Goal.
typedef struct test_msgs__action__Fibonacci_Goal__Sequence
{
  test_msgs__action__Fibonacci_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_Goal__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__Fibonacci_Result__TYPE_HASH = {1, {
    0x07, 0x74, 0xb0, 0x95, 0x46, 0x78, 0x13, 0xc6,
    0x90, 0x4d, 0x47, 0x54, 0x98, 0xb5, 0x48, 0x6b,
    0x7e, 0xbd, 0x4c, 0xda, 0x6a, 0x45, 0x69, 0xf9,
    0x7e, 0x8d, 0xe8, 0xc8, 0x62, 0x68, 0x90, 0x49,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Fibonacci in the package test_msgs.
typedef struct test_msgs__action__Fibonacci_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} test_msgs__action__Fibonacci_Result;

// Struct for a sequence of test_msgs__action__Fibonacci_Result.
typedef struct test_msgs__action__Fibonacci_Result__Sequence
{
  test_msgs__action__Fibonacci_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_Result__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__Fibonacci_Feedback__TYPE_HASH = {1, {
    0x7d, 0x11, 0x10, 0xf2, 0xef, 0xa0, 0x19, 0xad,
    0x5a, 0xd8, 0xad, 0x22, 0x44, 0xdb, 0x98, 0xd8,
    0x62, 0xf3, 0x9d, 0xc9, 0xfa, 0xe8, 0xc9, 0x76,
    0x81, 0x4b, 0x00, 0x65, 0xfa, 0x2f, 0x32, 0xd5,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Fibonacci in the package test_msgs.
typedef struct test_msgs__action__Fibonacci_Feedback
{
  rosidl_runtime_c__int32__Sequence sequence;
} test_msgs__action__Fibonacci_Feedback;

// Struct for a sequence of test_msgs__action__Fibonacci_Feedback.
typedef struct test_msgs__action__Fibonacci_Feedback__Sequence
{
  test_msgs__action__Fibonacci_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_Feedback__Sequence;

static const rosidl_type_hash_t test_msgs__action__Fibonacci_SendGoal__TYPE_HASH = {1, {
    0xd8, 0x07, 0x63, 0x38, 0x03, 0xe3, 0x8e, 0x16,
    0x42, 0x76, 0x57, 0x3c, 0xd9, 0x7e, 0x9f, 0xbd,
    0x71, 0xe1, 0x09, 0xc2, 0x90, 0xbb, 0xf4, 0xcc,
    0x31, 0x2a, 0x0a, 0x1c, 0x9d, 0xa7, 0xbb, 0xd9,
  }};


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__Fibonacci_SendGoal_Request__TYPE_HASH = {1, {
    0xdf, 0xe7, 0x5c, 0x73, 0xdc, 0x2c, 0x09, 0x0c,
    0xbc, 0x8f, 0xd8, 0xc4, 0x50, 0x39, 0xbf, 0xa2,
    0x79, 0xd1, 0x6a, 0xa6, 0xaa, 0xdd, 0x34, 0x8f,
    0x81, 0x2c, 0x6a, 0xda, 0xd2, 0x6e, 0x66, 0x9e,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "test_msgs/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package test_msgs.
typedef struct test_msgs__action__Fibonacci_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  test_msgs__action__Fibonacci_Goal goal;
} test_msgs__action__Fibonacci_SendGoal_Request;

// Struct for a sequence of test_msgs__action__Fibonacci_SendGoal_Request.
typedef struct test_msgs__action__Fibonacci_SendGoal_Request__Sequence
{
  test_msgs__action__Fibonacci_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_SendGoal_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__Fibonacci_SendGoal_Response__TYPE_HASH = {1, {
    0x1e, 0x7e, 0x84, 0xf7, 0xed, 0xf1, 0xfb, 0x02,
    0x0d, 0x9e, 0x51, 0xc7, 0x84, 0x2b, 0xce, 0xef,
    0x4c, 0xbd, 0xbd, 0x84, 0x7f, 0x35, 0x41, 0x25,
    0xf3, 0x22, 0x7c, 0xf4, 0xf3, 0x14, 0xa6, 0x83,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Fibonacci in the package test_msgs.
typedef struct test_msgs__action__Fibonacci_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} test_msgs__action__Fibonacci_SendGoal_Response;

// Struct for a sequence of test_msgs__action__Fibonacci_SendGoal_Response.
typedef struct test_msgs__action__Fibonacci_SendGoal_Response__Sequence
{
  test_msgs__action__Fibonacci_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_SendGoal_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__Fibonacci_SendGoal_Event__TYPE_HASH = {1, {
    0xa2, 0x0e, 0x70, 0x8c, 0x6a, 0xae, 0x7a, 0x99,
    0xd1, 0xeb, 0x0e, 0x93, 0x0a, 0x09, 0x16, 0xf5,
    0x96, 0xbb, 0x5b, 0xae, 0x93, 0xa3, 0x42, 0xa6,
    0x17, 0x52, 0xe1, 0x31, 0x35, 0xbe, 0x2c, 0x44,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  test_msgs__action__Fibonacci_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  test_msgs__action__Fibonacci_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Fibonacci in the package test_msgs.
typedef struct test_msgs__action__Fibonacci_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  test_msgs__action__Fibonacci_SendGoal_Request__Sequence request;
  test_msgs__action__Fibonacci_SendGoal_Response__Sequence response;
} test_msgs__action__Fibonacci_SendGoal_Event;

// Struct for a sequence of test_msgs__action__Fibonacci_SendGoal_Event.
typedef struct test_msgs__action__Fibonacci_SendGoal_Event__Sequence
{
  test_msgs__action__Fibonacci_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_SendGoal_Event__Sequence;

static const rosidl_type_hash_t test_msgs__action__Fibonacci_GetResult__TYPE_HASH = {1, {
    0x5d, 0x30, 0xfd, 0xeb, 0x21, 0xd2, 0x0e, 0x11,
    0x7a, 0xa5, 0xf3, 0x6c, 0x7b, 0x4f, 0x0b, 0x68,
    0x74, 0xf1, 0xa8, 0xcf, 0x7a, 0x9c, 0x03, 0x8d,
    0x58, 0xf1, 0x15, 0x6c, 0x57, 0x37, 0xb2, 0x09,
  }};


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__Fibonacci_GetResult_Request__TYPE_HASH = {1, {
    0xc6, 0x5e, 0x93, 0xc4, 0xc4, 0x32, 0x8d, 0x7f,
    0x1a, 0xbd, 0x6a, 0xce, 0x83, 0xdb, 0xa8, 0xe5,
    0xfa, 0x0f, 0x32, 0xde, 0x76, 0xb4, 0xd2, 0xc9,
    0x6b, 0x5c, 0x65, 0x5d, 0x94, 0x80, 0x3b, 0x92,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Fibonacci in the package test_msgs.
typedef struct test_msgs__action__Fibonacci_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} test_msgs__action__Fibonacci_GetResult_Request;

// Struct for a sequence of test_msgs__action__Fibonacci_GetResult_Request.
typedef struct test_msgs__action__Fibonacci_GetResult_Request__Sequence
{
  test_msgs__action__Fibonacci_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_GetResult_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__Fibonacci_GetResult_Response__TYPE_HASH = {1, {
    0xef, 0x88, 0x15, 0x9d, 0x47, 0xa3, 0xd2, 0x1d,
    0x9b, 0xf4, 0xbe, 0xc6, 0x90, 0xcf, 0x66, 0x89,
    0x39, 0xd9, 0x54, 0x2d, 0xb2, 0x8a, 0x9c, 0xfd,
    0x77, 0xdb, 0xcd, 0x97, 0xea, 0xf1, 0xad, 0xd2,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package test_msgs.
typedef struct test_msgs__action__Fibonacci_GetResult_Response
{
  int8_t status;
  test_msgs__action__Fibonacci_Result result;
} test_msgs__action__Fibonacci_GetResult_Response;

// Struct for a sequence of test_msgs__action__Fibonacci_GetResult_Response.
typedef struct test_msgs__action__Fibonacci_GetResult_Response__Sequence
{
  test_msgs__action__Fibonacci_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_GetResult_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__Fibonacci_GetResult_Event__TYPE_HASH = {1, {
    0xfe, 0x0a, 0xa5, 0x84, 0x3e, 0xf1, 0x05, 0x50,
    0xa9, 0xb3, 0x22, 0xae, 0xec, 0xcd, 0x5b, 0x11,
    0xe7, 0x8b, 0xca, 0x05, 0xb3, 0x57, 0x1c, 0xf6,
    0x99, 0x9c, 0x51, 0xbf, 0xf3, 0x0c, 0x1e, 0x23,
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
  test_msgs__action__Fibonacci_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  test_msgs__action__Fibonacci_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Fibonacci in the package test_msgs.
typedef struct test_msgs__action__Fibonacci_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  test_msgs__action__Fibonacci_GetResult_Request__Sequence request;
  test_msgs__action__Fibonacci_GetResult_Response__Sequence response;
} test_msgs__action__Fibonacci_GetResult_Event;

// Struct for a sequence of test_msgs__action__Fibonacci_GetResult_Event.
typedef struct test_msgs__action__Fibonacci_GetResult_Event__Sequence
{
  test_msgs__action__Fibonacci_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_GetResult_Event__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__Fibonacci_FeedbackMessage__TYPE_HASH = {1, {
    0x37, 0x48, 0x7b, 0xae, 0x8c, 0xea, 0x35, 0x83,
    0x66, 0xb9, 0x70, 0x03, 0xc1, 0xef, 0x1c, 0xa7,
    0xce, 0x7c, 0x08, 0xdf, 0x36, 0xf9, 0xe8, 0xcc,
    0xa4, 0x96, 0x62, 0x42, 0x26, 0xae, 0xe6, 0x4e,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package test_msgs.
typedef struct test_msgs__action__Fibonacci_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  test_msgs__action__Fibonacci_Feedback feedback;
} test_msgs__action__Fibonacci_FeedbackMessage;

// Struct for a sequence of test_msgs__action__Fibonacci_FeedbackMessage.
typedef struct test_msgs__action__Fibonacci_FeedbackMessage__Sequence
{
  test_msgs__action__Fibonacci_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__Fibonacci_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__ACTION__DETAIL__FIBONACCI__STRUCT_H_
