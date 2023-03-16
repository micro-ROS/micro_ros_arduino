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


#define test_msgs__action__NestedMessage__TYPE_VERSION_HASH__INIT {1, { \
      0x5a, 0x7c, 0x44, 0x5d, 0xa9, 0x4e, 0xe6, 0x16, \
      0x6d, 0xee, 0xfe, 0xa7, 0xdf, 0x30, 0x9c, 0xf3, \
      0xd3, 0xd0, 0x8b, 0xde, 0x57, 0x2c, 0xa7, 0xc6, \
      0xdd, 0x4d, 0x25, 0x72, 0x8f, 0x13, 0x49, 0x4f, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage__TYPE_VERSION_HASH = test_msgs__action__NestedMessage__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_Goal__TYPE_VERSION_HASH__INIT {1, { \
      0x0e, 0x31, 0xa1, 0x2a, 0x7a, 0x28, 0xc4, 0xa1, \
      0x4e, 0x7c, 0x04, 0x7b, 0x1f, 0x7a, 0xc1, 0x90, \
      0x81, 0x5c, 0xd9, 0x4d, 0x6d, 0xa0, 0xbd, 0xa1, \
      0xd5, 0xc3, 0xa0, 0xb6, 0xc6, 0x14, 0x02, 0x9a, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_Goal__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_Goal__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_Result__TYPE_VERSION_HASH__INIT {1, { \
      0x54, 0x95, 0x19, 0x38, 0x70, 0x45, 0xc8, 0x04, \
      0xd4, 0xb8, 0x69, 0x33, 0x74, 0xc5, 0xf9, 0xdf, \
      0x6b, 0x83, 0xcd, 0xb2, 0x3e, 0x23, 0x14, 0x9d, \
      0x9a, 0x62, 0x03, 0x16, 0xdd, 0xd7, 0xb6, 0x7b, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_Result__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_Result__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_Feedback__TYPE_VERSION_HASH__INIT {1, { \
      0xa4, 0x83, 0x82, 0x2f, 0xed, 0xea, 0x1f, 0xcd, \
      0xc7, 0x2e, 0x49, 0xe5, 0x08, 0x1b, 0x7d, 0x45, \
      0x05, 0x55, 0x47, 0x4b, 0x2b, 0x2f, 0xb2, 0xd8, \
      0x6c, 0xfd, 0xd9, 0x90, 0x0f, 0xa9, 0x47, 0x7c, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_Feedback__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_Feedback__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_SendGoal__TYPE_VERSION_HASH__INIT {1, { \
      0xce, 0x7f, 0x86, 0x69, 0x44, 0xd7, 0x8e, 0xa2, \
      0xbe, 0x5e, 0x4e, 0xa0, 0x09, 0x72, 0x6b, 0x4a, \
      0xb5, 0x2c, 0x95, 0x4d, 0x49, 0x2e, 0x4b, 0xfe, \
      0xee, 0x75, 0xe8, 0x56, 0x68, 0x4e, 0x27, 0x47, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_SendGoal__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_SendGoal__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_SendGoal_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x33, 0x4d, 0xb6, 0xa3, 0xb8, 0xe3, 0x18, 0x40, \
      0x75, 0x22, 0x19, 0xbd, 0x4e, 0x1a, 0xbf, 0xe6, \
      0x73, 0xb4, 0x51, 0xe9, 0xad, 0x30, 0x5c, 0x61, \
      0x99, 0xb0, 0x28, 0xc5, 0x02, 0xde, 0x83, 0x43, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_SendGoal_Request__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_SendGoal_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_SendGoal_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xf3, 0xde, 0x23, 0x88, 0xbd, 0xaf, 0xc0, 0x01, \
      0xee, 0x83, 0x3d, 0x23, 0xe0, 0x6f, 0x2e, 0xb4, \
      0x89, 0xf5, 0xce, 0xed, 0xc9, 0x02, 0xb5, 0x5a, \
      0x22, 0x3e, 0x00, 0x89, 0x9f, 0xc7, 0x8d, 0xd7, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_SendGoal_Response__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_SendGoal_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_SendGoal_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xbb, 0xf4, 0xb3, 0xeb, 0x91, 0x99, 0x4b, 0xdb, \
      0x3d, 0x37, 0xaf, 0x7f, 0x47, 0xc1, 0xeb, 0x00, \
      0x3a, 0x88, 0x54, 0x64, 0x08, 0x10, 0x31, 0x18, \
      0xf4, 0x18, 0xf9, 0xb2, 0xdb, 0xb1, 0x47, 0xdb, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_SendGoal_Event__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_SendGoal_Event__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_GetResult__TYPE_VERSION_HASH__INIT {1, { \
      0xdc, 0xd1, 0x85, 0x3d, 0xb9, 0x1a, 0x85, 0x81, \
      0xd4, 0x58, 0x89, 0x97, 0x90, 0xaa, 0x0e, 0x0a, \
      0x50, 0x9f, 0x3a, 0x7e, 0x46, 0x3c, 0xc8, 0x80, \
      0x85, 0x43, 0x2c, 0xef, 0xb2, 0xcd, 0x5e, 0x68, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_GetResult__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_GetResult__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_GetResult_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x74, 0xd1, 0x95, 0xa0, 0x59, 0x40, 0x4e, 0x06, \
      0xbb, 0x51, 0x29, 0x5a, 0x59, 0xc4, 0xd8, 0x27, \
      0x4c, 0x13, 0x1b, 0xea, 0x11, 0xe5, 0xa2, 0x78, \
      0x00, 0xa5, 0x55, 0x88, 0xaa, 0x1f, 0x33, 0x0d, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_GetResult_Request__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_GetResult_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_GetResult_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x01, 0xbb, 0xc5, 0x05, 0xfc, 0x2f, 0xfc, 0x68, \
      0xd9, 0x96, 0x92, 0xdb, 0x44, 0xb4, 0xea, 0xc2, \
      0xcd, 0x8b, 0xdc, 0x99, 0x2c, 0x0e, 0x45, 0xcc, \
      0x2a, 0xff, 0x2d, 0x34, 0x0e, 0xab, 0x7c, 0x2c, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_GetResult_Response__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_GetResult_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_GetResult_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x98, 0xf1, 0x5a, 0x0a, 0x3c, 0x6b, 0xcb, 0x81, \
      0x99, 0xef, 0x9b, 0xa9, 0x7b, 0xf1, 0xf8, 0x30, \
      0x20, 0x19, 0x96, 0xe6, 0x7f, 0x85, 0x5e, 0x0d, \
      0x90, 0x34, 0xb7, 0x10, 0xc0, 0xee, 0x9f, 0x72, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_GetResult_Event__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_GetResult_Event__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__NestedMessage_FeedbackMessage__TYPE_VERSION_HASH__INIT {1, { \
      0x63, 0x96, 0xe3, 0xf9, 0x19, 0xdb, 0xb4, 0x07, \
      0x86, 0xaf, 0x9f, 0x09, 0x48, 0x7b, 0xd5, 0x25, \
      0x1c, 0xad, 0x59, 0x39, 0x58, 0x1e, 0xbc, 0x83, \
      0xe5, 0xe9, 0xfb, 0xaa, 0x8a, 0x8e, 0x6a, 0xa2, \
    }}
static const rosidl_type_hash_t test_msgs__action__NestedMessage_FeedbackMessage__TYPE_VERSION_HASH = test_msgs__action__NestedMessage_FeedbackMessage__TYPE_VERSION_HASH__INIT;

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
