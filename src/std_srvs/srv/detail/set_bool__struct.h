// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_srvs:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__SET_BOOL__STRUCT_H_
#define STD_SRVS__SRV__DETAIL__SET_BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t std_srvs__srv__SetBool__TYPE_HASH = {1, {
    0xab, 0xe9, 0xe4, 0xbb, 0x6b, 0x41, 0xb4, 0x0e,
    0x67, 0x89, 0x71, 0x2c, 0x00, 0xec, 0x88, 0x71,
    0x92, 0x3e, 0x08, 0x9a, 0xf3, 0xf6, 0x67, 0xa7,
    0x99, 0x92, 0xa4, 0x28, 0xcf, 0xf2, 0xda, 0x0a,
  }};


// Type Hash for interface
static const rosidl_type_hash_t std_srvs__srv__SetBool_Request__TYPE_HASH = {1, {
    0xc6, 0x2f, 0xbb, 0x99, 0xd9, 0x4e, 0x1b, 0x25,
    0xe8, 0xef, 0x9e, 0x10, 0x9f, 0x95, 0x81, 0x95,
    0x6b, 0xb1, 0xb3, 0x36, 0x1a, 0x45, 0xa4, 0xe5,
    0x81, 0x0c, 0x36, 0xa9, 0x0d, 0x29, 0x93, 0x2e,
  }};

// Constants defined in the message

/// Struct defined in srv/SetBool in the package std_srvs.
typedef struct std_srvs__srv__SetBool_Request
{
  /// e.g. for hardware enabling / disabling
  bool data;
} std_srvs__srv__SetBool_Request;

// Struct for a sequence of std_srvs__srv__SetBool_Request.
typedef struct std_srvs__srv__SetBool_Request__Sequence
{
  std_srvs__srv__SetBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetBool_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t std_srvs__srv__SetBool_Response__TYPE_HASH = {1, {
    0xd0, 0x81, 0x4e, 0x7f, 0x7b, 0x48, 0x80, 0xab,
    0x77, 0xe9, 0xc5, 0x74, 0x26, 0xc7, 0xaa, 0x15,
    0x62, 0xab, 0x69, 0xf1, 0x1e, 0xef, 0x8e, 0x2e,
    0x96, 0x88, 0x12, 0xf9, 0xcb, 0xd0, 0xb0, 0x59,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBool in the package std_srvs.
typedef struct std_srvs__srv__SetBool_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} std_srvs__srv__SetBool_Response;

// Struct for a sequence of std_srvs__srv__SetBool_Response.
typedef struct std_srvs__srv__SetBool_Response__Sequence
{
  std_srvs__srv__SetBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetBool_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t std_srvs__srv__SetBool_Event__TYPE_HASH = {1, {
    0x3c, 0x4c, 0x20, 0x01, 0x5a, 0xfb, 0x43, 0x03,
    0xea, 0xfd, 0x34, 0x7b, 0x1d, 0x6a, 0x78, 0x6f,
    0x17, 0x1a, 0x89, 0xc8, 0x14, 0x72, 0x69, 0x61,
    0xa9, 0x59, 0x3e, 0xf1, 0x0d, 0xf8, 0x78, 0xcf,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  std_srvs__srv__SetBool_Event__request__MAX_SIZE = 1
};
// response
enum
{
  std_srvs__srv__SetBool_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetBool in the package std_srvs.
typedef struct std_srvs__srv__SetBool_Event
{
  service_msgs__msg__ServiceEventInfo info;
  std_srvs__srv__SetBool_Request__Sequence request;
  std_srvs__srv__SetBool_Response__Sequence response;
} std_srvs__srv__SetBool_Event;

// Struct for a sequence of std_srvs__srv__SetBool_Event.
typedef struct std_srvs__srv__SetBool_Event__Sequence
{
  std_srvs__srv__SetBool_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetBool_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__DETAIL__SET_BOOL__STRUCT_H_
