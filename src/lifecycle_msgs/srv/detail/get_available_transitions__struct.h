// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lifecycle_msgs:srv/GetAvailableTransitions.idl
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__DETAIL__GET_AVAILABLE_TRANSITIONS__STRUCT_H_
#define LIFECYCLE_MSGS__SRV__DETAIL__GET_AVAILABLE_TRANSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableTransitions__TYPE_HASH = {1, {
    0x59, 0xb7, 0xec, 0xef, 0xce, 0x09, 0x82, 0xa8,
    0xa8, 0x44, 0xb9, 0xf2, 0xc4, 0xf1, 0x47, 0x64,
    0xc1, 0xc4, 0x54, 0x3c, 0xc5, 0x5e, 0x72, 0x92,
    0x4e, 0x2a, 0xa4, 0xad, 0xad, 0x83, 0xe9, 0xbc,
  }};


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableTransitions_Request__TYPE_HASH = {1, {
    0x52, 0xa7, 0x3c, 0x0b, 0x5d, 0x74, 0x89, 0xbe,
    0xe0, 0xdf, 0x6d, 0xdb, 0x0a, 0xec, 0x45, 0xc4,
    0x12, 0x89, 0xd2, 0x23, 0xff, 0x22, 0x5b, 0x58,
    0xfe, 0x11, 0xd8, 0x59, 0xac, 0x81, 0x09, 0xa6,
  }};

// Constants defined in the message

/// Struct defined in srv/GetAvailableTransitions in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__GetAvailableTransitions_Request
{
  uint8_t structure_needs_at_least_one_member;
} lifecycle_msgs__srv__GetAvailableTransitions_Request;

// Struct for a sequence of lifecycle_msgs__srv__GetAvailableTransitions_Request.
typedef struct lifecycle_msgs__srv__GetAvailableTransitions_Request__Sequence
{
  lifecycle_msgs__srv__GetAvailableTransitions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetAvailableTransitions_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableTransitions_Response__TYPE_HASH = {1, {
    0x47, 0x11, 0x33, 0x94, 0x61, 0xaa, 0xdf, 0x02,
    0xbc, 0xff, 0xf7, 0x97, 0xa1, 0x98, 0xde, 0x91,
    0x1f, 0x88, 0x50, 0x74, 0xbd, 0x3f, 0x2f, 0xe9,
    0xf7, 0xb6, 0x77, 0xef, 0x87, 0xf0, 0x74, 0x1c,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'available_transitions'
#include "lifecycle_msgs/msg/detail/transition_description__struct.h"

/// Struct defined in srv/GetAvailableTransitions in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__GetAvailableTransitions_Response
{
  lifecycle_msgs__msg__TransitionDescription__Sequence available_transitions;
} lifecycle_msgs__srv__GetAvailableTransitions_Response;

// Struct for a sequence of lifecycle_msgs__srv__GetAvailableTransitions_Response.
typedef struct lifecycle_msgs__srv__GetAvailableTransitions_Response__Sequence
{
  lifecycle_msgs__srv__GetAvailableTransitions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetAvailableTransitions_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableTransitions_Event__TYPE_HASH = {1, {
    0x18, 0x8e, 0x7d, 0xe0, 0x07, 0x99, 0x3d, 0xa8,
    0x73, 0xcc, 0x24, 0x7d, 0x52, 0x90, 0x61, 0x51,
    0xb3, 0x83, 0x46, 0xfd, 0xb7, 0x2a, 0x4c, 0xc5,
    0xf7, 0x8c, 0x40, 0x7c, 0x3b, 0x5b, 0x37, 0x0f,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  lifecycle_msgs__srv__GetAvailableTransitions_Event__request__MAX_SIZE = 1
};
// response
enum
{
  lifecycle_msgs__srv__GetAvailableTransitions_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetAvailableTransitions in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__GetAvailableTransitions_Event
{
  service_msgs__msg__ServiceEventInfo info;
  lifecycle_msgs__srv__GetAvailableTransitions_Request__Sequence request;
  lifecycle_msgs__srv__GetAvailableTransitions_Response__Sequence response;
} lifecycle_msgs__srv__GetAvailableTransitions_Event;

// Struct for a sequence of lifecycle_msgs__srv__GetAvailableTransitions_Event.
typedef struct lifecycle_msgs__srv__GetAvailableTransitions_Event__Sequence
{
  lifecycle_msgs__srv__GetAvailableTransitions_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetAvailableTransitions_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__DETAIL__GET_AVAILABLE_TRANSITIONS__STRUCT_H_
