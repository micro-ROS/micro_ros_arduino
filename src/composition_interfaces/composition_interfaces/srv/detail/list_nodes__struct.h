// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from composition_interfaces:srv/ListNodes.idl
// generated code does not contain a copyright notice

#ifndef COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__STRUCT_H_
#define COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListNodes in the package composition_interfaces.
typedef struct composition_interfaces__srv__ListNodes_Request
{
  uint8_t structure_needs_at_least_one_member;
} composition_interfaces__srv__ListNodes_Request;

// Struct for a sequence of composition_interfaces__srv__ListNodes_Request.
typedef struct composition_interfaces__srv__ListNodes_Request__Sequence
{
  composition_interfaces__srv__ListNodes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition_interfaces__srv__ListNodes_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'full_node_names'
#include "rosidl_runtime_c/string.h"
// Member 'unique_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ListNodes in the package composition_interfaces.
typedef struct composition_interfaces__srv__ListNodes_Response
{
  rosidl_runtime_c__String__Sequence full_node_names;
  /// corresponding unique ids (must have same length as full_node_names).
  rosidl_runtime_c__uint64__Sequence unique_ids;
} composition_interfaces__srv__ListNodes_Response;

// Struct for a sequence of composition_interfaces__srv__ListNodes_Response.
typedef struct composition_interfaces__srv__ListNodes_Response__Sequence
{
  composition_interfaces__srv__ListNodes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition_interfaces__srv__ListNodes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__STRUCT_H_
