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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__GetPlan__TYPE_VERSION_HASH__INIT {1, { \
      0x9a, 0x1f, 0x8c, 0x37, 0xe7, 0xf1, 0xba, 0xa9, \
      0xa1, 0x6e, 0x57, 0x66, 0x9b, 0x1d, 0x71, 0xdb, \
      0xa1, 0xe3, 0x04, 0x22, 0x3b, 0x7e, 0xb5, 0x67, \
      0x2e, 0x28, 0xa9, 0x20, 0x54, 0x7c, 0x1c, 0x3c, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__GetPlan__TYPE_VERSION_HASH = nav_msgs__srv__GetPlan__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__GetPlan_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xbc, 0xa1, 0x3b, 0x7e, 0x20, 0x11, 0x78, 0xf7, \
      0xe3, 0x5b, 0xd9, 0xde, 0x71, 0x40, 0xeb, 0x55, \
      0x0c, 0xdb, 0xec, 0x02, 0x86, 0x04, 0xfc, 0x38, \
      0x9d, 0xcd, 0xdd, 0xd3, 0x06, 0x8a, 0x00, 0x98, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__GetPlan_Request__TYPE_VERSION_HASH = nav_msgs__srv__GetPlan_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__GetPlan_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x27, 0x77, 0x6a, 0x5b, 0x17, 0x7c, 0x6d, 0x5e, \
      0x52, 0xdb, 0x3f, 0xc1, 0x03, 0x2c, 0xeb, 0x32, \
      0x54, 0x84, 0x66, 0x9d, 0xb2, 0xfc, 0xbe, 0x8e, \
      0x74, 0x8a, 0xfd, 0x39, 0x7f, 0xa6, 0xf5, 0x08, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__GetPlan_Response__TYPE_VERSION_HASH = nav_msgs__srv__GetPlan_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define nav_msgs__srv__GetPlan_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x4e, 0x58, 0x47, 0x77, 0x30, 0x62, 0xb1, 0x1b, \
      0x34, 0x8c, 0x5b, 0x01, 0xb1, 0x0c, 0xba, 0x8e, \
      0x83, 0x87, 0x0f, 0x4b, 0x83, 0x1d, 0x0a, 0x17, \
      0x12, 0x3d, 0x3a, 0x84, 0x14, 0xb1, 0x60, 0xb4, \
    }}
static const rosidl_type_hash_t nav_msgs__srv__GetPlan_Event__TYPE_VERSION_HASH = nav_msgs__srv__GetPlan_Event__TYPE_VERSION_HASH__INIT;

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
