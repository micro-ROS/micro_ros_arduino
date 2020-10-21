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


// Constants defined in the message

// Include directives for member types
// Member 'goal_info'
#include "action_msgs/msg/detail/goal_info__struct.h"

// Struct defined in srv/CancelGoal in the package action_msgs.
typedef struct action_msgs__srv__CancelGoal_Request
{
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


// Constants defined in the message

/// Constant 'ERROR_NONE'.
enum
{
  action_msgs__srv__CancelGoal_Response__ERROR_NONE = 0
};

/// Constant 'ERROR_REJECTED'.
enum
{
  action_msgs__srv__CancelGoal_Response__ERROR_REJECTED = 1
};

/// Constant 'ERROR_UNKNOWN_GOAL_ID'.
enum
{
  action_msgs__srv__CancelGoal_Response__ERROR_UNKNOWN_GOAL_ID = 2
};

/// Constant 'ERROR_GOAL_TERMINATED'.
enum
{
  action_msgs__srv__CancelGoal_Response__ERROR_GOAL_TERMINATED = 3
};

// Include directives for member types
// Member 'goals_canceling'
// already included above
// #include "action_msgs/msg/detail/goal_info__struct.h"

// Struct defined in srv/CancelGoal in the package action_msgs.
typedef struct action_msgs__srv__CancelGoal_Response
{
  int8_t return_code;
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

#ifdef __cplusplus
}
#endif

#endif  // ACTION_MSGS__SRV__DETAIL__CANCEL_GOAL__STRUCT_H_
