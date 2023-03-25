// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__TRIGGER__STRUCT_H_
#define EXAMPLE_INTERFACES__SRV__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t example_interfaces__srv__Trigger__TYPE_HASH = {1, {
    0xcf, 0xee, 0xee, 0x47, 0xf8, 0x10, 0x5d, 0xd7,
    0x68, 0x5e, 0x4c, 0x92, 0xd4, 0x6d, 0x40, 0x74,
    0x66, 0x9c, 0xb1, 0xc4, 0x77, 0x40, 0x2b, 0xe1,
    0xde, 0xa3, 0x74, 0x86, 0x54, 0x2a, 0x69, 0xe0,
  }};


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__srv__Trigger_Request__TYPE_HASH = {1, {
    0x25, 0x21, 0x57, 0x1b, 0xb7, 0xfb, 0x4d, 0xe9,
    0x4d, 0xa0, 0x45, 0x72, 0x0b, 0x06, 0x9b, 0x28,
    0x59, 0x08, 0x4c, 0x68, 0x9e, 0xe2, 0x73, 0x82,
    0xf4, 0x84, 0x14, 0xeb, 0xf4, 0xdd, 0x3a, 0x8d,
  }};

// Constants defined in the message

/// Struct defined in srv/Trigger in the package example_interfaces.
typedef struct example_interfaces__srv__Trigger_Request
{
  uint8_t structure_needs_at_least_one_member;
} example_interfaces__srv__Trigger_Request;

// Struct for a sequence of example_interfaces__srv__Trigger_Request.
typedef struct example_interfaces__srv__Trigger_Request__Sequence
{
  example_interfaces__srv__Trigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__Trigger_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__srv__Trigger_Response__TYPE_HASH = {1, {
    0x3f, 0xaa, 0x1e, 0x36, 0xb8, 0x34, 0xf5, 0x70,
    0x5a, 0x7e, 0x9a, 0xa9, 0x90, 0xc4, 0x72, 0x0c,
    0x08, 0x2f, 0x06, 0x30, 0xbf, 0x28, 0xab, 0xed,
    0xf3, 0x15, 0xcc, 0x69, 0xf0, 0x1d, 0xc8, 0xfc,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Trigger in the package example_interfaces.
typedef struct example_interfaces__srv__Trigger_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages.
  rosidl_runtime_c__String message;
} example_interfaces__srv__Trigger_Response;

// Struct for a sequence of example_interfaces__srv__Trigger_Response.
typedef struct example_interfaces__srv__Trigger_Response__Sequence
{
  example_interfaces__srv__Trigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__Trigger_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__srv__Trigger_Event__TYPE_HASH = {1, {
    0x37, 0x21, 0x6e, 0x82, 0x64, 0x6e, 0x85, 0xe9,
    0xda, 0xcb, 0x76, 0x81, 0x10, 0x00, 0xfc, 0x4c,
    0x5e, 0x30, 0x3d, 0xd4, 0xef, 0x29, 0xb4, 0x15,
    0x1c, 0x18, 0x9a, 0x3f, 0xa7, 0x34, 0x29, 0x6f,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  example_interfaces__srv__Trigger_Event__request__MAX_SIZE = 1
};
// response
enum
{
  example_interfaces__srv__Trigger_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Trigger in the package example_interfaces.
typedef struct example_interfaces__srv__Trigger_Event
{
  service_msgs__msg__ServiceEventInfo info;
  example_interfaces__srv__Trigger_Request__Sequence request;
  example_interfaces__srv__Trigger_Response__Sequence response;
} example_interfaces__srv__Trigger_Event;

// Struct for a sequence of example_interfaces__srv__Trigger_Event.
typedef struct example_interfaces__srv__Trigger_Event__Sequence
{
  example_interfaces__srv__Trigger_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__Trigger_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__TRIGGER__STRUCT_H_
