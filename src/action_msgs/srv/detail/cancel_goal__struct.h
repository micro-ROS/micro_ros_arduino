// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_msgs:srv/CancelGoal.idl
// generated code does not contain a copyright notice

#ifndef ACTION_MSGS__SRV__DETAIL__CANCEL_GOAL__STRUCT_H_
#define ACTION_MSGS__SRV__DETAIL__CANCEL_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define action_msgs__srv__CancelGoal__TYPE_VERSION_HASH__INIT {1, { \
      0x6a, 0x5f, 0x06, 0x2d, 0x4e, 0x44, 0x5b, 0xb8, \
      0xf6, 0xdf, 0xeb, 0x28, 0xd8, 0xba, 0x83, 0x84, \
      0x5e, 0xfc, 0x58, 0x23, 0x87, 0x41, 0x89, 0x6b, \
      0x43, 0xc9, 0xdc, 0x8e, 0x1c, 0xff, 0xb7, 0x75, \
    }}
static const rosidl_type_hash_t action_msgs__srv__CancelGoal__TYPE_VERSION_HASH = action_msgs__srv__CancelGoal__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define action_msgs__srv__CancelGoal_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xe8, 0xa8, 0x3f, 0x64, 0x1c, 0x1a, 0x6c, 0x28, \
      0x3d, 0x2d, 0x7f, 0xe1, 0x4e, 0x6b, 0x7c, 0xc7, \
      0xe0, 0x0a, 0x20, 0xa3, 0x22, 0x85, 0x87, 0x5e, \
      0xfc, 0x13, 0x0b, 0x61, 0x23, 0xfa, 0xb7, 0x79, \
    }}
static const rosidl_type_hash_t action_msgs__srv__CancelGoal_Request__TYPE_VERSION_HASH = action_msgs__srv__CancelGoal_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'goal_info'
#include "action_msgs/msg/detail/goal_info__struct.h"

/// Struct defined in srv/CancelGoal in the package action_msgs.
typedef struct action_msgs__srv__CancelGoal_Request
{
  /// Goal info describing the goals to cancel, see above.
  action_msgs__msg__GoalInfo goal_info;
} action_msgs__srv__CancelGoal_Request;

// Struct for a sequence of action_msgs__srv__CancelGoal_Request.
typedef struct action_msgs__srv__CancelGoal_Request__Sequence
{
  action_msgs__srv__CancelGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_msgs__srv__CancelGoal_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define action_msgs__srv__CancelGoal_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xb1, 0xe5, 0x77, 0x78, 0x6c, 0x84, 0xff, 0xff, \
      0x1e, 0xd2, 0xd2, 0x8e, 0xb7, 0xfc, 0xd6, 0x43, \
      0x8e, 0x50, 0x7d, 0xc1, 0xf9, 0x2c, 0xbc, 0x68, \
      0xda, 0x1f, 0xfc, 0xbb, 0xbe, 0x04, 0x9d, 0xe4, \
    }}
static const rosidl_type_hash_t action_msgs__srv__CancelGoal_Response__TYPE_VERSION_HASH = action_msgs__srv__CancelGoal_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Constant 'ERROR_NONE'.
/**
  * Indicates the request was accepted without any errors.
  *
  * One or more goals have transitioned to the CANCELING state. The
  * goals_canceling list is not empty.
 */
enum
{
  action_msgs__srv__CancelGoal_Response__ERROR_NONE = 0
};

/// Constant 'ERROR_REJECTED'.
/**
  * Indicates the request was rejected.
  *
  * No goals have transitioned to the CANCELING state. The goals_canceling list is
  * empty.
 */
enum
{
  action_msgs__srv__CancelGoal_Response__ERROR_REJECTED = 1
};

/// Constant 'ERROR_UNKNOWN_GOAL_ID'.
/**
  * Indicates the requested goal ID does not exist.
  *
  * No goals have transitioned to the CANCELING state. The goals_canceling list is
  * empty.
 */
enum
{
  action_msgs__srv__CancelGoal_Response__ERROR_UNKNOWN_GOAL_ID = 2
};

/// Constant 'ERROR_GOAL_TERMINATED'.
/**
  * Indicates the goal is not cancelable because it is already in a terminal state.
  *
  * No goals have transitioned to the CANCELING state. The goals_canceling list is
  * empty.
 */
enum
{
  action_msgs__srv__CancelGoal_Response__ERROR_GOAL_TERMINATED = 3
};

// Include directives for member types
// Member 'goals_canceling'
// already included above
// #include "action_msgs/msg/detail/goal_info__struct.h"

/// Struct defined in srv/CancelGoal in the package action_msgs.
typedef struct action_msgs__srv__CancelGoal_Response
{
  /// Return code, see above definitions.
  int8_t return_code;
  /// Goals that accepted the cancel request.
  action_msgs__msg__GoalInfo__Sequence goals_canceling;
} action_msgs__srv__CancelGoal_Response;

// Struct for a sequence of action_msgs__srv__CancelGoal_Response.
typedef struct action_msgs__srv__CancelGoal_Response__Sequence
{
  action_msgs__srv__CancelGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_msgs__srv__CancelGoal_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define action_msgs__srv__CancelGoal_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x48, 0x4a, 0x6b, 0x0a, 0x12, 0x6b, 0x9c, 0x8c, \
      0x4f, 0x22, 0x8a, 0xab, 0x2b, 0x8c, 0x32, 0x8a, \
      0xf4, 0x50, 0xb9, 0x79, 0xb5, 0x8d, 0xcb, 0x76, \
      0xbd, 0x2b, 0x98, 0x1d, 0x32, 0xcd, 0xe2, 0xd6, \
    }}
static const rosidl_type_hash_t action_msgs__srv__CancelGoal_Event__TYPE_VERSION_HASH = action_msgs__srv__CancelGoal_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  action_msgs__srv__CancelGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  action_msgs__srv__CancelGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CancelGoal in the package action_msgs.
typedef struct action_msgs__srv__CancelGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  action_msgs__srv__CancelGoal_Request__Sequence request;
  action_msgs__srv__CancelGoal_Response__Sequence response;
} action_msgs__srv__CancelGoal_Event;

// Struct for a sequence of action_msgs__srv__CancelGoal_Event.
typedef struct action_msgs__srv__CancelGoal_Event__Sequence
{
  action_msgs__srv__CancelGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_msgs__srv__CancelGoal_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__SRV__DETAIL__CANCEL_GOAL__STRUCT_H_
