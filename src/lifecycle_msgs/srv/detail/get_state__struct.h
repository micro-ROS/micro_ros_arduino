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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetState__TYPE_VERSION_HASH__INIT {1, { \
      0x6b, 0x3f, 0xd1, 0xbf, 0xe4, 0xda, 0xee, 0x91, \
      0x96, 0x72, 0x80, 0x83, 0xa3, 0x86, 0x7f, 0xe5, \
      0xcb, 0xcc, 0x67, 0xc1, 0xf4, 0x12, 0x6e, 0xf7, \
      0xe6, 0x7a, 0x8c, 0x14, 0x47, 0xf2, 0x61, 0xa3, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetState__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetState__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetState_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x83, 0x1b, 0x4f, 0x7a, 0xc4, 0x87, 0xad, 0xa4, \
      0xde, 0x15, 0xab, 0xad, 0x81, 0x64, 0xdc, 0x10, \
      0x3b, 0x1f, 0x3f, 0x4c, 0x4f, 0xfb, 0x8f, 0x39, \
      0x9c, 0xdf, 0x48, 0xe8, 0xab, 0xec, 0xaf, 0xf5, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetState_Request__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetState_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetState_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x3c, 0x6d, 0x18, 0x0c, 0xfc, 0x0c, 0x10, 0x0c, \
      0xf2, 0x0e, 0x64, 0x71, 0x5b, 0xe1, 0x82, 0xb8, \
      0x5d, 0x0a, 0xd1, 0xa7, 0x26, 0xcc, 0xe1, 0xab, \
      0xa9, 0xfb, 0x70, 0xe2, 0x8d, 0x83, 0x2b, 0x70, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetState_Response__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetState_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetState_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x00, 0x08, 0x56, 0x84, 0x36, 0xe3, 0x99, 0x9b, \
      0x07, 0x14, 0x1c, 0x75, 0x7a, 0x7b, 0x8c, 0x43, \
      0x26, 0xd5, 0x3c, 0x7b, 0x31, 0x5f, 0xdd, 0xae, \
      0x24, 0xd9, 0xc0, 0x35, 0x55, 0x10, 0x3c, 0x78, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetState_Event__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetState_Event__TYPE_VERSION_HASH__INIT;

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
