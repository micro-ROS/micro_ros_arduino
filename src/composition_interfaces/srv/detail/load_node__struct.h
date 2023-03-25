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


static const rosidl_type_hash_t composition_interfaces__srv__LoadNode__TYPE_HASH = {1, {
    0x2e, 0x52, 0x1e, 0xf6, 0x06, 0x6f, 0xba, 0x6d,
    0x7f, 0xc3, 0xa3, 0xb1, 0x75, 0xd4, 0x86, 0x70,
    0x9f, 0x01, 0xb4, 0xd7, 0x38, 0xd9, 0xa5, 0x91,
    0x88, 0x85, 0x85, 0x46, 0xfc, 0x8e, 0x5a, 0xcd,
  }};


// Type Hash for interface
static const rosidl_type_hash_t composition_interfaces__srv__LoadNode_Request__TYPE_HASH = {1, {
    0x7d, 0x34, 0x96, 0x17, 0x5f, 0x54, 0xf9, 0x2d,
    0x65, 0x25, 0x47, 0xe1, 0x44, 0xc9, 0xb2, 0xa3,
    0xb2, 0x2a, 0xfd, 0x60, 0x4f, 0x84, 0xed, 0x70,
    0xad, 0xfc, 0xd1, 0xcf, 0xe3, 0x58, 0x01, 0xb5,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t composition_interfaces__srv__LoadNode_Response__TYPE_HASH = {1, {
    0x08, 0xcd, 0xf9, 0x42, 0xef, 0xab, 0xec, 0x24,
    0x48, 0xfd, 0x03, 0xc1, 0x31, 0xf3, 0x62, 0x7a,
    0x33, 0xed, 0x05, 0x37, 0x64, 0x00, 0x61, 0x24,
    0x25, 0xf8, 0x71, 0xfe, 0xb8, 0x7c, 0xa9, 0xfd,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t composition_interfaces__srv__LoadNode_Event__TYPE_HASH = {1, {
    0xdb, 0x27, 0x6d, 0x4e, 0xb3, 0x14, 0x43, 0xe4,
    0xd3, 0x0c, 0xfb, 0x4b, 0x0c, 0x01, 0xbc, 0xd2,
    0x2a, 0xf2, 0x7f, 0xc9, 0x5b, 0xe8, 0xe1, 0xba,
    0x2c, 0xc5, 0x6d, 0x77, 0x72, 0x21, 0x9c, 0xd2,
  }};

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
