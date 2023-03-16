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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetAvailableTransitions__TYPE_VERSION_HASH__INIT {1, { \
      0x0c, 0xcd, 0x1c, 0xba, 0x71, 0x21, 0x05, 0x53, \
      0x53, 0x4f, 0x9a, 0x83, 0x33, 0x53, 0x31, 0x65, \
      0x22, 0x70, 0x91, 0x12, 0x30, 0x2a, 0x2d, 0x2a, \
      0x70, 0x30, 0x62, 0x28, 0xbd, 0x1a, 0x8c, 0x51, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableTransitions__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetAvailableTransitions__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetAvailableTransitions_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xda, 0x1b, 0xab, 0x4c, 0x75, 0x76, 0x45, 0x17, \
      0xff, 0xd4, 0xea, 0x12, 0xb3, 0xe8, 0xe3, 0x24, \
      0x92, 0x6d, 0xff, 0xd2, 0x42, 0x68, 0x09, 0x0f, \
      0x6f, 0xf6, 0x18, 0xc1, 0x21, 0x84, 0xe5, 0xfc, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableTransitions_Request__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetAvailableTransitions_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetAvailableTransitions_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xd4, 0x38, 0xf1, 0xd3, 0x8a, 0xc9, 0x3e, 0x66, \
      0x70, 0x6e, 0x9a, 0xa0, 0xc5, 0x48, 0x8f, 0x67, \
      0xef, 0x9c, 0xf3, 0x0c, 0x85, 0x4c, 0xaf, 0x2f, \
      0x68, 0x0f, 0xd7, 0x5f, 0x2b, 0x5c, 0xca, 0x9c, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableTransitions_Response__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetAvailableTransitions_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define lifecycle_msgs__srv__GetAvailableTransitions_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x7b, 0xf3, 0x9e, 0x74, 0xc5, 0x0f, 0x29, 0x12, \
      0x45, 0x6d, 0xc4, 0x69, 0x52, 0xd2, 0xd5, 0x5e, \
      0x4b, 0xf9, 0xe6, 0x7b, 0x1b, 0xd5, 0xdd, 0x68, \
      0x3c, 0xa3, 0x44, 0x4f, 0x22, 0xe2, 0xc2, 0x27, \
    }}
static const rosidl_type_hash_t lifecycle_msgs__srv__GetAvailableTransitions_Event__TYPE_VERSION_HASH = lifecycle_msgs__srv__GetAvailableTransitions_Event__TYPE_VERSION_HASH__INIT;

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
