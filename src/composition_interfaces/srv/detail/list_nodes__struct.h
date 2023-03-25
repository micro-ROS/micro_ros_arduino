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

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t composition_interfaces__srv__ListNodes__TYPE_HASH = {1, {
    0x13, 0xf3, 0x0d, 0x73, 0xa7, 0x4c, 0x84, 0x4e,
    0xe4, 0xba, 0xcf, 0x78, 0xf3, 0x68, 0x0f, 0x08,
    0x77, 0x7c, 0xad, 0x13, 0x7f, 0x10, 0xfb, 0xd6,
    0xa6, 0x48, 0x54, 0x4c, 0xc7, 0xb5, 0x9d, 0x2a,
  }};


// Type Hash for interface
static const rosidl_type_hash_t composition_interfaces__srv__ListNodes_Request__TYPE_HASH = {1, {
    0x57, 0xc8, 0x79, 0xa1, 0x82, 0x5b, 0x3f, 0xa1,
    0x5f, 0xd5, 0x8e, 0x70, 0xd2, 0xe7, 0x32, 0x23,
    0xaf, 0x6b, 0x9c, 0x45, 0xc7, 0xae, 0x10, 0x4c,
    0xc1, 0x07, 0xe7, 0x34, 0x64, 0xd3, 0xa7, 0x24,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t composition_interfaces__srv__ListNodes_Response__TYPE_HASH = {1, {
    0xb7, 0xcd, 0x84, 0x01, 0xae, 0xdc, 0xd8, 0x5c,
    0x4c, 0xed, 0xce, 0x38, 0x49, 0x44, 0x00, 0x1d,
    0x5c, 0x1a, 0xb6, 0x11, 0xe0, 0x16, 0x4a, 0x82,
    0x07, 0x04, 0x5c, 0xfc, 0xaf, 0x4a, 0x25, 0x84,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t composition_interfaces__srv__ListNodes_Event__TYPE_HASH = {1, {
    0x84, 0x3a, 0xd4, 0xc8, 0x00, 0x92, 0x06, 0x0d,
    0x68, 0xdb, 0xf8, 0x00, 0x8c, 0xe5, 0x33, 0x54,
    0x31, 0x4d, 0x98, 0x25, 0x7c, 0xdd, 0xdd, 0xaf,
    0x55, 0xdf, 0x03, 0xab, 0xd7, 0x32, 0x1b, 0x38,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  composition_interfaces__srv__ListNodes_Event__request__MAX_SIZE = 1
};
// response
enum
{
  composition_interfaces__srv__ListNodes_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ListNodes in the package composition_interfaces.
typedef struct composition_interfaces__srv__ListNodes_Event
{
  service_msgs__msg__ServiceEventInfo info;
  composition_interfaces__srv__ListNodes_Request__Sequence request;
  composition_interfaces__srv__ListNodes_Response__Sequence response;
} composition_interfaces__srv__ListNodes_Event;

// Struct for a sequence of composition_interfaces__srv__ListNodes_Event.
typedef struct composition_interfaces__srv__ListNodes_Event__Sequence
{
  composition_interfaces__srv__ListNodes_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition_interfaces__srv__ListNodes_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__LIST_NODES__STRUCT_H_
