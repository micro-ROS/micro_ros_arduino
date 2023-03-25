// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:srv/GetParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_
#define RCL_INTERFACES__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t rcl_interfaces__srv__GetParameters__TYPE_HASH = {1, {
    0xbf, 0x98, 0x03, 0xd5, 0xc7, 0x4c, 0xf9, 0x89,
    0xa5, 0xde, 0x3e, 0x0c, 0x2e, 0x99, 0x44, 0x45,
    0x99, 0xa6, 0x27, 0xc7, 0xff, 0x75, 0xf9, 0x7b,
    0x8c, 0x05, 0xb0, 0x10, 0x03, 0x67, 0x5c, 0xbc,
  }};


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameters_Request__TYPE_HASH = {1, {
    0x13, 0x5a, 0x9e, 0x1c, 0x3d, 0x7c, 0xeb, 0xef,
    0x79, 0x2f, 0x66, 0x87, 0xd7, 0xdd, 0xf9, 0x99,
    0x49, 0xb2, 0x1a, 0x0b, 0xd9, 0xa3, 0x20, 0xd8,
    0x63, 0xa9, 0x11, 0x0a, 0x3f, 0x5c, 0xf4, 0xd6,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__GetParameters_Request
{
  /// A list of parameter names to get.
  rosidl_runtime_c__String__Sequence names;
} rcl_interfaces__srv__GetParameters_Request;

// Struct for a sequence of rcl_interfaces__srv__GetParameters_Request.
typedef struct rcl_interfaces__srv__GetParameters_Request__Sequence
{
  rcl_interfaces__srv__GetParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__GetParameters_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameters_Response__TYPE_HASH = {1, {
    0x9f, 0xa7, 0x73, 0xb4, 0x6e, 0x39, 0xcc, 0x5d,
    0x02, 0xdb, 0x62, 0x24, 0xd8, 0xfd, 0x52, 0x0b,
    0xb9, 0xca, 0xee, 0xff, 0xc2, 0xb2, 0x7c, 0x96,
    0xc1, 0xe5, 0x94, 0x31, 0xba, 0xba, 0x9f, 0x2a,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'values'
#include "rcl_interfaces/msg/detail/parameter_value__struct.h"

/// Struct defined in srv/GetParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__GetParameters_Response
{
  rcl_interfaces__msg__ParameterValue__Sequence values;
} rcl_interfaces__srv__GetParameters_Response;

// Struct for a sequence of rcl_interfaces__srv__GetParameters_Response.
typedef struct rcl_interfaces__srv__GetParameters_Response__Sequence
{
  rcl_interfaces__srv__GetParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__GetParameters_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameters_Event__TYPE_HASH = {1, {
    0x84, 0xee, 0xb9, 0x24, 0x7b, 0x09, 0x06, 0x7c,
    0x35, 0xbd, 0x87, 0x50, 0xd5, 0xc8, 0x55, 0x5b,
    0x70, 0x0e, 0x39, 0x4a, 0x61, 0x67, 0x37, 0xc4,
    0x62, 0x4f, 0x15, 0xae, 0x02, 0xe6, 0x4c, 0x4d,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rcl_interfaces__srv__GetParameters_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rcl_interfaces__srv__GetParameters_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__GetParameters_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rcl_interfaces__srv__GetParameters_Request__Sequence request;
  rcl_interfaces__srv__GetParameters_Response__Sequence response;
} rcl_interfaces__srv__GetParameters_Event;

// Struct for a sequence of rcl_interfaces__srv__GetParameters_Event.
typedef struct rcl_interfaces__srv__GetParameters_Event__Sequence
{
  rcl_interfaces__srv__GetParameters_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__GetParameters_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DETAIL__GET_PARAMETERS__STRUCT_H_
