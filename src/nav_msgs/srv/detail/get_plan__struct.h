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

#ifdef __cplusplus
}
#endif

#endif  // NAV_MSGS__SRV__DETAIL__GET_PLAN__STRUCT_H_
