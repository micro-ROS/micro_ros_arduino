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


static const rosidl_type_hash_t rcl_interfaces__srv__DescribeParameters__TYPE_HASH = {1, {
    0x84, 0x5b, 0x48, 0x4d, 0x71, 0xeb, 0x06, 0x73,
    0xda, 0xe6, 0x82, 0xf2, 0xe3, 0xba, 0x3c, 0x48,
    0x51, 0xa6, 0x5a, 0x3d, 0xcf, 0xb9, 0x7b, 0xdd,
    0xd8, 0x2c, 0x5b, 0x57, 0xe9, 0x1e, 0x4c, 0xff,
  }};


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__DescribeParameters_Request__TYPE_HASH = {1, {
    0x05, 0xdd, 0x1c, 0x2b, 0xc8, 0x7d, 0xec, 0x26,
    0x27, 0x10, 0x5c, 0x80, 0x70, 0xd6, 0xf9, 0x72,
    0x5c, 0x78, 0x1a, 0x4f, 0x2a, 0xb8, 0x52, 0x97,
    0x5b, 0xf1, 0x05, 0x46, 0x2b, 0x82, 0xb6, 0x44,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__DescribeParameters_Response__TYPE_HASH = {1, {
    0xad, 0x67, 0x47, 0x31, 0x96, 0x13, 0xc6, 0x13,
    0x15, 0x89, 0xe0, 0x62, 0xe0, 0x95, 0xb4, 0x69,
    0xa4, 0x6c, 0xc7, 0x64, 0xf7, 0xd0, 0xf1, 0x2a,
    0x00, 0x1a, 0x49, 0xe6, 0xcd, 0x89, 0x39, 0x95,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t rcl_interfaces__srv__DescribeParameters_Event__TYPE_HASH = {1, {
    0x3d, 0xeb, 0xa6, 0x4c, 0x03, 0x50, 0x93, 0x03,
    0x3c, 0x69, 0x01, 0x84, 0x83, 0x44, 0x41, 0x55,
    0x1a, 0x53, 0x12, 0x8e, 0xa2, 0x53, 0x9f, 0x71,
    0xf2, 0x59, 0x6f, 0xbc, 0x4e, 0xd9, 0xde, 0x43,
  }};

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
