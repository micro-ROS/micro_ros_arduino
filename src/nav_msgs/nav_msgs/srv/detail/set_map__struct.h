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

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__DETAIL__SET_MAP__STRUCT_H_
