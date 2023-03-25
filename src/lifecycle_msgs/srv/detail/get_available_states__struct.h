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

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableStates__TYPE_HASH = {1, {
    0x00, 0xa0, 0x7d, 0x79, 0xd2, 0x20, 0x7d, 0x71,
    0xe8, 0x1a, 0x8c, 0xbc, 0x18, 0x80, 0xe5, 0xd9,
    0x24, 0xcc, 0x16, 0xd4, 0x68, 0x8e, 0xa8, 0xe8,
    0xe0, 0x6e, 0x44, 0x3d, 0xc8, 0xf8, 0xaa, 0x1d,
  }};


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableStates_Request__TYPE_HASH = {1, {
    0xc2, 0xc0, 0xc1, 0x2d, 0xe6, 0x02, 0x38, 0x22,
    0xf2, 0x84, 0x92, 0x95, 0x77, 0xd4, 0xca, 0x28,
    0x62, 0xe0, 0x50, 0x11, 0x50, 0x01, 0x09, 0x66,
    0xe8, 0xa9, 0x0b, 0x63, 0x2e, 0x44, 0x24, 0xde,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableStates_Response__TYPE_HASH = {1, {
    0x22, 0x3e, 0x0d, 0xd5, 0xbb, 0x8a, 0x84, 0x7e,
    0xbb, 0x95, 0x32, 0xad, 0xaf, 0x8b, 0x5e, 0x2a,
    0x97, 0xe6, 0xe6, 0x8e, 0x79, 0xfa, 0xea, 0xab,
    0xd8, 0x1a, 0x45, 0xfb, 0x32, 0x92, 0x5b, 0xd1,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableStates_Event__TYPE_HASH = {1, {
    0x42, 0x11, 0xb7, 0x7a, 0xce, 0x9f, 0x70, 0x61,
    0xa6, 0x10, 0x9f, 0x18, 0x4c, 0xaf, 0xc1, 0xbf,
    0x0d, 0x5e, 0x9a, 0xf0, 0xae, 0x69, 0x07, 0x15,
    0xb9, 0x2e, 0x23, 0xc6, 0xce, 0xd4, 0xc4, 0x5f,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  lifecycle_msgs__srv__GetAvailableStates_Event__request__MAX_SIZE = 1
};
// response
enum
{
  lifecycle_msgs__srv__GetAvailableStates_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetAvailableStates in the package lifecycle_msgs.
typedef struct lifecycle_msgs__srv__GetAvailableStates_Event
{
  service_msgs__msg__ServiceEventInfo info;
  lifecycle_msgs__srv__GetAvailableStates_Request__Sequence request;
  lifecycle_msgs__srv__GetAvailableStates_Response__Sequence response;
} lifecycle_msgs__srv__GetAvailableStates_Event;

// Struct for a sequence of lifecycle_msgs__srv__GetAvailableStates_Event.
typedef struct lifecycle_msgs__srv__GetAvailableStates_Event__Sequence
{
  lifecycle_msgs__srv__GetAvailableStates_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lifecycle_msgs__srv__GetAvailableStates_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIFECYCLE_MSGS__SRV__DETAIL__GET_AVAILABLE_STATES__STRUCT_H_
