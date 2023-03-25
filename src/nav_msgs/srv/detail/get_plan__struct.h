// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_H_
#define NAV_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t nav_msgs__srv__GetPlan__TYPE_HASH = {1, {
    0x23, 0x4f, 0x7a, 0xff, 0x10, 0x0f, 0x5e, 0xdb,
    0x81, 0x50, 0x36, 0x66, 0x01, 0x68, 0x7b, 0x02,
    0x7b, 0xcd, 0xc2, 0x53, 0xdb, 0x47, 0xde, 0xcb,
    0x88, 0xff, 0xf8, 0x46, 0x19, 0x3f, 0xe5, 0xe8,
  }};


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__GetPlan_Request__TYPE_HASH = {1, {
    0xf1, 0xbb, 0x9f, 0xab, 0x28, 0x79, 0x48, 0xb4,
    0x43, 0x2a, 0x4a, 0x7e, 0x4f, 0x52, 0x9e, 0x7e,
    0xa6, 0x26, 0x9c, 0xd0, 0x62, 0x69, 0xee, 0x8f,
    0xcb, 0x91, 0x1f, 0xdb, 0x4a, 0xcd, 0x23, 0xc3,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/GetPlan in the package nav_msgs.
typedef struct nav_msgs__srv__GetPlan_Request
{
  /// The start pose for the plan
  geometry_msgs__msg__PoseStamped start;
  /// The final pose of the goal position
  geometry_msgs__msg__PoseStamped goal;
  /// If the goal is obstructed, how many meters the planner can
  /// relax the constraint in x and y before failing.
  float tolerance;
} nav_msgs__srv__GetPlan_Request;

// Struct for a sequence of nav_msgs__srv__GetPlan_Request.
typedef struct nav_msgs__srv__GetPlan_Request__Sequence
{
  nav_msgs__srv__GetPlan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__GetPlan_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__GetPlan_Response__TYPE_HASH = {1, {
    0x30, 0xa9, 0x47, 0xcd, 0x36, 0x07, 0x77, 0x92,
    0x90, 0x73, 0x29, 0x6c, 0x36, 0x8c, 0x59, 0x1d,
    0xc2, 0x11, 0x7a, 0x89, 0xc1, 0x5b, 0x7a, 0x97,
    0x5a, 0x6f, 0xaa, 0x0a, 0x90, 0x18, 0x36, 0xfd,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'plan'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in srv/GetPlan in the package nav_msgs.
typedef struct nav_msgs__srv__GetPlan_Response
{
  nav_msgs__msg__Path plan;
} nav_msgs__srv__GetPlan_Response;

// Struct for a sequence of nav_msgs__srv__GetPlan_Response.
typedef struct nav_msgs__srv__GetPlan_Response__Sequence
{
  nav_msgs__srv__GetPlan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__GetPlan_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t nav_msgs__srv__GetPlan_Event__TYPE_HASH = {1, {
    0x25, 0x50, 0xc2, 0xe3, 0x2e, 0x7e, 0xe2, 0x4d,
    0x48, 0x06, 0xe1, 0x08, 0x47, 0x95, 0x8e, 0x1f,
    0xc3, 0x7e, 0x26, 0x31, 0xa6, 0x3d, 0xd8, 0x3f,
    0x55, 0x12, 0xfa, 0x02, 0xac, 0x0c, 0xdd, 0xa5,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  nav_msgs__srv__GetPlan_Event__request__MAX_SIZE = 1
};
// response
enum
{
  nav_msgs__srv__GetPlan_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetPlan in the package nav_msgs.
typedef struct nav_msgs__srv__GetPlan_Event
{
  service_msgs__msg__ServiceEventInfo info;
  nav_msgs__srv__GetPlan_Request__Sequence request;
  nav_msgs__srv__GetPlan_Response__Sequence response;
} nav_msgs__srv__GetPlan_Event;

// Struct for a sequence of nav_msgs__srv__GetPlan_Event.
typedef struct nav_msgs__srv__GetPlan_Event__Sequence
{
  nav_msgs__srv__GetPlan_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_msgs__srv__GetPlan_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_H_
