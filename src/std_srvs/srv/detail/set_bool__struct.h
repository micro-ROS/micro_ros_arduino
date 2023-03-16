// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_srvs:srv/SetBool.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__SET_BOOL__STRUCT_H_
#define STD_SRVS__SRV__DETAIL__SET_BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__SetBool__TYPE_VERSION_HASH__INIT {1, { \
      0x7d, 0xae, 0xe3, 0x44, 0xab, 0x6f, 0x22, 0x53, \
      0x81, 0x41, 0x61, 0x21, 0xf6, 0x21, 0x7a, 0x2c, \
      0xe3, 0x02, 0x7f, 0x0b, 0x0a, 0x52, 0x41, 0x96, \
      0x92, 0x1f, 0x3a, 0x4d, 0x8b, 0xf2, 0xbd, 0x3f, \
    }}
static const rosidl_type_hash_t std_srvs__srv__SetBool__TYPE_VERSION_HASH = std_srvs__srv__SetBool__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__SetBool_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xc0, 0x22, 0xed, 0xbf, 0x8c, 0x5f, 0x1e, 0xab, \
      0x4a, 0xdf, 0xe3, 0x89, 0xb5, 0x18, 0x6b, 0x38, \
      0x96, 0xe7, 0x9b, 0x7f, 0xec, 0xea, 0xba, 0xc5, \
      0x75, 0x5e, 0x97, 0x10, 0x1a, 0x2a, 0xfb, 0x6b, \
    }}
static const rosidl_type_hash_t std_srvs__srv__SetBool_Request__TYPE_VERSION_HASH = std_srvs__srv__SetBool_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in srv/SetBool in the package std_srvs.
typedef struct std_srvs__srv__SetBool_Request
{
  /// e.g. for hardware enabling / disabling
  bool data;
} std_srvs__srv__SetBool_Request;

// Struct for a sequence of std_srvs__srv__SetBool_Request.
typedef struct std_srvs__srv__SetBool_Request__Sequence
{
  std_srvs__srv__SetBool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetBool_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__SetBool_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x17, 0xa1, 0x5a, 0x5c, 0x8c, 0x07, 0xd9, 0x4b, \
      0x03, 0x18, 0xc2, 0xc6, 0x07, 0xaa, 0x84, 0xca, \
      0xa5, 0xd1, 0x50, 0x31, 0x2b, 0x65, 0x74, 0x95, \
      0xbf, 0xdf, 0x7c, 0x7f, 0x96, 0x1d, 0x44, 0x78, \
    }}
static const rosidl_type_hash_t std_srvs__srv__SetBool_Response__TYPE_VERSION_HASH = std_srvs__srv__SetBool_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBool in the package std_srvs.
typedef struct std_srvs__srv__SetBool_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} std_srvs__srv__SetBool_Response;

// Struct for a sequence of std_srvs__srv__SetBool_Response.
typedef struct std_srvs__srv__SetBool_Response__Sequence
{
  std_srvs__srv__SetBool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetBool_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__SetBool_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xe4, 0xd6, 0x75, 0xd3, 0x8a, 0x88, 0xed, 0x38, \
      0xe7, 0x8c, 0xd1, 0x73, 0x11, 0x53, 0x56, 0x3b, \
      0x36, 0x5a, 0xc4, 0x9c, 0x0e, 0x83, 0x9a, 0x6e, \
      0xf5, 0x6f, 0x57, 0xcf, 0x3d, 0x95, 0x9c, 0x6d, \
    }}
static const rosidl_type_hash_t std_srvs__srv__SetBool_Event__TYPE_VERSION_HASH = std_srvs__srv__SetBool_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  std_srvs__srv__SetBool_Event__request__MAX_SIZE = 1
};
// response
enum
{
  std_srvs__srv__SetBool_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetBool in the package std_srvs.
typedef struct std_srvs__srv__SetBool_Event
{
  service_msgs__msg__ServiceEventInfo info;
  std_srvs__srv__SetBool_Request__Sequence request;
  std_srvs__srv__SetBool_Response__Sequence response;
} std_srvs__srv__SetBool_Event;

// Struct for a sequence of std_srvs__srv__SetBool_Event.
typedef struct std_srvs__srv__SetBool_Event__Sequence
{
  std_srvs__srv__SetBool_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__SetBool_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__DETAIL__SET_BOOL__STRUCT_H_
