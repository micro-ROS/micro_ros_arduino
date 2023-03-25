// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:action/NestedMessage.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__ACTION__DETAIL__NESTED_MESSAGE__STRUCT_H_
#define TEST_MSGS__ACTION__DETAIL__NESTED_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t test_msgs__action__NestedMessage__TYPE_HASH = {1, {
    0xed, 0xd4, 0xba, 0xc3, 0x61, 0xb0, 0xee, 0x01,
    0xc5, 0xe2, 0x28, 0xd7, 0xc0, 0x65, 0xf1, 0xd6,
    0x4e, 0x1b, 0x11, 0xaa, 0x55, 0xc5, 0xc6, 0xef,
    0xb4, 0xe5, 0xe1, 0x0e, 0x40, 0xfd, 0xe4, 0x0a,
  }};


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__NestedMessage_Goal__TYPE_HASH = {1, {
    0x88, 0x92, 0x87, 0x67, 0x53, 0x7b, 0x27, 0xc7,
    0xf9, 0xc7, 0xc7, 0x84, 0x42, 0xe9, 0x5b, 0x78,
    0xc8, 0xa9, 0xb8, 0xf3, 0x58, 0x77, 0x49, 0x6e,
    0xc9, 0xca, 0x40, 0xc3, 0xa4, 0xa1, 0x41, 0x76,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'nested_field_no_pkg'
#include "test_msgs/msg/detail/builtins__struct.h"
// Member 'nested_field'
#include "test_msgs/msg/detail/basic_types__struct.h"
// Member 'nested_different_pkg'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NestedMessage in the package test_msgs.
typedef struct test_msgs__action__NestedMessage_Goal
{
  test_msgs__msg__Builtins nested_field_no_pkg;
  test_msgs__msg__BasicTypes nested_field;
  builtin_interfaces__msg__Time nested_different_pkg;
} test_msgs__action__NestedMessage_Goal;

// Struct for a sequence of test_msgs__action__NestedMessage_Goal.
typedef struct test_msgs__action__NestedMessage_Goal__Sequence
{
  test_msgs__action__NestedMessage_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_Goal__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__NestedMessage_Result__TYPE_HASH = {1, {
    0xc3, 0x35, 0x6d, 0xa8, 0x73, 0xcd, 0x9b, 0x6f,
    0x11, 0xca, 0xfa, 0xa2, 0x5d, 0x6a, 0x92, 0x69,
    0xa6, 0x87, 0x51, 0xb9, 0x37, 0x71, 0x5c, 0xee,
    0x50, 0x6c, 0x3d, 0xbc, 0x05, 0x1c, 0xdc, 0xfd,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'nested_field_no_pkg'
// already included above
// #include "test_msgs/msg/detail/builtins__struct.h"
// Member 'nested_field'
// already included above
// #include "test_msgs/msg/detail/basic_types__struct.h"
// Member 'nested_different_pkg'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NestedMessage in the package test_msgs.
typedef struct test_msgs__action__NestedMessage_Result
{
  test_msgs__msg__Builtins nested_field_no_pkg;
  test_msgs__msg__BasicTypes nested_field;
  builtin_interfaces__msg__Time nested_different_pkg;
} test_msgs__action__NestedMessage_Result;

// Struct for a sequence of test_msgs__action__NestedMessage_Result.
typedef struct test_msgs__action__NestedMessage_Result__Sequence
{
  test_msgs__action__NestedMessage_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_Result__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__NestedMessage_Feedback__TYPE_HASH = {1, {
    0xd0, 0x3a, 0xab, 0xa0, 0x98, 0xe3, 0x30, 0x76,
    0xc5, 0x35, 0x60, 0xda, 0x77, 0x01, 0x7d, 0x77,
    0x7a, 0x79, 0xd4, 0x5d, 0x13, 0x5b, 0xb7, 0x28,
    0x86, 0xda, 0x6e, 0x5d, 0x83, 0x57, 0x71, 0x8e,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'nested_field_no_pkg'
// already included above
// #include "test_msgs/msg/detail/builtins__struct.h"
// Member 'nested_field'
// already included above
// #include "test_msgs/msg/detail/basic_types__struct.h"
// Member 'nested_different_pkg'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NestedMessage in the package test_msgs.
typedef struct test_msgs__action__NestedMessage_Feedback
{
  test_msgs__msg__Builtins nested_field_no_pkg;
  test_msgs__msg__BasicTypes nested_field;
  builtin_interfaces__msg__Time nested_different_pkg;
} test_msgs__action__NestedMessage_Feedback;

// Struct for a sequence of test_msgs__action__NestedMessage_Feedback.
typedef struct test_msgs__action__NestedMessage_Feedback__Sequence
{
  test_msgs__action__NestedMessage_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_Feedback__Sequence;

static const rosidl_type_hash_t test_msgs__action__NestedMessage_SendGoal__TYPE_HASH = {1, {
    0x8d, 0xea, 0x94, 0x72, 0x16, 0x74, 0x0e, 0x5b,
    0x9e, 0x00, 0xeb, 0x53, 0x73, 0x06, 0xbf, 0xe7,
    0x5a, 0xf9, 0x64, 0x92, 0xc6, 0x88, 0x92, 0x7d,
    0x4f, 0x80, 0x3a, 0xfa, 0x5d, 0x81, 0x35, 0x9b,
  }};


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__NestedMessage_SendGoal_Request__TYPE_HASH = {1, {
    0xe8, 0xd6, 0xd6, 0xd1, 0x51, 0xe1, 0xb8, 0x99,
    0x13, 0x73, 0x19, 0xc7, 0x78, 0x4c, 0x42, 0x0e,
    0x6c, 0xae, 0x65, 0x76, 0x7c, 0x10, 0xca, 0x02,
    0xcd, 0x12, 0x9f, 0x76, 0xc5, 0xd7, 0xea, 0x1b,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "test_msgs/action/detail/nested_message__struct.h"

/// Struct defined in action/NestedMessage in the package test_msgs.
typedef struct test_msgs__action__NestedMessage_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  test_msgs__action__NestedMessage_Goal goal;
} test_msgs__action__NestedMessage_SendGoal_Request;

// Struct for a sequence of test_msgs__action__NestedMessage_SendGoal_Request.
typedef struct test_msgs__action__NestedMessage_SendGoal_Request__Sequence
{
  test_msgs__action__NestedMessage_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_SendGoal_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__NestedMessage_SendGoal_Response__TYPE_HASH = {1, {
    0xe7, 0x8d, 0x26, 0x9a, 0x75, 0x54, 0x43, 0x04,
    0xab, 0x7f, 0x6d, 0x70, 0x0b, 0xa1, 0xcb, 0x71,
    0x88, 0x75, 0x36, 0x0b, 0xb8, 0x40, 0x07, 0x90,
    0x62, 0x27, 0x26, 0x7f, 0x9b, 0x12, 0x43, 0x81,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NestedMessage in the package test_msgs.
typedef struct test_msgs__action__NestedMessage_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} test_msgs__action__NestedMessage_SendGoal_Response;

// Struct for a sequence of test_msgs__action__NestedMessage_SendGoal_Response.
typedef struct test_msgs__action__NestedMessage_SendGoal_Response__Sequence
{
  test_msgs__action__NestedMessage_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_SendGoal_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__NestedMessage_SendGoal_Event__TYPE_HASH = {1, {
    0xcc, 0x2d, 0x31, 0xba, 0xaf, 0x95, 0x99, 0x5e,
    0x00, 0x22, 0x1e, 0x3e, 0xbb, 0x65, 0xf3, 0xad,
    0x0b, 0x5b, 0xa6, 0x36, 0xdb, 0x19, 0x22, 0x3b,
    0xad, 0xe7, 0x3b, 0x49, 0xf0, 0xd3, 0x05, 0xe7,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  test_msgs__action__NestedMessage_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  test_msgs__action__NestedMessage_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/NestedMessage in the package test_msgs.
typedef struct test_msgs__action__NestedMessage_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  test_msgs__action__NestedMessage_SendGoal_Request__Sequence request;
  test_msgs__action__NestedMessage_SendGoal_Response__Sequence response;
} test_msgs__action__NestedMessage_SendGoal_Event;

// Struct for a sequence of test_msgs__action__NestedMessage_SendGoal_Event.
typedef struct test_msgs__action__NestedMessage_SendGoal_Event__Sequence
{
  test_msgs__action__NestedMessage_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_SendGoal_Event__Sequence;

static const rosidl_type_hash_t test_msgs__action__NestedMessage_GetResult__TYPE_HASH = {1, {
    0x02, 0x72, 0xbc, 0x33, 0x0d, 0x08, 0xcb, 0xb9,
    0x6e, 0x69, 0x47, 0xdd, 0x9c, 0x27, 0x31, 0xc1,
    0x2a, 0xd7, 0x25, 0x28, 0x23, 0xc7, 0x08, 0x69,
    0x78, 0xd1, 0x17, 0xa8, 0x02, 0x11, 0x9e, 0x2b,
  }};


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__NestedMessage_GetResult_Request__TYPE_HASH = {1, {
    0x68, 0x7e, 0xbb, 0xfa, 0x75, 0xd9, 0x5d, 0x5d,
    0x0f, 0x23, 0xca, 0x80, 0x0c, 0x21, 0x3b, 0x47,
    0x77, 0xfe, 0xf3, 0x11, 0x02, 0x8d, 0x94, 0xa5,
    0xd3, 0x53, 0xef, 0x73, 0x77, 0xf2, 0x57, 0x41,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NestedMessage in the package test_msgs.
typedef struct test_msgs__action__NestedMessage_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} test_msgs__action__NestedMessage_GetResult_Request;

// Struct for a sequence of test_msgs__action__NestedMessage_GetResult_Request.
typedef struct test_msgs__action__NestedMessage_GetResult_Request__Sequence
{
  test_msgs__action__NestedMessage_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_GetResult_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__NestedMessage_GetResult_Response__TYPE_HASH = {1, {
    0x66, 0x3c, 0xa1, 0x6d, 0x67, 0x4f, 0x9c, 0x95,
    0x57, 0x88, 0x4d, 0x2c, 0xfa, 0x74, 0xb5, 0x1e,
    0x3d, 0x47, 0x20, 0xa8, 0xfd, 0x30, 0x5d, 0x87,
    0xd8, 0x93, 0x69, 0xa0, 0x87, 0x79, 0x1c, 0x80,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "test_msgs/action/detail/nested_message__struct.h"

/// Struct defined in action/NestedMessage in the package test_msgs.
typedef struct test_msgs__action__NestedMessage_GetResult_Response
{
  int8_t status;
  test_msgs__action__NestedMessage_Result result;
} test_msgs__action__NestedMessage_GetResult_Response;

// Struct for a sequence of test_msgs__action__NestedMessage_GetResult_Response.
typedef struct test_msgs__action__NestedMessage_GetResult_Response__Sequence
{
  test_msgs__action__NestedMessage_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_GetResult_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__NestedMessage_GetResult_Event__TYPE_HASH = {1, {
    0x5a, 0xf2, 0x0e, 0x11, 0xdf, 0xed, 0x84, 0x06,
    0xb4, 0xd9, 0x48, 0x37, 0xf1, 0xea, 0x25, 0x42,
    0x4e, 0x81, 0x1d, 0x1f, 0xdf, 0xa1, 0x15, 0x7e,
    0xb8, 0x46, 0xe2, 0x9c, 0x23, 0x13, 0x0d, 0x1f,
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
  test_msgs__action__NestedMessage_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  test_msgs__action__NestedMessage_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/NestedMessage in the package test_msgs.
typedef struct test_msgs__action__NestedMessage_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  test_msgs__action__NestedMessage_GetResult_Request__Sequence request;
  test_msgs__action__NestedMessage_GetResult_Response__Sequence response;
} test_msgs__action__NestedMessage_GetResult_Event;

// Struct for a sequence of test_msgs__action__NestedMessage_GetResult_Event.
typedef struct test_msgs__action__NestedMessage_GetResult_Event__Sequence
{
  test_msgs__action__NestedMessage_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_GetResult_Event__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__action__NestedMessage_FeedbackMessage__TYPE_HASH = {1, {
    0x72, 0xee, 0x58, 0x28, 0xe8, 0x08, 0x3f, 0x3c,
    0x42, 0xa5, 0x6b, 0xc5, 0xd9, 0x9f, 0xd9, 0xe7,
    0xd5, 0xc8, 0x63, 0x89, 0x85, 0x0f, 0xc0, 0x06,
    0xf2, 0x54, 0xec, 0xdc, 0xae, 0xcb, 0x7d, 0x03,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "test_msgs/action/detail/nested_message__struct.h"

/// Struct defined in action/NestedMessage in the package test_msgs.
typedef struct test_msgs__action__NestedMessage_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  test_msgs__action__NestedMessage_Feedback feedback;
} test_msgs__action__NestedMessage_FeedbackMessage;

// Struct for a sequence of test_msgs__action__NestedMessage_FeedbackMessage.
typedef struct test_msgs__action__NestedMessage_FeedbackMessage__Sequence
{
  test_msgs__action__NestedMessage_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__action__NestedMessage_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__ACTION__DETAIL__NESTED_MESSAGE__STRUCT_H_
