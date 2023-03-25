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


static const rosidl_type_hash_t nav_msgs__srv__SetMap__TYPE_HASH = {1, {
    0x5e, 0x11, 0xa5, 0xb2, 0xca, 0x53, 0xd8, 0xae,
    0x85, 0xb6, 0x66, 0xa0, 0x19, 0xf1, 0x6c, 0x99,
    0x04, 0xeb, 0xc7, 0x87, 0x82, 0x8f, 0x1f, 0x56,
    0x6c, 0x4e, 0x04, 0x8a, 0x1d, 0xde, 0xdf, 0xb4,
  }};


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__SetMap_Request__TYPE_HASH = {1, {
    0x5a, 0x83, 0xa0, 0xc2, 0x0a, 0xf4, 0xd7, 0x92,
    0x48, 0xfc, 0x32, 0x87, 0x52, 0x4b, 0xf3, 0x58,
    0xb6, 0x03, 0xfb, 0x5a, 0x05, 0x81, 0x8b, 0x5e,
    0xc8, 0x5b, 0x50, 0xfa, 0x6e, 0x5d, 0x02, 0x66,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__SetMap_Response__TYPE_HASH = {1, {
    0xe7, 0x25, 0x18, 0x79, 0x32, 0x2c, 0x7b, 0x12,
    0x28, 0x5b, 0x9c, 0x19, 0x1d, 0x68, 0xd2, 0x74,
    0x95, 0xb6, 0xde, 0xde, 0x05, 0x1f, 0x3c, 0xd7,
    0x9b, 0x0b, 0xf3, 0x34, 0x14, 0x7b, 0x73, 0x75,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__SetMap_Event__TYPE_HASH = {1, {
    0x68, 0x37, 0x1c, 0x7e, 0x20, 0xb5, 0xf0, 0x4c,
    0x60, 0x58, 0x1c, 0x63, 0xc6, 0x76, 0xa0, 0x33,
    0xf4, 0x53, 0x0b, 0xeb, 0x50, 0x7d, 0xbb, 0x88,
    0x73, 0x2c, 0xdd, 0x57, 0x50, 0xd6, 0x0d, 0x7f,
  }};

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
