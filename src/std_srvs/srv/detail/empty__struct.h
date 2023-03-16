// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_srvs:srv/Empty.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__DETAIL__EMPTY__STRUCT_H_
#define STD_SRVS__SRV__DETAIL__EMPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__Empty__TYPE_VERSION_HASH__INIT {1, { \
      0x6f, 0x1d, 0x4d, 0x39, 0x52, 0xea, 0xab, 0x67, \
      0x5e, 0x4b, 0x2b, 0xd6, 0x67, 0xa9, 0x86, 0x9b, \
      0x1e, 0xa4, 0x8c, 0x7a, 0xfb, 0x96, 0xc0, 0x0e, \
      0x4a, 0x53, 0x5d, 0xbd, 0xba, 0xad, 0xf7, 0xdf, \
    }}
static const rosidl_type_hash_t std_srvs__srv__Empty__TYPE_VERSION_HASH = std_srvs__srv__Empty__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__Empty_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x78, 0xd2, 0x60, 0x8d, 0xbb, 0xa2, 0xaf, 0xa8, \
      0x0e, 0xf4, 0x17, 0x46, 0x16, 0x89, 0x23, 0x8f, \
      0x85, 0xc2, 0x2a, 0xb7, 0xf8, 0x3d, 0xf0, 0xec, \
      0x11, 0x11, 0x4e, 0x18, 0x61, 0x18, 0x3d, 0x15, \
    }}
static const rosidl_type_hash_t std_srvs__srv__Empty_Request__TYPE_VERSION_HASH = std_srvs__srv__Empty_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in srv/Empty in the package std_srvs.
typedef struct std_srvs__srv__Empty_Request
{
  uint8_t structure_needs_at_least_one_member;
} std_srvs__srv__Empty_Request;

// Struct for a sequence of std_srvs__srv__Empty_Request.
typedef struct std_srvs__srv__Empty_Request__Sequence
{
  std_srvs__srv__Empty_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Empty_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__Empty_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x51, 0xa9, 0x7c, 0xd9, 0xd2, 0xed, 0x3d, 0x2f, \
      0x77, 0x1c, 0x8e, 0x72, 0x2b, 0x90, 0x79, 0xb6, \
      0xc8, 0xb6, 0x08, 0x72, 0x4e, 0x5c, 0xad, 0x1a, \
      0x47, 0xdb, 0xc3, 0x06, 0x9b, 0x23, 0x5e, 0x59, \
    }}
static const rosidl_type_hash_t std_srvs__srv__Empty_Response__TYPE_VERSION_HASH = std_srvs__srv__Empty_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in srv/Empty in the package std_srvs.
typedef struct std_srvs__srv__Empty_Response
{
  uint8_t structure_needs_at_least_one_member;
} std_srvs__srv__Empty_Response;

// Struct for a sequence of std_srvs__srv__Empty_Response.
typedef struct std_srvs__srv__Empty_Response__Sequence
{
  std_srvs__srv__Empty_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Empty_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define std_srvs__srv__Empty_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xf6, 0x55, 0xf8, 0x6e, 0x3d, 0x05, 0x7f, 0x2b, \
      0x10, 0x7a, 0x7e, 0xf1, 0x9c, 0x84, 0x8f, 0x43, \
      0x60, 0xe5, 0xd5, 0xdf, 0x8a, 0x3d, 0xca, 0xe0, \
      0x17, 0x30, 0x36, 0xf4, 0xb3, 0x8b, 0xd7, 0xd2, \
    }}
static const rosidl_type_hash_t std_srvs__srv__Empty_Event__TYPE_VERSION_HASH = std_srvs__srv__Empty_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  std_srvs__srv__Empty_Event__request__MAX_SIZE = 1
};
// response
enum
{
  std_srvs__srv__Empty_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Empty in the package std_srvs.
typedef struct std_srvs__srv__Empty_Event
{
  service_msgs__msg__ServiceEventInfo info;
  std_srvs__srv__Empty_Request__Sequence request;
  std_srvs__srv__Empty_Response__Sequence response;
} std_srvs__srv__Empty_Event;

// Struct for a sequence of std_srvs__srv__Empty_Event.
typedef struct std_srvs__srv__Empty_Event__Sequence
{
  std_srvs__srv__Empty_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_srvs__srv__Empty_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__SRV__DETAIL__EMPTY__STRUCT_H_
