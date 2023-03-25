// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_H_
#define NAV_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t nav_msgs__srv__LoadMap__TYPE_HASH = {1, {
    0x1a, 0x19, 0x2a, 0xc5, 0x6c, 0x40, 0xfe, 0xd2,
    0x76, 0x7d, 0xac, 0x26, 0xf0, 0xb3, 0x71, 0x78,
    0x53, 0x72, 0x27, 0x6b, 0xd4, 0x65, 0xc9, 0x02,
    0x67, 0x6d, 0x2d, 0xca, 0x13, 0x5a, 0xae, 0x5a,
  }};


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__LoadMap_Request__TYPE_HASH = {1, {
    0x0f, 0x8f, 0xe3, 0xaa, 0xc4, 0x33, 0xc9, 0x77,
    0xd7, 0xc2, 0xf8, 0xb5, 0x7a, 0xb1, 0xc3, 0xa1,
    0x76, 0x77, 0xe2, 0x48, 0x80, 0xd7, 0x69, 0x19,
    0xb6, 0x9e, 0x42, 0x08, 0xe9, 0x9f, 0x51, 0x32,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'map_url'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadMap in the package nav_msgs.
typedef struct nav_msgs__srv__LoadMap_Request
{
  rosidl_runtime_c__String map_url;
} nav_msgs__srv__LoadMap_Request;

// Struct for a sequence of nav_msgs__srv__LoadMap_Request.
typedef struct nav_msgs__srv__LoadMap_Request__Sequence
{
  nav_msgs__srv__LoadMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__LoadMap_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__LoadMap_Response__TYPE_HASH = {1, {
    0xe7, 0x97, 0x0d, 0xdf, 0x9f, 0x58, 0xe1, 0x0d,
    0x34, 0xb5, 0xea, 0xe6, 0xd2, 0xba, 0xca, 0x31,
    0xb2, 0xb3, 0xe2, 0xf2, 0xfe, 0x6d, 0x08, 0x2b,
    0x3a, 0xae, 0x2a, 0x5f, 0x92, 0x77, 0x7b, 0x2a,
  }};

// Constants defined in the message

/// Constant 'RESULT_SUCCESS'.
enum
{
  nav_msgs__srv__LoadMap_Response__RESULT_SUCCESS = 0
};

/// Constant 'RESULT_MAP_DOES_NOT_EXIST'.
enum
{
  nav_msgs__srv__LoadMap_Response__RESULT_MAP_DOES_NOT_EXIST = 1
};

/// Constant 'RESULT_INVALID_MAP_DATA'.
enum
{
  nav_msgs__srv__LoadMap_Response__RESULT_INVALID_MAP_DATA = 2
};

/// Constant 'RESULT_INVALID_MAP_METADATA'.
enum
{
  nav_msgs__srv__LoadMap_Response__RESULT_INVALID_MAP_METADATA = 3
};

/// Constant 'RESULT_UNDEFINED_FAILURE'.
enum
{
  nav_msgs__srv__LoadMap_Response__RESULT_UNDEFINED_FAILURE = 255
};

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__struct.h"

/// Struct defined in srv/LoadMap in the package nav_msgs.
typedef struct nav_msgs__srv__LoadMap_Response
{
  /// Returned map is only valid if result equals RESULT_SUCCESS
  nav_msgs__msg__OccupancyGrid map;
  uint8_t result;
} nav_msgs__srv__LoadMap_Response;

// Struct for a sequence of nav_msgs__srv__LoadMap_Response.
typedef struct nav_msgs__srv__LoadMap_Response__Sequence
{
  nav_msgs__srv__LoadMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__LoadMap_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__LoadMap_Event__TYPE_HASH = {1, {
    0xa7, 0x90, 0x7d, 0xcb, 0xaf, 0x7a, 0x05, 0x2c,
    0xc9, 0x6c, 0x8c, 0x71, 0x69, 0x92, 0x59, 0x1d,
    0xc0, 0x06, 0xad, 0x26, 0xee, 0x28, 0x41, 0x32,
    0x9a, 0x7e, 0x06, 0xa4, 0xa3, 0x33, 0x39, 0xc7,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav_msgs__srv__LoadMap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav_msgs__srv__LoadMap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LoadMap in the package nav_msgs.
typedef struct nav_msgs__srv__LoadMap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav_msgs__srv__LoadMap_Request__Sequence request;
  nav_msgs__srv__LoadMap_Response__Sequence response;
} nav_msgs__srv__LoadMap_Event;

// Struct for a sequence of nav_msgs__srv__LoadMap_Event.
typedef struct nav_msgs__srv__LoadMap_Event__Sequence
{
  nav_msgs__srv__LoadMap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__LoadMap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__DETAIL__LOAD_MAP__STRUCT_H_
