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

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t lifecycle_msgs__srv__ChangeState__TYPE_HASH = {1, {
    0x35, 0x6f, 0xe3, 0x4f, 0x04, 0x75, 0xa4, 0x3a,
    0xcf, 0x54, 0x54, 0x20, 0x13, 0xaf, 0x41, 0x67,
    0xb0, 0xe7, 0x29, 0xf7, 0x7e, 0xa2, 0x2f, 0xfb,
    0x04, 0x5c, 0x6a, 0xd8, 0xe2, 0x06, 0x68, 0xe5,
  }};


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__ChangeState_Request__TYPE_HASH = {1, {
    0xd7, 0x4c, 0x6f, 0x52, 0x4e, 0x14, 0xca, 0xde,
    0x7b, 0x67, 0xe7, 0x29, 0x71, 0x90, 0x36, 0x0e,
    0xd7, 0x49, 0x26, 0x4a, 0xf3, 0x00, 0x52, 0x4f,
    0xc1, 0x45, 0x6f, 0x27, 0xcc, 0x2a, 0x55, 0x3a,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__ChangeState_Response__TYPE_HASH = {1, {
    0xe1, 0xdd, 0xfe, 0xd0, 0x27, 0x1f, 0xef, 0xe6,
    0x37, 0x67, 0xaa, 0x71, 0x56, 0x19, 0x26, 0xe4,
    0xd9, 0xea, 0xc0, 0xf1, 0xdd, 0xf9, 0xe7, 0x1a,
    0x88, 0x73, 0xeb, 0x46, 0xb3, 0x6d, 0xea, 0xc2,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__ChangeState_Event__TYPE_HASH = {1, {
    0xbf, 0x7f, 0x35, 0x5a, 0xca, 0x87, 0x62, 0xa7,
    0xa5, 0x1d, 0xf0, 0x2e, 0xaf, 0x4a, 0x51, 0x02,
    0x42, 0x55, 0xd1, 0x5b, 0x31, 0xb1, 0xb6, 0x8b,
    0xf0, 0xa0, 0x99, 0x67, 0x3c, 0x27, 0x09, 0xbc,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  lifecycle_msgs__srv__ChangeState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  lifecycle_msgs__srv__ChangeState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ChangeState in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__ChangeState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  lifecycle_msgs__srv__ChangeState_Request__Sequence request;
  lifecycle_msgs__srv__ChangeState_Response__Sequence response;
} lifecycle_msgs__srv__ChangeState_Event;

// Struct for a sequence of lifecycle_msgs__srv__ChangeState_Event.
typedef struct lifecycle_msgs__srv__ChangeState_Event__Sequence
{
  lifecycle_msgs__srv__ChangeState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__ChangeState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__DETAIL__CHANGE_STATE__STRUCT_H_
