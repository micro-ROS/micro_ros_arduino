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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__ChangeState__TYPE_VERSION_HASH__INIT {1, { \
      0x22, 0xab, 0xff, 0x23, 0xc4, 0x03, 0x0d, 0x2b, \
      0x78, 0x38, 0xda, 0xb7, 0xf8, 0x47, 0xa1, 0xad, \
      0x29, 0x6d, 0x90, 0x9f, 0x2a, 0x0f, 0xae, 0x8a, \
      0xe3, 0xad, 0x75, 0xf3, 0x1b, 0x1e, 0xf1, 0x5b, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__ChangeState__TYPE_VERSION_HASH = lifecycle_msgs__srv__ChangeState__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__ChangeState_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xc5, 0xcc, 0xc1, 0x74, 0xf4, 0x8f, 0x70, 0x84, \
      0xc9, 0x29, 0x0f, 0x11, 0x6b, 0xb0, 0xc0, 0x17, \
      0x24, 0x5d, 0x8a, 0xe3, 0x8f, 0x80, 0xe0, 0x8e, \
      0x7e, 0xbd, 0x0e, 0x0f, 0xaf, 0x77, 0xb5, 0x3d, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__ChangeState_Request__TYPE_VERSION_HASH = lifecycle_msgs__srv__ChangeState_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__ChangeState_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xa6, 0x1b, 0x6a, 0x16, 0x14, 0x0b, 0x83, 0x30, \
      0xd8, 0xcd, 0xf6, 0x0a, 0xc6, 0xce, 0x5c, 0x66, \
      0x73, 0xad, 0xc2, 0x1c, 0x9b, 0xfc, 0x57, 0x00, \
      0x72, 0xe7, 0xce, 0xa0, 0xcc, 0x4f, 0xd0, 0x00, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__ChangeState_Response__TYPE_VERSION_HASH = lifecycle_msgs__srv__ChangeState_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__ChangeState_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x01, 0x96, 0x80, 0x72, 0xb5, 0x61, 0x8a, 0xb7, \
      0xc2, 0x34, 0xe3, 0x40, 0xa5, 0x94, 0xaa, 0xa0, \
      0xcb, 0x1e, 0x4f, 0x34, 0xa1, 0x03, 0xbd, 0xd3, \
      0x44, 0xa0, 0x2f, 0x4a, 0x53, 0x58, 0xff, 0xe7, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__ChangeState_Event__TYPE_VERSION_HASH = lifecycle_msgs__srv__ChangeState_Event__TYPE_VERSION_HASH__INIT;

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
