// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:srv/ListParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__LIST_PARAMETERS__STRUCT_H_
#define RCL_INTERFACES__SRV__DETAIL__LIST_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t rcl_interfaces__srv__ListParameters__TYPE_HASH = {1, {
    0x3e, 0x60, 0x62, 0xbf, 0xbb, 0x27, 0xbf, 0xb8,
    0x73, 0x0d, 0x4c, 0xef, 0x25, 0x58, 0x22, 0x1f,
    0x51, 0xa1, 0x16, 0x46, 0xd7, 0x8e, 0x7b, 0xb3,
    0x0a, 0x1e, 0x83, 0xaf, 0xac, 0x3a, 0xad, 0x9d,
  }};


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__ListParameters_Request__TYPE_HASH = {1, {
    0xa1, 0xb0, 0xb5, 0xd6, 0xb9, 0x67, 0xa5, 0xb8,
    0xac, 0x5b, 0xc8, 0x56, 0x3c, 0x3e, 0xa6, 0x78,
    0xf3, 0x49, 0xe3, 0x12, 0xa6, 0xa4, 0x96, 0x72,
    0x27, 0xc5, 0xa9, 0x6b, 0xc5, 0xce, 0x38, 0xdf,
  }};

// Constants defined in the message

/// Constant 'DEPTH_RECURSIVE'.
enum
{
  rcl_interfaces__srv__ListParameters_Request__DEPTH_RECURSIVE = 0ull
};

// Include directives for member types
// Member 'prefixes'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ListParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__ListParameters_Request
{
  /// The list of parameter prefixes to query.
  rosidl_runtime_c__String__Sequence prefixes;
  /// Relative depth from given prefixes to return.
  ///
  /// Use DEPTH_RECURSIVE to get the recursive parameters and prefixes for each prefix.
  uint64_t depth;
} rcl_interfaces__srv__ListParameters_Request;

// Struct for a sequence of rcl_interfaces__srv__ListParameters_Request.
typedef struct rcl_interfaces__srv__ListParameters_Request__Sequence
{
  rcl_interfaces__srv__ListParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__ListParameters_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__ListParameters_Response__TYPE_HASH = {1, {
    0x31, 0xb9, 0x37, 0xb8, 0x2d, 0xe3, 0x61, 0x24,
    0x26, 0xbe, 0x79, 0xf2, 0x31, 0xe3, 0x86, 0x25,
    0x9f, 0x97, 0xe8, 0xdc, 0x84, 0x3e, 0x3f, 0x28,
    0x45, 0x28, 0x8b, 0x4b, 0xfa, 0x29, 0x6b, 0xdd,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rcl_interfaces/msg/detail/list_parameters_result__struct.h"

/// Struct defined in srv/ListParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__ListParameters_Response
{
  rcl_interfaces__msg__ListParametersResult result;
} rcl_interfaces__srv__ListParameters_Response;

// Struct for a sequence of rcl_interfaces__srv__ListParameters_Response.
typedef struct rcl_interfaces__srv__ListParameters_Response__Sequence
{
  rcl_interfaces__srv__ListParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__ListParameters_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__ListParameters_Event__TYPE_HASH = {1, {
    0x89, 0xc5, 0xb5, 0xaa, 0xf6, 0x8e, 0xc9, 0x25,
    0xae, 0x9b, 0xbc, 0x55, 0x69, 0xee, 0x21, 0xde,
    0x82, 0x95, 0x9b, 0x4d, 0x14, 0x96, 0xdb, 0xd4,
    0x98, 0x79, 0x2a, 0xd8, 0x25, 0xb9, 0xb2, 0x92,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rcl_interfaces__srv__ListParameters_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rcl_interfaces__srv__ListParameters_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ListParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__ListParameters_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rcl_interfaces__srv__ListParameters_Request__Sequence request;
  rcl_interfaces__srv__ListParameters_Response__Sequence response;
} rcl_interfaces__srv__ListParameters_Event;

// Struct for a sequence of rcl_interfaces__srv__ListParameters_Event.
typedef struct rcl_interfaces__srv__ListParameters_Event__Sequence
{
  rcl_interfaces__srv__ListParameters_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__ListParameters_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DETAIL__LIST_PARAMETERS__STRUCT_H_
