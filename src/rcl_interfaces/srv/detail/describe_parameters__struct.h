// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:srv/DescribeParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__DESCRIBE_PARAMETERS__STRUCT_H_
#define RCL_INTERFACES__SRV__DETAIL__DESCRIBE_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__DescribeParameters__TYPE_VERSION_HASH__INIT {1, { \
      0x74, 0xfc, 0xd2, 0x9d, 0xdb, 0x60, 0x60, 0x5d, \
      0xe8, 0x00, 0xf7, 0xb2, 0xe0, 0x51, 0x34, 0x0a, \
      0x3d, 0x1b, 0x4d, 0x85, 0x8a, 0x4f, 0x49, 0xf4, \
      0xe9, 0x75, 0xfb, 0xe3, 0xc3, 0xfb, 0x0c, 0x5c, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__DescribeParameters__TYPE_VERSION_HASH = rcl_interfaces__srv__DescribeParameters__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__DescribeParameters_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x07, 0x6b, 0xe0, 0x31, 0xd1, 0x8b, 0xfb, 0xc9, \
      0xc8, 0x82, 0x80, 0xdc, 0x75, 0x52, 0x65, 0xee, \
      0xc3, 0x4b, 0x51, 0xfc, 0x12, 0x2c, 0xa1, 0xc9, \
      0x5f, 0xa5, 0x70, 0xa2, 0x2a, 0x0e, 0x4d, 0xed, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__DescribeParameters_Request__TYPE_VERSION_HASH = rcl_interfaces__srv__DescribeParameters_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DescribeParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__DescribeParameters_Request
{
  rosidl_runtime_c__String__Sequence names;
} rcl_interfaces__srv__DescribeParameters_Request;

// Struct for a sequence of rcl_interfaces__srv__DescribeParameters_Request.
typedef struct rcl_interfaces__srv__DescribeParameters_Request__Sequence
{
  rcl_interfaces__srv__DescribeParameters_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__DescribeParameters_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__DescribeParameters_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x4b, 0x4a, 0x18, 0x9b, 0x8b, 0x11, 0xd1, 0x76, \
      0x4a, 0xee, 0xc6, 0xa1, 0xae, 0x23, 0xd8, 0x0a, \
      0xc3, 0x84, 0xc3, 0xee, 0xf2, 0x26, 0xd5, 0x0a, \
      0x86, 0x9e, 0x3e, 0x38, 0x1e, 0x3e, 0x6a, 0x20, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__DescribeParameters_Response__TYPE_VERSION_HASH = rcl_interfaces__srv__DescribeParameters_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'descriptors'
#include "rcl_interfaces/msg/detail/parameter_descriptor__struct.h"

/// Struct defined in srv/DescribeParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__DescribeParameters_Response
{
  rcl_interfaces__msg__ParameterDescriptor__Sequence descriptors;
} rcl_interfaces__srv__DescribeParameters_Response;

// Struct for a sequence of rcl_interfaces__srv__DescribeParameters_Response.
typedef struct rcl_interfaces__srv__DescribeParameters_Response__Sequence
{
  rcl_interfaces__srv__DescribeParameters_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__DescribeParameters_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__DescribeParameters_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xb5, 0x5c, 0x1a, 0xbc, 0x88, 0x2b, 0x34, 0x16, \
      0x6d, 0xd9, 0x7f, 0x10, 0xff, 0xba, 0xcb, 0x49, \
      0xdc, 0x1f, 0xe3, 0x47, 0x66, 0x3b, 0x5f, 0x39, \
      0xe4, 0x8d, 0x65, 0x0a, 0x91, 0x3e, 0x0e, 0x66, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__DescribeParameters_Event__TYPE_VERSION_HASH = rcl_interfaces__srv__DescribeParameters_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rcl_interfaces__srv__DescribeParameters_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rcl_interfaces__srv__DescribeParameters_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DescribeParameters in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__DescribeParameters_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rcl_interfaces__srv__DescribeParameters_Request__Sequence request;
  rcl_interfaces__srv__DescribeParameters_Response__Sequence response;
} rcl_interfaces__srv__DescribeParameters_Event;

// Struct for a sequence of rcl_interfaces__srv__DescribeParameters_Event.
typedef struct rcl_interfaces__srv__DescribeParameters_Event__Sequence
{
  rcl_interfaces__srv__DescribeParameters_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__DescribeParameters_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DETAIL__DESCRIBE_PARAMETERS__STRUCT_H_
