// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:srv/GetParameterTypes.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__GET_PARAMETER_TYPES__STRUCT_H_
#define RCL_INTERFACES__SRV__DETAIL__GET_PARAMETER_TYPES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t rcl_interfaces__srv__GetParameterTypes__TYPE_HASH = {1, {
    0xda, 0x19, 0x9c, 0x87, 0x86, 0x88, 0xb3, 0xe5,
    0x30, 0xbd, 0xfe, 0x3c, 0xa8, 0xf7, 0x4c, 0xb9,
    0xfa, 0x0c, 0x30, 0x31, 0x01, 0xe9, 0x80, 0xa9,
    0xe8, 0xf2, 0x60, 0xe2, 0x5e, 0x1c, 0x80, 0xca,
  }};


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameterTypes_Request__TYPE_HASH = {1, {
    0x87, 0xd7, 0xec, 0x5e, 0xf5, 0x45, 0xd4, 0xda,
    0xa2, 0x89, 0xd5, 0x00, 0x02, 0x5d, 0x31, 0xfb,
    0x24, 0x37, 0xbc, 0x8b, 0x83, 0x65, 0xca, 0x36,
    0x71, 0x61, 0xc4, 0xda, 0xc4, 0xbe, 0x33, 0xfd,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetParameterTypes in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__GetParameterTypes_Request
{
  rosidl_runtime_c__String__Sequence names;
} rcl_interfaces__srv__GetParameterTypes_Request;

// Struct for a sequence of rcl_interfaces__srv__GetParameterTypes_Request.
typedef struct rcl_interfaces__srv__GetParameterTypes_Request__Sequence
{
  rcl_interfaces__srv__GetParameterTypes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__GetParameterTypes_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameterTypes_Response__TYPE_HASH = {1, {
    0xac, 0x13, 0x35, 0xdc, 0xe6, 0x7c, 0x47, 0x8e,
    0x66, 0x94, 0x34, 0xf6, 0xac, 0x2f, 0xbf, 0xf3,
    0x4f, 0xcd, 0x52, 0x95, 0x80, 0xf2, 0x72, 0xd3,
    0x00, 0x67, 0x85, 0xba, 0x8b, 0x54, 0xe4, 0x7f,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'types'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetParameterTypes in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__GetParameterTypes_Response
{
  rosidl_runtime_c__uint8__Sequence types;
} rcl_interfaces__srv__GetParameterTypes_Response;

// Struct for a sequence of rcl_interfaces__srv__GetParameterTypes_Response.
typedef struct rcl_interfaces__srv__GetParameterTypes_Response__Sequence
{
  rcl_interfaces__srv__GetParameterTypes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__GetParameterTypes_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameterTypes_Event__TYPE_HASH = {1, {
    0x95, 0x16, 0xad, 0xca, 0x0c, 0xc8, 0x85, 0xd4,
    0x6a, 0x59, 0xc2, 0x36, 0x2f, 0xb8, 0xeb, 0x5f,
    0x49, 0x06, 0xb0, 0x46, 0x51, 0x82, 0x66, 0xf8,
    0xc6, 0x45, 0xb4, 0x54, 0xb0, 0xdd, 0xdc, 0x60,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rcl_interfaces__srv__GetParameterTypes_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rcl_interfaces__srv__GetParameterTypes_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetParameterTypes in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__GetParameterTypes_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rcl_interfaces__srv__GetParameterTypes_Request__Sequence request;
  rcl_interfaces__srv__GetParameterTypes_Response__Sequence response;
} rcl_interfaces__srv__GetParameterTypes_Event;

// Struct for a sequence of rcl_interfaces__srv__GetParameterTypes_Event.
typedef struct rcl_interfaces__srv__GetParameterTypes_Event__Sequence
{
  rcl_interfaces__srv__GetParameterTypes_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__GetParameterTypes_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DETAIL__GET_PARAMETER_TYPES__STRUCT_H_
