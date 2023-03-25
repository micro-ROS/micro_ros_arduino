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


static const rosidl_type_hash_t std_srvs__srv__Empty__TYPE_HASH = {1, {
    0x58, 0x88, 0x39, 0x9d, 0xed, 0xec, 0x5c, 0xcc,
    0x85, 0xea, 0x64, 0x51, 0x94, 0x9f, 0xd2, 0xc9,
    0xf9, 0x7b, 0xfd, 0xf9, 0x63, 0xf9, 0xa5, 0x88,
    0x82, 0x16, 0x39, 0xfc, 0xd3, 0x1b, 0x5d, 0x19,
  }};


// Type Hash for interface
static const rosidl_type_hash_t std_srvs__srv__Empty_Request__TYPE_HASH = {1, {
    0x45, 0x8e, 0xaf, 0x20, 0x0a, 0x3f, 0x63, 0xd9,
    0xcc, 0x53, 0xd1, 0x94, 0x36, 0xed, 0xeb, 0xc0,
    0xc1, 0x40, 0xef, 0x4c, 0x93, 0xca, 0x75, 0xd5,
    0xbd, 0x4c, 0xe1, 0x9f, 0xd7, 0x75, 0x9e, 0x35,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t std_srvs__srv__Empty_Response__TYPE_HASH = {1, {
    0x0a, 0x28, 0x58, 0xb3, 0xf6, 0x0d, 0xf6, 0x44,
    0xa6, 0x1d, 0x0f, 0xa4, 0x4c, 0xfc, 0x92, 0x3a,
    0x3d, 0x36, 0x28, 0xe0, 0xad, 0x9c, 0x8a, 0xd8,
    0x53, 0x4b, 0x1a, 0x2c, 0x92, 0xa4, 0x13, 0xdc,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t std_srvs__srv__Empty_Event__TYPE_HASH = {1, {
    0x66, 0xfa, 0x7f, 0xcf, 0xb5, 0xf2, 0xbf, 0x04,
    0xb9, 0xa8, 0xa5, 0x56, 0x03, 0x31, 0x8c, 0x5c,
    0x40, 0x2e, 0xdf, 0xc4, 0xbd, 0x56, 0xbb, 0x0e,
    0xd7, 0xb6, 0x02, 0x99, 0x0c, 0x29, 0x30, 0x5a,
  }};

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
