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

// Struct defined in srv/LoadNode in the package composition_interfaces.
typedef struct composition_interfaces__srv__LoadNode_Request
{
  rosidl_runtime_c__String package_name;
  rosidl_runtime_c__String plugin_name;
  rosidl_runtime_c__String node_name;
  rosidl_runtime_c__String node_namespace;
  uint8_t log_level;
  rosidl_runtime_c__String__Sequence remap_rules;
  rcl_interfaces__msg__Parameter__Sequence parameters;
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


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// Member 'full_node_name'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/LoadNode in the package composition_interfaces.
typedef struct composition_interfaces__srv__LoadNode_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
  rosidl_runtime_c__String full_node_name;
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

#ifdef __cplusplus
}
#endif

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__LOAD_NODE__STRUCT_H_
