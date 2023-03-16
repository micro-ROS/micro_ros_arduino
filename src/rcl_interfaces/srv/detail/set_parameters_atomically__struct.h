// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:srv/SetParametersAtomically.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS_ATOMICALLY__STRUCT_H_
#define RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS_ATOMICALLY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__SetParametersAtomically__TYPE_VERSION_HASH__INIT {1, { \
      0xa1, 0x6d, 0x2c, 0x28, 0x86, 0x9c, 0x30, 0x3a, \
      0xce, 0x41, 0x2e, 0xf7, 0x4e, 0x26, 0xe0, 0x4f, \
      0x3e, 0x43, 0x7a, 0x3a, 0xb2, 0x7d, 0x7a, 0x4b, \
      0xa2, 0xa4, 0x9e, 0x1a, 0x6e, 0xc9, 0x6f, 0x06, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__SetParametersAtomically__TYPE_VERSION_HASH = rcl_interfaces__srv__SetParametersAtomically__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__SetParametersAtomically_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x55, 0x84, 0x97, 0x71, 0x3c, 0x72, 0xb4, 0xc4, \
      0x87, 0xf9, 0x40, 0x2f, 0x4d, 0x6e, 0xa0, 0x3c, \
      0x29, 0x3c, 0x48, 0x34, 0x2a, 0x84, 0xb8, 0x49, \
      0x19, 0xe6, 0xd6, 0x1d, 0x0e, 0xe2, 0xbe, 0xc4, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__SetParametersAtomically_Request__TYPE_VERSION_HASH = rcl_interfaces__srv__SetParametersAtomically_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'parameters'
#include "rcl_interfaces/msg/detail/parameter__struct.h"

/// Struct defined in srv/SetParametersAtomically in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__SetParametersAtomically_Request
{
  rcl_interfaces__msg__Parameter__Sequence parameters;
} rcl_interfaces__srv__SetParametersAtomically_Request;

// Struct for a sequence of rcl_interfaces__srv__SetParametersAtomically_Request.
typedef struct rcl_interfaces__srv__SetParametersAtomically_Request__Sequence
{
  rcl_interfaces__srv__SetParametersAtomically_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__SetParametersAtomically_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__SetParametersAtomically_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x65, 0x79, 0xc1, 0x44, 0x81, 0xe8, 0x80, 0xe3, \
      0x98, 0xbf, 0xbd, 0xea, 0x68, 0x60, 0x54, 0x60, \
      0x5c, 0xe2, 0x34, 0x7b, 0xb6, 0x9c, 0x0d, 0x3c, \
      0x45, 0xda, 0x6e, 0xc6, 0x0b, 0x9b, 0x61, 0x6d, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__SetParametersAtomically_Response__TYPE_VERSION_HASH = rcl_interfaces__srv__SetParametersAtomically_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "rcl_interfaces/msg/detail/set_parameters_result__struct.h"

/// Struct defined in srv/SetParametersAtomically in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__SetParametersAtomically_Response
{
  rcl_interfaces__msg__SetParametersResult result;
} rcl_interfaces__srv__SetParametersAtomically_Response;

// Struct for a sequence of rcl_interfaces__srv__SetParametersAtomically_Response.
typedef struct rcl_interfaces__srv__SetParametersAtomically_Response__Sequence
{
  rcl_interfaces__srv__SetParametersAtomically_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__SetParametersAtomically_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define rcl_interfaces__srv__SetParametersAtomically_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x01, 0x45, 0xef, 0xc6, 0x06, 0xaa, 0x27, 0x19, \
      0xc4, 0xb6, 0xc6, 0x9f, 0xdb, 0xb1, 0x09, 0x33, \
      0x13, 0xa6, 0x57, 0xb0, 0xab, 0xc4, 0x13, 0x29, \
      0x49, 0xb7, 0xf9, 0xce, 0x2a, 0xa8, 0x01, 0xf2, \
    }}
static const rosidl_type_hash_t rcl_interfaces__srv__SetParametersAtomically_Event__TYPE_VERSION_HASH = rcl_interfaces__srv__SetParametersAtomically_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  rcl_interfaces__srv__SetParametersAtomically_Event__request__MAX_SIZE = 1
};
// response
enum
{
  rcl_interfaces__srv__SetParametersAtomically_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetParametersAtomically in the package rcl_interfaces.
typedef struct rcl_interfaces__srv__SetParametersAtomically_Event
{
  service_msgs__msg__ServiceEventInfo info;
  rcl_interfaces__srv__SetParametersAtomically_Request__Sequence request;
  rcl_interfaces__srv__SetParametersAtomically_Response__Sequence response;
} rcl_interfaces__srv__SetParametersAtomically_Event;

// Struct for a sequence of rcl_interfaces__srv__SetParametersAtomically_Event.
typedef struct rcl_interfaces__srv__SetParametersAtomically_Event__Sequence
{
  rcl_interfaces__srv__SetParametersAtomically_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rcl_interfaces__srv__SetParametersAtomically_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS_ATOMICALLY__STRUCT_H_
