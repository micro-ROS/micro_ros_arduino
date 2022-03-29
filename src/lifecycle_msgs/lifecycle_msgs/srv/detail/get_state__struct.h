// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lifecycle_msgs:srv/GetState.idl
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__DETAIL__GET_STATE__STRUCT_H_
#define LIFECYCLE_MSGS__SRV__DETAIL__GET_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetState in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__GetState_Request
{
  uint8_t structure_needs_at_least_one_member;
} lifecycle_msgs__srv__GetState_Request;

// Struct for a sequence of lifecycle_msgs__srv__GetState_Request.
typedef struct lifecycle_msgs__srv__GetState_Request__Sequence
{
  lifecycle_msgs__srv__GetState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_state'
#include "lifecycle_msgs/msg/detail/state__struct.h"

/// Struct defined in srv/GetState in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__GetState_Response
{
  lifecycle_msgs__msg__State current_state;
} lifecycle_msgs__srv__GetState_Response;

// Struct for a sequence of lifecycle_msgs__srv__GetState_Response.
typedef struct lifecycle_msgs__srv__GetState_Response__Sequence
{
  lifecycle_msgs__srv__GetState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__DETAIL__GET_STATE__STRUCT_H_
