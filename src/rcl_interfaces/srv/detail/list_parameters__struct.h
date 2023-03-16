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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__ListParameters__TYPE_VERSION_HASH__INIT {1, { \
      0x37, 0xca, 0x37, 0x17, 0x38, 0x5a, 0x4a, 0x0f, \
      0x58, 0x73, 0x1b, 0xcb, 0xb5, 0x4a, 0x1b, 0xf9, \
      0x9c, 0xd6, 0x7f, 0x23, 0x90, 0xc7, 0xe0, 0x82, \
      0x0d, 0xf6, 0x26, 0x7a, 0xca, 0xd8, 0xe5, 0x36, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__ListParameters__TYPE_VERSION_HASH = rcl_interfaces__srv__ListParameters__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__ListParameters_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x50, 0xde, 0xec, 0x98, 0x3a, 0x64, 0x62, 0x2c, \
      0x18, 0x3f, 0x9f, 0x41, 0xae, 0x40, 0x9a, 0xb6, \
      0x1f, 0xf5, 0x3e, 0x34, 0x77, 0x9e, 0x23, 0x66, \
      0xa7, 0x8f, 0xff, 0x7f, 0xbd, 0x70, 0x19, 0x4b, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__ListParameters_Request__TYPE_VERSION_HASH = rcl_interfaces__srv__ListParameters_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__ListParameters_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xb5, 0x8d, 0xc0, 0x7a, 0xe9, 0xec, 0x2d, 0x7c, \
      0x38, 0x8b, 0x75, 0xec, 0x08, 0xca, 0x63, 0x00, \
      0xb5, 0x5c, 0x53, 0x9c, 0x10, 0x89, 0xab, 0x2b, \
      0x8f, 0x1e, 0xb0, 0x2b, 0xa4, 0xfd, 0x85, 0xad, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__ListParameters_Response__TYPE_VERSION_HASH = rcl_interfaces__srv__ListParameters_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__ListParameters_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x2f, 0x10, 0xa7, 0x89, 0x72, 0xda, 0x76, 0x9b, \
      0x4b, 0x1c, 0x1b, 0x70, 0xca, 0x8d, 0x20, 0xd4, \
      0x57, 0x39, 0x05, 0x09, 0x20, 0x71, 0xfa, 0xbb, \
      0x4d, 0xc3, 0x27, 0xb8, 0xeb, 0x5a, 0xba, 0xec, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__ListParameters_Event__TYPE_VERSION_HASH = rcl_interfaces__srv__ListParameters_Event__TYPE_VERSION_HASH__INIT;

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
