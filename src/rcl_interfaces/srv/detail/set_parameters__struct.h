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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__SetParameters__TYPE_VERSION_HASH__INIT {1, { \
      0xc0, 0xcd, 0x92, 0x50, 0xf3, 0x8c, 0x4b, 0x73, \
      0x9a, 0xb0, 0x7c, 0xfc, 0x2e, 0x0f, 0xdf, 0x7a, \
      0x4d, 0xc4, 0x2c, 0x0a, 0x2c, 0x45, 0xdf, 0xb7, \
      0x2c, 0xe3, 0x79, 0x09, 0xe2, 0x24, 0xcc, 0x22, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__SetParameters__TYPE_VERSION_HASH = rcl_interfaces__srv__SetParameters__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__SetParameters_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x44, 0xbf, 0xf6, 0xfa, 0x2c, 0x7d, 0xde, 0xe2, \
      0x55, 0xe4, 0x7a, 0xab, 0xb6, 0x94, 0xa5, 0x15, \
      0x28, 0xf0, 0x2e, 0xbb, 0x88, 0x16, 0x9b, 0xb2, \
      0x48, 0xce, 0x7c, 0x57, 0x42, 0x97, 0xb5, 0xa9, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__SetParameters_Request__TYPE_VERSION_HASH = rcl_interfaces__srv__SetParameters_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__SetParameters_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xbd, 0xb7, 0x96, 0x08, 0x9b, 0x9d, 0x49, 0x4f, \
      0x67, 0xa3, 0x38, 0x4d, 0x45, 0x78, 0x09, 0xea, \
      0x74, 0xc6, 0x39, 0xe9, 0x8f, 0x07, 0xcb, 0x9e, \
      0x9f, 0xf7, 0x2c, 0xaf, 0x58, 0x0e, 0x1c, 0xc9, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__SetParameters_Response__TYPE_VERSION_HASH = rcl_interfaces__srv__SetParameters_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__SetParameters_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xb7, 0x64, 0xdb, 0xe0, 0x42, 0xb7, 0xf9, 0x74, \
      0xee, 0x9f, 0xde, 0xc0, 0xa9, 0xab, 0x4b, 0xb4, \
      0xd3, 0x32, 0xf0, 0xf6, 0x21, 0x04, 0x13, 0xed, \
      0x18, 0x95, 0xbf, 0x05, 0x43, 0x39, 0x04, 0x8d, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__SetParameters_Event__TYPE_VERSION_HASH = rcl_interfaces__srv__SetParameters_Event__TYPE_VERSION_HASH__INIT;

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
