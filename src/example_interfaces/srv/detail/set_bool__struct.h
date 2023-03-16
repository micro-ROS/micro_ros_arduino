// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_H_
#define EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__SetBool__TYPE_VERSION_HASH__INIT {1, { \
      0xaf, 0xf6, 0xb7, 0x86, 0xad, 0x43, 0xab, 0x2e, \
      0x4a, 0xb7, 0x4d, 0xc7, 0x31, 0xf9, 0x5a, 0x35, \
      0xa2, 0x4a, 0x52, 0xe7, 0x35, 0x96, 0xef, 0x07, \
      0x60, 0x68, 0xd7, 0x60, 0x06, 0x8c, 0xe6, 0x14, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__SetBool__TYPE_VERSION_HASH = example_interfaces__srv__SetBool__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__SetBool_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xbd, 0xa8, 0x0d, 0xb0, 0xbd, 0xdf, 0x34, 0x55, \
      0x1e, 0x56, 0x05, 0x21, 0x51, 0xa2, 0x40, 0xb5, \
      0x92, 0xb5, 0xa7, 0xf9, 0x6b, 0xaa, 0x29, 0xc1, \
      0xb3, 0xa2, 0xfd, 0x0f, 0xc1, 0x74, 0xf1, 0x0c, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__SetBool_Request__TYPE_VERSION_HASH = example_interfaces__srv__SetBool_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in srv/SetBool in the package example_interfaces.
typedef struct example_interfaces__srv__SetBool_Request
{
  /// e.g. for hardware enabling / disabling
  bool data;
} example_interfaces__srv__SetBool_Request;

// Struct for a sequence of example_interfaces__srv__SetBool_Request.
typedef struct example_interfaces__srv__SetBool_Request__Sequence
{
  example_interfaces__srv__SetBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__SetBool_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__SetBool_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xc1, 0x2a, 0x24, 0xe5, 0x84, 0xab, 0xec, 0xe4, \
      0x3f, 0xa5, 0x45, 0x8b, 0xbe, 0xb3, 0xf3, 0x54, \
      0xd9, 0x3d, 0x08, 0x3f, 0x99, 0x58, 0xd1, 0x51, \
      0x68, 0xf7, 0x92, 0x4e, 0xf4, 0x0e, 0xba, 0x77, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__SetBool_Response__TYPE_VERSION_HASH = example_interfaces__srv__SetBool_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBool in the package example_interfaces.
typedef struct example_interfaces__srv__SetBool_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} example_interfaces__srv__SetBool_Response;

// Struct for a sequence of example_interfaces__srv__SetBool_Response.
typedef struct example_interfaces__srv__SetBool_Response__Sequence
{
  example_interfaces__srv__SetBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__SetBool_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__SetBool_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xf3, 0x07, 0x6d, 0x30, 0xbf, 0x61, 0xbe, 0xe6, \
      0x4a, 0x80, 0xa4, 0x76, 0x56, 0xf8, 0x5e, 0xbd, \
      0x4c, 0xf2, 0x0b, 0x44, 0x1e, 0xde, 0xf2, 0xa6, \
      0x74, 0x8c, 0xbe, 0x94, 0xac, 0x9b, 0x6c, 0x6e, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__SetBool_Event__TYPE_VERSION_HASH = example_interfaces__srv__SetBool_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  example_interfaces__srv__SetBool_Event__request__MAX_SIZE = 1
};
// response
enum
{
  example_interfaces__srv__SetBool_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetBool in the package example_interfaces.
typedef struct example_interfaces__srv__SetBool_Event
{
  service_msgs__msg__ServiceEventInfo info;
  example_interfaces__srv__SetBool_Request__Sequence request;
  example_interfaces__srv__SetBool_Response__Sequence response;
} example_interfaces__srv__SetBool_Event;

// Struct for a sequence of example_interfaces__srv__SetBool_Event.
typedef struct example_interfaces__srv__SetBool_Event__Sequence
{
  example_interfaces__srv__SetBool_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__SetBool_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_H_
