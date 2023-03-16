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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__GetMap__TYPE_VERSION_HASH__INIT {1, { \
      0x77, 0x92, 0xa4, 0xb6, 0x1d, 0x62, 0x51, 0x04, \
      0xa4, 0xb0, 0x18, 0xf1, 0xb0, 0xe3, 0x0d, 0x38, \
      0x03, 0x0b, 0x74, 0xe5, 0x19, 0xc0, 0x11, 0x69, \
      0x14, 0xb5, 0xae, 0xdb, 0xdc, 0x4b, 0x80, 0x44, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__GetMap__TYPE_VERSION_HASH = nav_msgs__srv__GetMap__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__GetMap_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x6b, 0x4d, 0xca, 0x8e, 0x0a, 0xcf, 0x64, 0x86, \
      0xd2, 0x5f, 0x0a, 0xf9, 0x87, 0xa3, 0x94, 0x4c, \
      0xcd, 0x44, 0x26, 0x32, 0xf6, 0x68, 0x36, 0x36, \
      0xef, 0xed, 0x27, 0x38, 0xcb, 0x40, 0xa0, 0x6f, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__GetMap_Request__TYPE_VERSION_HASH = nav_msgs__srv__GetMap_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__GetMap_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xab, 0x8c, 0x21, 0x78, 0x88, 0x27, 0x97, 0xeb, \
      0x6b, 0xda, 0xbc, 0x4c, 0x52, 0x29, 0x12, 0x1d, \
      0xac, 0x77, 0x0e, 0xef, 0xa7, 0xa7, 0xc3, 0x61, \
      0x37, 0xb1, 0x1a, 0x53, 0xdd, 0xae, 0x50, 0x5a, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__GetMap_Response__TYPE_VERSION_HASH = nav_msgs__srv__GetMap_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__GetMap_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x0f, 0x96, 0xb8, 0xaa, 0xd1, 0x7a, 0x17, 0x1f, \
      0xfb, 0x9b, 0x60, 0xdf, 0x5e, 0x20, 0x19, 0x01, \
      0x14, 0xf5, 0x8f, 0xc8, 0x23, 0x7d, 0xe5, 0x46, \
      0x22, 0x65, 0x84, 0xc7, 0xd0, 0x86, 0x99, 0xff, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__GetMap_Event__TYPE_VERSION_HASH = nav_msgs__srv__GetMap_Event__TYPE_VERSION_HASH__INIT;

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
