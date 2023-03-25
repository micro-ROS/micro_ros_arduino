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

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t lifecycle_msgs__srv__GetState__TYPE_HASH = {1, {
    0x80, 0x0a, 0x0a, 0x5a, 0xae, 0x59, 0x97, 0x82,
    0xb0, 0x29, 0x32, 0xde, 0x0c, 0xaf, 0x56, 0x3f,
    0x6d, 0xc4, 0xe7, 0xe9, 0x4b, 0x79, 0x4e, 0xad,
    0xde, 0x07, 0x5b, 0xa2, 0xcb, 0xef, 0x97, 0x95,
  }};


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__GetState_Request__TYPE_HASH = {1, {
    0x77, 0xa9, 0xc8, 0x44, 0xe7, 0x97, 0x5f, 0x15,
    0xbc, 0x22, 0x21, 0xe8, 0xbb, 0xeb, 0xaf, 0xc4,
    0xd1, 0x18, 0xaf, 0xb7, 0x8c, 0x7f, 0x70, 0x71,
    0xee, 0xf9, 0x1f, 0x83, 0xf9, 0x40, 0xf2, 0xf6,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__GetState_Response__TYPE_HASH = {1, {
    0xfe, 0x24, 0x9b, 0xab, 0xab, 0x47, 0x2e, 0x42,
    0xcb, 0x56, 0x53, 0xb5, 0xd6, 0xa6, 0xb0, 0xc4,
    0x2a, 0x00, 0x3b, 0x0f, 0xdf, 0xb8, 0x48, 0x51,
    0xae, 0xa3, 0xfd, 0xe0, 0x87, 0x60, 0xb4, 0xf5,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__GetState_Event__TYPE_HASH = {1, {
    0x4a, 0xc0, 0x77, 0xd3, 0x36, 0xdb, 0x33, 0x72,
    0x6a, 0x95, 0x70, 0x03, 0x98, 0xb9, 0x5c, 0x34,
    0xf3, 0x26, 0xec, 0xd2, 0x71, 0x62, 0xb3, 0xf8,
    0x5c, 0xd7, 0xf8, 0x5b, 0x4a, 0x55, 0xa7, 0x5a,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  lifecycle_msgs__srv__GetState_Event__request__MAX_SIZE = 1
};
// response
enum
{
  lifecycle_msgs__srv__GetState_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetState in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__GetState_Event
{
  service_msgs__msg__ServiceEventInfo info;
  lifecycle_msgs__srv__GetState_Request__Sequence request;
  lifecycle_msgs__srv__GetState_Response__Sequence response;
} lifecycle_msgs__srv__GetState_Event;

// Struct for a sequence of lifecycle_msgs__srv__GetState_Event.
typedef struct lifecycle_msgs__srv__GetState_Event__Sequence
{
  lifecycle_msgs__srv__GetState_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetState_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__DETAIL__GET_STATE__STRUCT_H_
