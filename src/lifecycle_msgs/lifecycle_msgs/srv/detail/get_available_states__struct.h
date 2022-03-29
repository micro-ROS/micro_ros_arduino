// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lifecycle_msgs:srv/GetAvailableStates.idl
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__DETAIL__GET_AVAILABLE_STATES__STRUCT_H_
#define LIFECYCLE_MSGS__SRV__DETAIL__GET_AVAILABLE_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetAvailableStates in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__GetAvailableStates_Request
{
  uint8_t structure_needs_at_least_one_member;
} lifecycle_msgs__srv__GetAvailableStates_Request;

// Struct for a sequence of lifecycle_msgs__srv__GetAvailableStates_Request.
typedef struct lifecycle_msgs__srv__GetAvailableStates_Request__Sequence
{
  lifecycle_msgs__srv__GetAvailableStates_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetAvailableStates_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'available_states'
#include "lifecycle_msgs/msg/detail/state__struct.h"

/// Struct defined in srv/GetAvailableStates in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__GetAvailableStates_Response
{
  lifecycle_msgs__msg__State__Sequence available_states;
} lifecycle_msgs__srv__GetAvailableStates_Response;

// Struct for a sequence of lifecycle_msgs__srv__GetAvailableStates_Response.
typedef struct lifecycle_msgs__srv__GetAvailableStates_Response__Sequence
{
  lifecycle_msgs__srv__GetAvailableStates_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetAvailableStates_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__DETAIL__GET_AVAILABLE_STATES__STRUCT_H_
