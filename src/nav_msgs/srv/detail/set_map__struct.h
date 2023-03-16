// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:srv/SetMap.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__SET_MAP__STRUCT_H_
#define NAV_MSGS__SRV__DETAIL__SET_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__SetMap__TYPE_VERSION_HASH__INIT {1, { \
      0x21, 0xa8, 0x3c, 0xc7, 0x1a, 0x55, 0x7b, 0x4a, \
      0x25, 0x16, 0xd8, 0x3d, 0x94, 0xa2, 0x9b, 0x38, \
      0x9e, 0x34, 0xc4, 0xd3, 0xd4, 0x8e, 0x4f, 0x70, \
      0x03, 0x2e, 0x2e, 0x3c, 0x70, 0x21, 0xc5, 0x2c, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__SetMap__TYPE_VERSION_HASH = nav_msgs__srv__SetMap__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__SetMap_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x08, 0x60, 0x85, 0x59, 0xd1, 0xcf, 0x15, 0xe8, \
      0xb0, 0xd1, 0xd5, 0x6f, 0xbc, 0x98, 0x75, 0x07, \
      0x82, 0xa8, 0x9a, 0xf3, 0xe1, 0x17, 0x77, 0x6b, \
      0xc2, 0xa6, 0x32, 0x53, 0xb4, 0x8d, 0xf0, 0xc7, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__SetMap_Request__TYPE_VERSION_HASH = nav_msgs__srv__SetMap_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__struct.h"
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.h"

/// Struct defined in srv/SetMap in the package nav_msgs.
typedef struct nav_msgs__srv__SetMap_Request
{
  /// Requested 2D map to be set.
  nav_msgs__msg__OccupancyGrid map;
  /// Estimated initial pose when setting new map.
  geometry_msgs__msg__PoseWithCovarianceStamped initial_pose;
} nav_msgs__srv__SetMap_Request;

// Struct for a sequence of nav_msgs__srv__SetMap_Request.
typedef struct nav_msgs__srv__SetMap_Request__Sequence
{
  nav_msgs__srv__SetMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__SetMap_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__SetMap_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xf1, 0xd0, 0x70, 0x8d, 0x0f, 0xcd, 0xd0, 0xc3, \
      0x17, 0xe9, 0x34, 0x54, 0xa5, 0x70, 0x57, 0xef, \
      0xbb, 0x6c, 0x5c, 0x23, 0xa8, 0x58, 0x91, 0x45, \
      0x69, 0x6d, 0xa4, 0xfa, 0x3a, 0xda, 0x2a, 0xfd, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__SetMap_Response__TYPE_VERSION_HASH = nav_msgs__srv__SetMap_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in srv/SetMap in the package nav_msgs.
typedef struct nav_msgs__srv__SetMap_Response
{
  /// True if the map was successfully set, false otherwise.
  bool success;
} nav_msgs__srv__SetMap_Response;

// Struct for a sequence of nav_msgs__srv__SetMap_Response.
typedef struct nav_msgs__srv__SetMap_Response__Sequence
{
  nav_msgs__srv__SetMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__SetMap_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__SetMap_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x21, 0x4f, 0x27, 0xad, 0x3c, 0xee, 0x23, 0x39, \
      0x4a, 0x1f, 0xa7, 0x34, 0x95, 0xa8, 0x90, 0xda, \
      0xc7, 0x2f, 0x47, 0x25, 0x6d, 0x0b, 0xe9, 0xc4, \
      0x95, 0x8c, 0x60, 0x51, 0x7e, 0xa3, 0x4c, 0x28, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__SetMap_Event__TYPE_VERSION_HASH = nav_msgs__srv__SetMap_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav_msgs__srv__SetMap_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav_msgs__srv__SetMap_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetMap in the package nav_msgs.
typedef struct nav_msgs__srv__SetMap_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav_msgs__srv__SetMap_Request__Sequence request;
  nav_msgs__srv__SetMap_Response__Sequence response;
} nav_msgs__srv__SetMap_Event;

// Struct for a sequence of nav_msgs__srv__SetMap_Event.
typedef struct nav_msgs__srv__SetMap_Event__Sequence
{
  nav_msgs__srv__SetMap_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__SetMap_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__DETAIL__SET_MAP__STRUCT_H_
