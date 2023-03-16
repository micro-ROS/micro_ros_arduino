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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__LoadMap__TYPE_VERSION_HASH__INIT {1, { \
      0x52, 0xc5, 0x1a, 0x81, 0x15, 0xa2, 0xe5, 0xa2, \
      0x1f, 0x66, 0x52, 0x75, 0x8a, 0x1a, 0xf6, 0xb9, \
      0x16, 0x58, 0x01, 0x75, 0xe2, 0x68, 0xfb, 0x56, \
      0x07, 0x26, 0x7e, 0x94, 0x8f, 0x6e, 0xa6, 0xec, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__LoadMap__TYPE_VERSION_HASH = nav_msgs__srv__LoadMap__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__LoadMap_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x1c, 0xb9, 0xbd, 0xe6, 0x55, 0x25, 0x0c, 0x27, \
      0xcd, 0xc5, 0xf6, 0x58, 0x35, 0x90, 0xc2, 0xd4, \
      0x70, 0x86, 0x37, 0xcf, 0xda, 0x2b, 0xfe, 0xeb, \
      0xe0, 0x4c, 0xe3, 0x0c, 0x21, 0xf9, 0x98, 0x4c, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__LoadMap_Request__TYPE_VERSION_HASH = nav_msgs__srv__LoadMap_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__LoadMap_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xb7, 0x3c, 0xee, 0x4a, 0x0a, 0xe9, 0x77, 0x85, \
      0x5f, 0xd0, 0x2f, 0xd6, 0x7d, 0xeb, 0x54, 0xdb, \
      0x4e, 0xbf, 0x26, 0x09, 0xaa, 0x02, 0xbf, 0xbc, \
      0x18, 0x95, 0xbf, 0x15, 0x45, 0x11, 0x70, 0xfb, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__LoadMap_Response__TYPE_VERSION_HASH = nav_msgs__srv__LoadMap_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__LoadMap_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x7c, 0x37, 0x80, 0xc4, 0x53, 0x49, 0x04, 0xcd, \
      0x07, 0x15, 0x19, 0x0e, 0x8a, 0x15, 0x46, 0x2a, \
      0x4e, 0xf3, 0xc4, 0x85, 0xc0, 0xaf, 0x8b, 0xfd, \
      0xdf, 0xeb, 0x00, 0xfd, 0xdb, 0xaf, 0xb9, 0xa5, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__LoadMap_Event__TYPE_VERSION_HASH = nav_msgs__srv__LoadMap_Event__TYPE_VERSION_HASH__INIT;

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
