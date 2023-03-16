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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetAvailableStates__TYPE_VERSION_HASH__INIT {1, { \
      0xb5, 0x54, 0x99, 0x8e, 0x0d, 0x6c, 0x27, 0x54, \
      0x1d, 0x14, 0x5a, 0xa3, 0x84, 0x4b, 0x0c, 0x8f, \
      0xc5, 0xc7, 0x36, 0xbb, 0x8c, 0x9b, 0x24, 0xb6, \
      0x6f, 0xce, 0x44, 0x41, 0x8e, 0xcc, 0x12, 0x49, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableStates__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetAvailableStates__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetAvailableStates_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x0e, 0x4c, 0x65, 0x7d, 0x6e, 0xb9, 0xad, 0x90, \
      0x0b, 0x57, 0xa9, 0x2b, 0xb9, 0x79, 0x89, 0x2c, \
      0x4c, 0x1f, 0xf0, 0x14, 0xac, 0x17, 0xf9, 0x4a, \
      0x0e, 0x14, 0x01, 0xc9, 0xfb, 0x25, 0x5f, 0xa0, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableStates_Request__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetAvailableStates_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetAvailableStates_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x76, 0x72, 0xcc, 0x50, 0x99, 0x48, 0x22, 0x63, \
      0xa5, 0x37, 0x58, 0xab, 0x1e, 0xb6, 0xef, 0x73, \
      0xf1, 0x05, 0xcb, 0xd0, 0x58, 0xe8, 0x6b, 0x12, \
      0x58, 0x9c, 0x9b, 0x3c, 0x4c, 0x45, 0x26, 0x46, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableStates_Response__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetAvailableStates_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetAvailableStates_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xa1, 0xa8, 0x02, 0xb5, 0x32, 0x60, 0x27, 0x69, \
      0x59, 0x1c, 0x77, 0x23, 0x3a, 0x7c, 0xac, 0x09, \
      0x93, 0x7e, 0xfb, 0x59, 0x31, 0xf3, 0x22, 0x79, \
      0xb8, 0xc7, 0xb1, 0xc6, 0xb7, 0x3e, 0xeb, 0x21, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableStates_Event__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetAvailableStates_Event__TYPE_VERSION_HASH__INIT;

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
