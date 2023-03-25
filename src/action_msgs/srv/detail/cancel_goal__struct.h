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


static const rosidl_type_hash_t action_msgs__srv__CancelGoal__TYPE_HASH = {1, {
    0x57, 0x3d, 0x8b, 0x0a, 0x53, 0x44, 0x51, 0xd7,
    0xbc, 0x2a, 0xc8, 0xc5, 0xff, 0xde, 0x8a, 0xc1,
    0x4b, 0x85, 0x93, 0xb7, 0x00, 0x11, 0x75, 0xd0,
    0xcd, 0x65, 0x16, 0xdc, 0xbe, 0xb8, 0x68, 0x9a,
  }};


// Type Hash for interface
static const rosidl_type_hash_t action_msgs__srv__CancelGoal_Request__TYPE_HASH = {1, {
    0x3d, 0x3c, 0x84, 0x65, 0x3c, 0x1f, 0x96, 0x91,
    0x80, 0x86, 0x88, 0x7e, 0x1d, 0xcb, 0x23, 0x6f,
    0xae, 0xc8, 0x8b, 0x81, 0xa5, 0xb1, 0x4f, 0xd4,
    0xcf, 0x48, 0x40, 0x06, 0x5b, 0xcd, 0xf8, 0xaf,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t action_msgs__srv__CancelGoal_Response__TYPE_HASH = {1, {
    0x35, 0xe6, 0x82, 0xcf, 0x3f, 0x51, 0x0e, 0x83,
    0xc7, 0x0a, 0x82, 0xa4, 0xaa, 0xc8, 0x88, 0x49,
    0x6d, 0xed, 0xee, 0x56, 0x77, 0x3b, 0xf9, 0xd8,
    0xe5, 0xe0, 0xaa, 0x81, 0xf9, 0xe1, 0xc9, 0x60,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t action_msgs__srv__CancelGoal_Event__TYPE_HASH = {1, {
    0x17, 0x8f, 0x81, 0x61, 0x5c, 0xe6, 0xbe, 0x41,
    0xad, 0x32, 0x82, 0x11, 0xd7, 0xa5, 0x6b, 0x08,
    0xb0, 0x0e, 0x73, 0xf4, 0x1f, 0x0b, 0x8a, 0xec,
    0x25, 0x6b, 0x2f, 0x3f, 0xf9, 0x7a, 0x5e, 0x7e,
  }};

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
