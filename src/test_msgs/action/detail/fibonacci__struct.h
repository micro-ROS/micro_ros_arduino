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


#define test_msgs__action__Fibonacci__TYPE_VERSION_HASH__INIT {1, { \
      0xf1, 0xb4, 0xb7, 0xa1, 0xf3, 0x11, 0x2b, 0x9c, \
      0x1e, 0x3b, 0x46, 0x76, 0xc6, 0x3b, 0x70, 0xfd, \
      0x8d, 0xd3, 0xed, 0x02, 0x4f, 0x28, 0x18, 0x11, \
      0x6e, 0x87, 0x6a, 0x92, 0x95, 0x8f, 0x6a, 0xa6, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci__TYPE_VERSION_HASH = test_msgs__action__Fibonacci__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_Goal__TYPE_VERSION_HASH__INIT {1, { \
      0x33, 0xe8, 0x0e, 0x3e, 0xa0, 0x52, 0x15, 0x99, \
      0xcc, 0x96, 0xf3, 0xb9, 0x7b, 0xda, 0x52, 0xa1, \
      0x1d, 0x27, 0x2f, 0x7e, 0xe2, 0x50, 0x8f, 0xb0, \
      0x61, 0x29, 0x1b, 0x4a, 0x8a, 0xa8, 0xb2, 0x1a, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_Goal__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_Goal__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_Result__TYPE_VERSION_HASH__INIT {1, { \
      0xf4, 0xb6, 0x92, 0xd5, 0x01, 0xca, 0xfa, 0x1a, \
      0x4a, 0xba, 0xee, 0x82, 0x6b, 0xf5, 0x71, 0x0c, \
      0x09, 0xf4, 0x95, 0xa9, 0x12, 0x33, 0xbc, 0xa5, \
      0x9e, 0xaf, 0x87, 0x16, 0x6f, 0x48, 0xfe, 0x08, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_Result__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_Result__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_Feedback__TYPE_VERSION_HASH__INIT {1, { \
      0x50, 0x95, 0x67, 0x1b, 0xc2, 0x87, 0x37, 0x1b, \
      0xea, 0xbd, 0x62, 0xc2, 0xa5, 0x0f, 0x98, 0xfc, \
      0xd8, 0x86, 0xc5, 0x4e, 0x25, 0x17, 0xe8, 0xfe, \
      0xb8, 0xc5, 0xd4, 0x5a, 0x00, 0x04, 0xef, 0xb1, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_Feedback__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_Feedback__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_SendGoal__TYPE_VERSION_HASH__INIT {1, { \
      0xbd, 0x55, 0x96, 0xe1, 0xd6, 0x54, 0x88, 0xa5, \
      0xbb, 0xf8, 0x33, 0xce, 0xce, 0xb2, 0x1b, 0x08, \
      0x67, 0x63, 0x12, 0x86, 0xbe, 0x67, 0x1d, 0xca, \
      0xfe, 0x95, 0x57, 0x6a, 0x96, 0xc9, 0xe4, 0x53, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_SendGoal__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_SendGoal__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_SendGoal_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x3f, 0x5c, 0x86, 0x18, 0xa9, 0xe8, 0x5b, 0xaf, \
      0x05, 0xe0, 0x36, 0x5a, 0xca, 0x50, 0x6d, 0x6a, \
      0x40, 0x50, 0x00, 0xa6, 0xc3, 0xd9, 0x55, 0x4a, \
      0xca, 0x9c, 0xde, 0xca, 0xd2, 0x62, 0xa5, 0x48, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_SendGoal_Request__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_SendGoal_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_SendGoal_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xe2, 0x51, 0xe3, 0xeb, 0x8c, 0x6c, 0x70, 0x23, \
      0xf7, 0xba, 0x9c, 0x47, 0xea, 0x39, 0x0c, 0x25, \
      0x03, 0x5a, 0x3a, 0xad, 0x0a, 0x20, 0xca, 0xa8, \
      0xc8, 0xa7, 0xee, 0xb4, 0x21, 0x94, 0xcb, 0xea, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_SendGoal_Response__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_SendGoal_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_SendGoal_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x5d, 0x31, 0x9a, 0x4c, 0x46, 0x75, 0x78, 0xb8, \
      0xcc, 0x01, 0xfd, 0x73, 0x5a, 0xc7, 0xdc, 0x8c, \
      0xb4, 0x77, 0xc0, 0x9b, 0xac, 0xf7, 0x61, 0x5c, \
      0x3a, 0xf4, 0x80, 0x0d, 0x1c, 0x71, 0x8f, 0xb5, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_SendGoal_Event__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_SendGoal_Event__TYPE_VERSION_HASH__INIT;

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

// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_GetResult__TYPE_VERSION_HASH__INIT {1, { \
      0x0f, 0x92, 0x29, 0x6f, 0x33, 0xcb, 0x6f, 0xcf, \
      0xbf, 0x65, 0xa3, 0xd4, 0xf1, 0x6e, 0xa4, 0xf0, \
      0xf4, 0xd6, 0xa3, 0x7b, 0xc6, 0xc8, 0x99, 0xcb, \
      0xb5, 0x7d, 0x8c, 0x78, 0x9e, 0xae, 0xa9, 0x7f, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_GetResult__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_GetResult__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_GetResult_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x68, 0x19, 0xd7, 0xb8, 0x0b, 0xd1, 0x86, 0x08, \
      0x7d, 0x28, 0x49, 0xbd, 0x41, 0x7e, 0x26, 0x73, \
      0xf9, 0x84, 0x23, 0xd9, 0x2d, 0xa4, 0x70, 0xf9, \
      0x10, 0xff, 0x02, 0x91, 0xa3, 0xde, 0x63, 0xc1, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_GetResult_Request__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_GetResult_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_GetResult_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x94, 0x3c, 0xa8, 0xb9, 0x16, 0x11, 0x66, 0x05, \
      0xfe, 0xb2, 0xd4, 0x2b, 0x8d, 0x16, 0x1a, 0xb8, \
      0xdc, 0x53, 0x0c, 0x48, 0x99, 0xbe, 0x6c, 0x97, \
      0xd1, 0xc7, 0x46, 0x51, 0x2a, 0xcb, 0xed, 0xb9, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_GetResult_Response__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_GetResult_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_GetResult_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x48, 0xec, 0x6e, 0xf8, 0xb6, 0x80, 0x50, 0x3e, \
      0x35, 0xcf, 0xd9, 0x9d, 0x06, 0x38, 0xbd, 0x74, \
      0x6c, 0x63, 0x91, 0x0d, 0x93, 0x96, 0x8f, 0xc1, \
      0xa5, 0x3c, 0x20, 0x40, 0x3a, 0x5f, 0x85, 0xbf, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_GetResult_Event__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_GetResult_Event__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__action__Fibonacci_FeedbackMessage__TYPE_VERSION_HASH__INIT {1, { \
      0xfd, 0x73, 0xa0, 0x6e, 0x55, 0xb6, 0x29, 0x1e, \
      0xd8, 0x81, 0x3d, 0xa6, 0x2f, 0x24, 0xc5, 0xcf, \
      0x97, 0x03, 0x1e, 0x59, 0x52, 0x9d, 0xa8, 0x2d, \
      0x4f, 0x70, 0xca, 0xcd, 0xbd, 0x4c, 0x3a, 0xb1, \
    }}
static const rosidl_type_hash_t test_msgs__action__Fibonacci_FeedbackMessage__TYPE_VERSION_HASH = test_msgs__action__Fibonacci_FeedbackMessage__TYPE_VERSION_HASH__INIT;

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
