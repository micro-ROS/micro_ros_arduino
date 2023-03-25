// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:srv/GetMap.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__GET_MAP__STRUCT_H_
#define NAV_MSGS__SRV__DETAIL__GET_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t nav_msgs__srv__GetMap__TYPE_HASH = {1, {
    0xc8, 0xae, 0x77, 0xc9, 0x99, 0x5b, 0x35, 0x54,
    0xb5, 0xba, 0x80, 0xe4, 0xd4, 0xd4, 0x43, 0xf9,
    0x70, 0xac, 0x65, 0x14, 0x31, 0x02, 0xa1, 0xd8,
    0x93, 0xec, 0x24, 0xfc, 0x07, 0xb3, 0x11, 0x47,
  }};


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__GetMap_Request__TYPE_HASH = {1, {
    0xb5, 0x31, 0xe3, 0x02, 0xf1, 0xbd, 0x6a, 0x81,
    0xf8, 0xa5, 0xe0, 0x34, 0x53, 0x26, 0x6c, 0x37,
    0x8b, 0x1f, 0x71, 0x1b, 0x42, 0x96, 0x00, 0x0c,
    0x1c, 0x0f, 0x53, 0xa4, 0x0e, 0x00, 0xa7, 0xc4,
  }};

// Constants defined in the message

/// Struct defined in srv/GetMap in the package nav_msgs.
typedef struct nav_msgs__srv__GetMap_Request
{
  uint8_t structure_needs_at_least_one_member;
} nav_msgs__srv__GetMap_Request;

// Struct for a sequence of nav_msgs__srv__GetMap_Request.
typedef struct nav_msgs__srv__GetMap_Request__Sequence
{
  nav_msgs__srv__GetMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__GetMap_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__GetMap_Response__TYPE_HASH = {1, {
    0x45, 0x24, 0x6f, 0x7a, 0x2f, 0xf0, 0xcb, 0xfa,
    0x46, 0xe1, 0x38, 0x65, 0xd4, 0xb9, 0x59, 0x29,
    0xeb, 0xb6, 0xd2, 0x84, 0x6d, 0x1b, 0x85, 0xa2,
    0x0a, 0xd5, 0x10, 0x30, 0xf4, 0x69, 0x0d, 0xc2,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__struct.h"

/// Struct defined in srv/GetMap in the package nav_msgs.
typedef struct nav_msgs__srv__GetMap_Response
{
  nav_msgs__msg__OccupancyGrid map;
} nav_msgs__srv__GetMap_Response;

// Struct for a sequence of nav_msgs__srv__GetMap_Response.
typedef struct nav_msgs__srv__GetMap_Response__Sequence
{
  nav_msgs__srv__GetMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__GetMap_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__GetMap_Event__TYPE_HASH = {1, {
    0xa7, 0xcc, 0xc2, 0x66, 0xea, 0x47, 0x96, 0x56,
    0x4e, 0x25, 0x31, 0x56, 0x02, 0x4e, 0xf4, 0xe8,
    0x29, 0xdd, 0x3e, 0x3c, 0x42, 0x4f, 0xed, 0x3b,
    0x11, 0xe3, 0x11, 0x8a, 0xab, 0x39, 0x71, 0xd7,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav_msgs__srv__GetMap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav_msgs__srv__GetMap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetMap in the package nav_msgs.
typedef struct nav_msgs__srv__GetMap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav_msgs__srv__GetMap_Request__Sequence request;
  nav_msgs__srv__GetMap_Response__Sequence response;
} nav_msgs__srv__GetMap_Event;

// Struct for a sequence of nav_msgs__srv__GetMap_Event.
typedef struct nav_msgs__srv__GetMap_Event__Sequence
{
  nav_msgs__srv__GetMap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__GetMap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__DETAIL__GET_MAP__STRUCT_H_
