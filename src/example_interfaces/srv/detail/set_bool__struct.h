// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_H_
#define EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t example_interfaces__srv__SetBool__TYPE_HASH = {1, {
    0xa6, 0x97, 0x82, 0xe5, 0x63, 0x1b, 0x12, 0xe1,
    0x5c, 0x8e, 0x21, 0x84, 0x10, 0xde, 0x16, 0x85,
    0xbb, 0xf1, 0x3e, 0x38, 0x27, 0x18, 0x29, 0x5a,
    0xda, 0xd1, 0x40, 0x37, 0xa2, 0x4a, 0xfb, 0xe8,
  }};


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__srv__SetBool_Request__TYPE_HASH = {1, {
    0xdb, 0x31, 0xa9, 0x14, 0x6d, 0xe9, 0xf5, 0x8c,
    0x31, 0x96, 0xef, 0x92, 0xeb, 0xc4, 0x3a, 0xbc,
    0x46, 0x01, 0x99, 0xad, 0xfa, 0x57, 0xec, 0xe5,
    0x15, 0x50, 0xf3, 0x75, 0x44, 0xc4, 0xee, 0x58,
  }};

// Constants defined in the message

/// Struct defined in srv/SetBool in the package example_interfaces.
typedef struct example_interfaces__srv__SetBool_Request
{
  /// e.g. for hardware enabling / disabling
  bool data;
} example_interfaces__srv__SetBool_Request;

// Struct for a sequence of example_interfaces__srv__SetBool_Request.
typedef struct example_interfaces__srv__SetBool_Request__Sequence
{
  example_interfaces__srv__SetBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__SetBool_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__srv__SetBool_Response__TYPE_HASH = {1, {
    0xfd, 0x35, 0xd6, 0x97, 0x4b, 0x0e, 0xde, 0x7f,
    0xad, 0x12, 0x7f, 0x60, 0x06, 0x19, 0x71, 0x9e,
    0xb7, 0xca, 0xf8, 0xb0, 0xff, 0x8b, 0x02, 0xa4,
    0xa5, 0xa1, 0x03, 0x90, 0x04, 0x79, 0xa6, 0x19,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBool in the package example_interfaces.
typedef struct example_interfaces__srv__SetBool_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} example_interfaces__srv__SetBool_Response;

// Struct for a sequence of example_interfaces__srv__SetBool_Response.
typedef struct example_interfaces__srv__SetBool_Response__Sequence
{
  example_interfaces__srv__SetBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__SetBool_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__srv__SetBool_Event__TYPE_HASH = {1, {
    0x02, 0x72, 0xd5, 0x15, 0x06, 0x75, 0x58, 0x2a,
    0xf7, 0x90, 0xe0, 0xfb, 0xff, 0x2b, 0xb4, 0x01,
    0x12, 0xf6, 0x1f, 0xcc, 0x62, 0x65, 0x1f, 0xff,
    0xf0, 0x20, 0x74, 0xec, 0x98, 0xb4, 0xdd, 0x2c,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  example_interfaces__srv__SetBool_Event__request__MAX_SIZE = 1
};
// response
enum
{
  example_interfaces__srv__SetBool_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetBool in the package example_interfaces.
typedef struct example_interfaces__srv__SetBool_Event
{
  service_msgs__msg__ServiceEventInfo info;
  example_interfaces__srv__SetBool_Request__Sequence request;
  example_interfaces__srv__SetBool_Response__Sequence response;
} example_interfaces__srv__SetBool_Event;

// Struct for a sequence of example_interfaces__srv__SetBool_Event.
typedef struct example_interfaces__srv__SetBool_Event__Sequence
{
  example_interfaces__srv__SetBool_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__SetBool_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_H_
