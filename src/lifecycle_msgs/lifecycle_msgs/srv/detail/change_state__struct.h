// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lifecycle_msgs:srv/ChangeState.idl
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__DETAIL__CHANGE_STATE__STRUCT_H_
#define LIFECYCLE_MSGS__SRV__DETAIL__CHANGE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transition'
#include "lifecycle_msgs/msg/detail/transition__struct.h"

/// Struct defined in srv/ChangeState in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__ChangeState_Request
{
  lifecycle_msgs__msg__Transition transition;
} lifecycle_msgs__srv__ChangeState_Request;

// Struct for a sequence of lifecycle_msgs__srv__ChangeState_Request.
typedef struct lifecycle_msgs__srv__ChangeState_Request__Sequence
{
  lifecycle_msgs__srv__ChangeState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__ChangeState_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ChangeState in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__ChangeState_Response
{
  /// Indicates whether the service was able to initiate the state transition
  bool success;
} lifecycle_msgs__srv__ChangeState_Response;

// Struct for a sequence of lifecycle_msgs__srv__ChangeState_Response.
typedef struct lifecycle_msgs__srv__ChangeState_Response__Sequence
{
  lifecycle_msgs__srv__ChangeState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__ChangeState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__DETAIL__CHANGE_STATE__STRUCT_H_
