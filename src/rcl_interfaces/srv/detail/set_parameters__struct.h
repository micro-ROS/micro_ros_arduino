// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:srv/SetParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_
#define RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t rcl_interfaces__srv__SetParameters__TYPE_HASH = {1, {
    0x56, 0xee, 0xd9, 0xa6, 0x7e, 0x16, 0x9f, 0x9c,
    0xb6, 0xc1, 0xf9, 0x87, 0xbc, 0x88, 0xf8, 0x68,
    0xc1, 0x4a, 0x8f, 0xc9, 0xf7, 0x43, 0xa2, 0x63,
    0xbc, 0x73, 0x4c, 0x15, 0x40, 0x15, 0xd7, 0xe0,
  }};


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__SetParameters_Request__TYPE_HASH = {1, {
    0x13, 0x0d, 0x46, 0x38, 0x6b, 0x7e, 0x84, 0xea,
    0x9e, 0xcf, 0x60, 0x60, 0x8a, 0x4d, 0x83, 0xcb,
    0xe5, 0xe5, 0xcb, 0x7c, 0x6c, 0xc5, 0xb7, 0x12,
    0xb7, 0xa4, 0xe3, 0xa6, 0xc2, 0x54, 0xe9, 0x32,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'parameters'
#include "rcl_interfaces/msg/detail/parameter__struct.h"

/// Struct defined in srv/SetParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__SetParameters_Request
{
  rcl_interfaces__msg__Parameter__Sequence parameters;
} rcl_interfaces__srv__SetParameters_Request;

// Struct for a sequence of rcl_interfaces__srv__SetParameters_Request.
typedef struct rcl_interfaces__srv__SetParameters_Request__Sequence
{
  rcl_interfaces__srv__SetParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__SetParameters_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__SetParameters_Response__TYPE_HASH = {1, {
    0x7a, 0x0e, 0x81, 0x40, 0xa0, 0xb8, 0xd9, 0x83,
    0x08, 0xfa, 0x81, 0xa5, 0x40, 0x3a, 0x76, 0x6e,
    0x61, 0x0a, 0xf2, 0x9a, 0x23, 0x9c, 0xaf, 0x54,
    0xb7, 0x55, 0x32, 0x27, 0x90, 0x6f, 0xc2, 0x66,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'results'
#include "rcl_interfaces/msg/detail/set_parameters_result__struct.h"

/// Struct defined in srv/SetParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__SetParameters_Response
{
  rcl_interfaces__msg__SetParametersResult__Sequence results;
} rcl_interfaces__srv__SetParameters_Response;

// Struct for a sequence of rcl_interfaces__srv__SetParameters_Response.
typedef struct rcl_interfaces__srv__SetParameters_Response__Sequence
{
  rcl_interfaces__srv__SetParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__SetParameters_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__SetParameters_Event__TYPE_HASH = {1, {
    0x50, 0x60, 0xf5, 0x23, 0x69, 0xbc, 0xff, 0x7f,
    0x9d, 0xbd, 0x6e, 0xca, 0x21, 0xee, 0x52, 0x18,
    0x59, 0xe4, 0x71, 0xe7, 0x1b, 0x33, 0xa8, 0xa8,
    0xdf, 0x26, 0xd5, 0x23, 0x6f, 0xe5, 0x4a, 0x80,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rcl_interfaces__srv__SetParameters_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rcl_interfaces__srv__SetParameters_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__SetParameters_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rcl_interfaces__srv__SetParameters_Request__Sequence request;
  rcl_interfaces__srv__SetParameters_Response__Sequence response;
} rcl_interfaces__srv__SetParameters_Event;

// Struct for a sequence of rcl_interfaces__srv__SetParameters_Event.
typedef struct rcl_interfaces__srv__SetParameters_Event__Sequence
{
  rcl_interfaces__srv__SetParameters_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__SetParameters_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS__STRUCT_H_
