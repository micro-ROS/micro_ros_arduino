// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_srvs:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__TRIGGER__STRUCT_H_
#define STD_SRVS__SRV__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__Trigger__TYPE_VERSION_HASH__INIT {1, { \
      0x49, 0xb0, 0xf2, 0xec, 0x55, 0x92, 0xeb, 0x05, \
      0x0c, 0x13, 0xd0, 0x66, 0x9d, 0x86, 0x56, 0x18, \
      0xbe, 0xba, 0xcd, 0x69, 0x62, 0x9e, 0x1c, 0x69, \
      0x4f, 0x84, 0xa3, 0xad, 0x97, 0x3e, 0x5d, 0xab, \
    }}
static const rosidl_type_hash_t std_srvs__srv__Trigger__TYPE_VERSION_HASH = std_srvs__srv__Trigger__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__Trigger_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x4a, 0x5e, 0x0c, 0x60, 0x29, 0x1d, 0xea, 0x35, \
      0x7f, 0xe8, 0xe4, 0x91, 0xf8, 0xb7, 0xb9, 0xac, \
      0x4c, 0xe4, 0xf0, 0x7d, 0x04, 0x54, 0xf8, 0x41, \
      0x0f, 0x37, 0xdf, 0x72, 0xec, 0xa4, 0x3a, 0x77, \
    }}
static const rosidl_type_hash_t std_srvs__srv__Trigger_Request__TYPE_VERSION_HASH = std_srvs__srv__Trigger_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in srv/Trigger in the package std_srvs.
typedef struct std_srvs__srv__Trigger_Request
{
  uint8_t structure_needs_at_least_one_member;
} std_srvs__srv__Trigger_Request;

// Struct for a sequence of std_srvs__srv__Trigger_Request.
typedef struct std_srvs__srv__Trigger_Request__Sequence
{
  std_srvs__srv__Trigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Trigger_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__Trigger_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x84, 0xe8, 0x2a, 0xeb, 0xbb, 0x64, 0x3a, 0x20, \
      0x3a, 0xf7, 0x4f, 0x19, 0x6d, 0xdd, 0x2f, 0x97, \
      0x26, 0x1d, 0x24, 0x3a, 0xfc, 0xa0, 0xef, 0xb1, \
      0xa8, 0x62, 0x19, 0x83, 0x66, 0xe1, 0x11, 0xe1, \
    }}
static const rosidl_type_hash_t std_srvs__srv__Trigger_Response__TYPE_VERSION_HASH = std_srvs__srv__Trigger_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Trigger in the package std_srvs.
typedef struct std_srvs__srv__Trigger_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages
  rosidl_runtime_c__String message;
} std_srvs__srv__Trigger_Response;

// Struct for a sequence of std_srvs__srv__Trigger_Response.
typedef struct std_srvs__srv__Trigger_Response__Sequence
{
  std_srvs__srv__Trigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Trigger_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__Trigger_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xc5, 0x6e, 0x32, 0xbf, 0xbd, 0x4e, 0xe7, 0x0b, \
      0x2c, 0xef, 0xe1, 0x65, 0xaf, 0x10, 0xe1, 0xf6, \
      0x56, 0x2a, 0x1c, 0x02, 0xb1, 0xa0, 0x9f, 0x36, \
      0x56, 0xa4, 0x77, 0x4d, 0xbe, 0x1a, 0xf2, 0x4c, \
    }}
static const rosidl_type_hash_t std_srvs__srv__Trigger_Event__TYPE_VERSION_HASH = std_srvs__srv__Trigger_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  std_srvs__srv__Trigger_Event__request__MAX_SIZE = 1
};
// response
enum
{
  std_srvs__srv__Trigger_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Trigger in the package std_srvs.
typedef struct std_srvs__srv__Trigger_Event
{
  service_msgs__msg__ServiceEventInfo info;
  std_srvs__srv__Trigger_Request__Sequence request;
  std_srvs__srv__Trigger_Response__Sequence response;
} std_srvs__srv__Trigger_Event;

// Struct for a sequence of std_srvs__srv__Trigger_Event.
typedef struct std_srvs__srv__Trigger_Event__Sequence
{
  std_srvs__srv__Trigger_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Trigger_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__DETAIL__TRIGGER__STRUCT_H_
