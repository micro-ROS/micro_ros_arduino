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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__GetParameterTypes__TYPE_VERSION_HASH__INIT {1, { \
      0xbf, 0x4a, 0xf2, 0x12, 0x85, 0x14, 0x34, 0xf3, \
      0x41, 0x3c, 0x59, 0x17, 0xa6, 0x08, 0x62, 0x2b, \
      0x2e, 0x56, 0x9e, 0x1f, 0xd9, 0x67, 0xbe, 0xfd, \
      0x98, 0xdb, 0xb0, 0x76, 0x25, 0xc2, 0xc6, 0x70, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameterTypes__TYPE_VERSION_HASH = rcl_interfaces__srv__GetParameterTypes__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__GetParameterTypes_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x20, 0x19, 0xe0, 0x9f, 0xc7, 0xbc, 0x88, 0x44, \
      0x80, 0x00, 0xc6, 0xd6, 0x25, 0x47, 0x67, 0x92, \
      0xca, 0xc6, 0x6e, 0xb3, 0xdc, 0x0b, 0x1e, 0x44, \
      0x3f, 0x8e, 0x41, 0xe1, 0x90, 0x4d, 0x34, 0x5f, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameterTypes_Request__TYPE_VERSION_HASH = rcl_interfaces__srv__GetParameterTypes_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__GetParameterTypes_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x22, 0x43, 0x03, 0xd1, 0xe0, 0xc2, 0xa7, 0xcc, \
      0x29, 0xf6, 0xbd, 0x1f, 0x80, 0x19, 0xa1, 0xec, \
      0x87, 0x27, 0x24, 0x08, 0x12, 0x62, 0x0f, 0x9a, \
      0xe3, 0xd7, 0x47, 0x08, 0x6d, 0xd7, 0xbc, 0xbd, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameterTypes_Response__TYPE_VERSION_HASH = rcl_interfaces__srv__GetParameterTypes_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__GetParameterTypes_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xbc, 0x76, 0xef, 0x73, 0x7d, 0x7a, 0x22, 0xeb, \
      0x72, 0xdb, 0x7d, 0x6a, 0xee, 0xe1, 0xa4, 0x37, \
      0x94, 0xb6, 0x9b, 0xdb, 0x49, 0xe9, 0x61, 0x13, \
      0x3f, 0x4f, 0x42, 0x65, 0xa3, 0x8e, 0x18, 0x26, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__GetParameterTypes_Event__TYPE_VERSION_HASH = rcl_interfaces__srv__GetParameterTypes_Event__TYPE_VERSION_HASH__INIT;

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
