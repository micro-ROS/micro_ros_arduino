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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__GetParameters__TYPE_VERSION_HASH__INIT {1, { \
      0xbc, 0xed, 0xcf, 0xb8, 0x58, 0xbd, 0x9f, 0xb1, \
      0x0f, 0xd4, 0x46, 0x78, 0xea, 0x93, 0x12, 0x40, \
      0x52, 0xa4, 0x5a, 0x6d, 0x9c, 0xb9, 0xa9, 0xa7, \
      0x23, 0x0c, 0x4e, 0x8c, 0x7b, 0x21, 0x2f, 0x64, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameters__TYPE_VERSION_HASH = rcl_interfaces__srv__GetParameters__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__GetParameters_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xd0, 0xac, 0x46, 0x88, 0x6c, 0x3a, 0x45, 0xc5, \
      0xb1, 0x1d, 0x5f, 0xa1, 0x03, 0x60, 0xba, 0x55, \
      0xe0, 0x37, 0xad, 0xeb, 0xaa, 0xc4, 0xbe, 0x0c, \
      0xaa, 0xb9, 0x4a, 0x67, 0x11, 0x36, 0x2d, 0x9c, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameters_Request__TYPE_VERSION_HASH = rcl_interfaces__srv__GetParameters_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__GetParameters_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x50, 0x03, 0x6c, 0x22, 0x13, 0x93, 0x7e, 0xfc, \
      0x63, 0x88, 0x19, 0xa3, 0xdd, 0x62, 0x9b, 0x65, \
      0xce, 0x59, 0xe9, 0x64, 0x66, 0x60, 0xaa, 0xa7, \
      0xbc, 0xc4, 0x62, 0x4b, 0x2d, 0xfc, 0x56, 0xe3, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameters_Response__TYPE_VERSION_HASH = rcl_interfaces__srv__GetParameters_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__GetParameters_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x88, 0xe9, 0x09, 0x88, 0x18, 0xb1, 0x8d, 0x51, \
      0x8a, 0x12, 0x1e, 0x05, 0x30, 0xe3, 0x89, 0x71, \
      0x39, 0x6c, 0x83, 0x9e, 0xb6, 0x76, 0xc2, 0x76, \
      0xdf, 0xee, 0x8b, 0xaa, 0x94, 0xa4, 0x78, 0x91, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameters_Event__TYPE_VERSION_HASH = rcl_interfaces__srv__GetParameters_Event__TYPE_VERSION_HASH__INIT;

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
