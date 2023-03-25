// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_srvs:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__TRIGGER__STRUCT_H_
#define STD_SRVS__SRV__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t std_srvs__srv__Trigger__TYPE_HASH = {1, {
    0xee, 0xff, 0x2c, 0xd6, 0xfa, 0x5a, 0xd9, 0xd2,
    0x7c, 0xdf, 0x4d, 0xec, 0x64, 0x81, 0x83, 0x17,
    0x83, 0x9b, 0x62, 0xf2, 0x12, 0xa9, 0x1e, 0x6b,
    0x53, 0x04, 0xb6, 0x34, 0xb2, 0x06, 0x2c, 0x5f,
  }};


// Type Hash for interface
static const rosidl_type_hash_t std_srvs__srv__Trigger_Request__TYPE_HASH = {1, {
    0xd0, 0x10, 0x82, 0x53, 0x74, 0xce, 0x89, 0x18,
    0xe7, 0x2b, 0xfd, 0x82, 0x6c, 0x82, 0x60, 0x3e,
    0x60, 0xf4, 0x54, 0x19, 0xe9, 0x32, 0xea, 0x97,
    0x6f, 0x80, 0x7b, 0x74, 0xa8, 0x63, 0xa1, 0x99,
  }};

// Constants defined in the message

/// Struct defined in srv/Trigger in the package std_srvs.
typedef struct std_srvs__srv__Trigger_Request
{
  uint8_t structure_needs_at_least_one_member;
} std_srvs__srv__Trigger_Request;

// Struct for a sequence of std_srvs__srv__Trigger_Request.
typedef struct std_srvs__srv__Trigger_Request__Sequence
{
  std_srvs__srv__Trigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Trigger_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t std_srvs__srv__Trigger_Response__TYPE_HASH = {1, {
    0x2d, 0x94, 0x6c, 0x21, 0xe2, 0xfc, 0x3f, 0x1e,
    0x9c, 0xa6, 0x98, 0x6a, 0x81, 0x91, 0xd8, 0x5f,
    0xcc, 0x70, 0x09, 0x7a, 0x8b, 0xb7, 0x77, 0x1a,
    0x05, 0x35, 0x64, 0xbc, 0x47, 0x00, 0x9c, 0xdf,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Trigger in the package std_srvs.
typedef struct std_srvs__srv__Trigger_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} std_srvs__srv__Trigger_Response;

// Struct for a sequence of std_srvs__srv__Trigger_Response.
typedef struct std_srvs__srv__Trigger_Response__Sequence
{
  std_srvs__srv__Trigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Trigger_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t std_srvs__srv__Trigger_Event__TYPE_HASH = {1, {
    0xec, 0x4a, 0x1d, 0x26, 0xb0, 0x57, 0x5e, 0x61,
    0x90, 0x68, 0x90, 0x34, 0x2a, 0xba, 0x95, 0x23,
    0xa2, 0x36, 0x0e, 0x98, 0x45, 0x85, 0x7c, 0x55,
    0x90, 0xfa, 0x6e, 0x23, 0xbc, 0x39, 0xe1, 0xc2,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  std_srvs__srv__Trigger_Event__request__MAX_SIZE = 1
};
// response
enum
{
  std_srvs__srv__Trigger_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Trigger in the package std_srvs.
typedef struct std_srvs__srv__Trigger_Event
{
  service_msgs__msg__ServiceEventInfo info;
  std_srvs__srv__Trigger_Request__Sequence request;
  std_srvs__srv__Trigger_Response__Sequence response;
} std_srvs__srv__Trigger_Event;

// Struct for a sequence of std_srvs__srv__Trigger_Event.
typedef struct std_srvs__srv__Trigger_Event__Sequence
{
  std_srvs__srv__Trigger_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Trigger_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__DETAIL__TRIGGER__STRUCT_H_
