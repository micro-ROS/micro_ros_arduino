// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from composition_interfaces:srv/LoadNode.idl
// generated code does not contain a copyright notice

#ifndef COMPOSITION_INTERFACES__SRV__DETAIL__LOAD_NODE__STRUCT_H_
#define COMPOSITION_INTERFACES__SRV__DETAIL__LOAD_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__LoadNode__TYPE_VERSION_HASH__INIT {1, { \
      0x0c, 0x1c, 0xe8, 0x60, 0xb5, 0x30, 0xc1, 0xf7, \
      0xb9, 0x6e, 0x29, 0xd0, 0x8e, 0x6e, 0x55, 0xfa, \
      0xc9, 0x47, 0xbf, 0x9a, 0x98, 0x2c, 0xf6, 0x19, \
      0x36, 0x55, 0xb0, 0x31, 0xc8, 0x0c, 0x5e, 0xd0, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__LoadNode__TYPE_VERSION_HASH = composition_interfaces__srv__LoadNode__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__LoadNode_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xf7, 0x7d, 0xa8, 0xd1, 0x1e, 0x26, 0x1d, 0x82, \
      0x0a, 0xcb, 0xbe, 0xd3, 0x3e, 0xb7, 0xa9, 0x90, \
      0x1b, 0x3d, 0xe2, 0xcf, 0x72, 0x67, 0x2b, 0xa0, \
      0xdd, 0x05, 0x5a, 0x37, 0xb8, 0xc4, 0x47, 0x2b, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__LoadNode_Request__TYPE_VERSION_HASH = composition_interfaces__srv__LoadNode_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'package_name'
// Member 'plugin_name'
// Member 'node_name'
// Member 'node_namespace'
// Member 'remap_rules'
#include "rosidl_runtime_c/string.h"
// Member 'parameters'
// Member 'extra_arguments'
#include "rcl_interfaces/msg/detail/parameter__struct.h"

/// Struct defined in srv/LoadNode in the package composition_interfaces.
typedef struct composition_interfaces__srv__LoadNode_Request
{
  rosidl_runtime_c__String package_name;
  /// A plugin within the ROS package "package_name".
  rosidl_runtime_c__String plugin_name;
  /// The assigned name of the composable node. Leave empty to use the node's
  /// default name.
  rosidl_runtime_c__String node_name;
  /// The assigned namespace of the composable node. Leave empty to use the node's
  /// default namespace.
  rosidl_runtime_c__String node_namespace;
  /// The assigned log level of the composable node. Enum values are found in
  /// message rcl_interfaces/Log.
  uint8_t log_level;
  /// Remapping rules for this composable node.
  ///
  /// For more info about static_remapping rules and their syntax, see
  /// https://design.ros2.org/articles/static_remapping.html
  /// TODO(sloretz) rcl_interfaces message for remap rules?
  rosidl_runtime_c__String__Sequence remap_rules;
  /// The Parameters of this composable node to set.
  rcl_interfaces__msg__Parameter__Sequence parameters;
  /// key/value arguments that are specific to a type of container process.
  rcl_interfaces__msg__Parameter__Sequence extra_arguments;
} composition_interfaces__srv__LoadNode_Request;

// Struct for a sequence of composition_interfaces__srv__LoadNode_Request.
typedef struct composition_interfaces__srv__LoadNode_Request__Sequence
{
  composition_interfaces__srv__LoadNode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition_interfaces__srv__LoadNode_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__LoadNode_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x00, 0xf6, 0xc1, 0x69, 0x2a, 0xc1, 0xe2, 0xfd, \
      0x5c, 0xf3, 0x01, 0xcf, 0xcd, 0x4d, 0x0a, 0xfa, \
      0x36, 0x54, 0xa9, 0x46, 0xf8, 0x76, 0x13, 0x72, \
      0x78, 0x5b, 0xa3, 0xac, 0xfd, 0x1e, 0x29, 0xae, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__LoadNode_Response__TYPE_VERSION_HASH = composition_interfaces__srv__LoadNode_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// Member 'full_node_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadNode in the package composition_interfaces.
typedef struct composition_interfaces__srv__LoadNode_Response
{
  bool success;
  /// Human readable error message if success is false, else empty string.
  rosidl_runtime_c__String error_message;
  /// Name of the loaded composable node (including namespace).
  rosidl_runtime_c__String full_node_name;
  /// A unique identifier for the loaded node.
  uint64_t unique_id;
} composition_interfaces__srv__LoadNode_Response;

// Struct for a sequence of composition_interfaces__srv__LoadNode_Response.
typedef struct composition_interfaces__srv__LoadNode_Response__Sequence
{
  composition_interfaces__srv__LoadNode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition_interfaces__srv__LoadNode_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__LoadNode_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x15, 0x2e, 0xeb, 0x9e, 0x8e, 0xe0, 0x30, 0x2d, \
      0x6b, 0x27, 0x13, 0xf0, 0x3c, 0x3c, 0xb1, 0x8c, \
      0x88, 0x8f, 0x33, 0x94, 0x27, 0x7d, 0x87, 0x60, \
      0xe7, 0x5d, 0xbc, 0x72, 0x30, 0xad, 0xc6, 0xca, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__LoadNode_Event__TYPE_VERSION_HASH = composition_interfaces__srv__LoadNode_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  composition_interfaces__srv__LoadNode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  composition_interfaces__srv__LoadNode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LoadNode in the package composition_interfaces.
typedef struct composition_interfaces__srv__LoadNode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  composition_interfaces__srv__LoadNode_Request__Sequence request;
  composition_interfaces__srv__LoadNode_Response__Sequence response;
} composition_interfaces__srv__LoadNode_Event;

// Struct for a sequence of composition_interfaces__srv__LoadNode_Event.
typedef struct composition_interfaces__srv__LoadNode_Event__Sequence
{
  composition_interfaces__srv__LoadNode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition_interfaces__srv__LoadNode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__LOAD_NODE__STRUCT_H_
