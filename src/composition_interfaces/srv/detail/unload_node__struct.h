// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from composition_interfaces:srv/UnloadNode.idl
// generated code does not contain a copyright notice

#ifndef COMPOSITION_INTERFACES__SRV__DETAIL__UNLOAD_NODE__STRUCT_H_
#define COMPOSITION_INTERFACES__SRV__DETAIL__UNLOAD_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t composition_interfaces__srv__UnloadNode__TYPE_HASH = {1, {
    0xdc, 0xe5, 0x62, 0xf8, 0x3a, 0xdc, 0x73, 0x5d,
    0xdc, 0xfe, 0x9d, 0xfb, 0x92, 0x7b, 0x89, 0x29,
    0x3d, 0x4d, 0xd0, 0xfe, 0x2b, 0x8f, 0xc9, 0x1e,
    0x77, 0x2f, 0xb8, 0x3e, 0x97, 0x0a, 0x43, 0xb0,
  }};


// Type Hash for interface
static const rosidl_type_hash_t composition_interfaces__srv__UnloadNode_Request__TYPE_HASH = {1, {
    0x95, 0xd5, 0xcf, 0xc3, 0x57, 0x95, 0x67, 0x40,
    0x19, 0x0c, 0x76, 0x85, 0xac, 0x86, 0x8d, 0x9c,
    0x7c, 0x98, 0xdc, 0xb8, 0xc1, 0x41, 0x6a, 0xae,
    0x8e, 0xaa, 0x35, 0x14, 0x22, 0x07, 0x4e, 0x12,
  }};

// Constants defined in the message

/// Struct defined in srv/UnloadNode in the package composition_interfaces.
typedef struct composition_interfaces__srv__UnloadNode_Request
{
  uint64_t unique_id;
} composition_interfaces__srv__UnloadNode_Request;

// Struct for a sequence of composition_interfaces__srv__UnloadNode_Request.
typedef struct composition_interfaces__srv__UnloadNode_Request__Sequence
{
  composition_interfaces__srv__UnloadNode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition_interfaces__srv__UnloadNode_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t composition_interfaces__srv__UnloadNode_Response__TYPE_HASH = {1, {
    0xfa, 0x7f, 0xc3, 0x8f, 0x92, 0x06, 0x22, 0x0a,
    0x6b, 0xc1, 0x55, 0x8a, 0x3c, 0x01, 0x92, 0x69,
    0xe5, 0xaa, 0x59, 0x2f, 0x7f, 0xae, 0x01, 0xdf,
    0xfb, 0xd1, 0x9f, 0x56, 0xeb, 0x86, 0xd5, 0x99,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UnloadNode in the package composition_interfaces.
typedef struct composition_interfaces__srv__UnloadNode_Response
{
  bool success;
  /// Human readable error message if success is false, else empty string.
  rosidl_runtime_c__String error_message;
} composition_interfaces__srv__UnloadNode_Response;

// Struct for a sequence of composition_interfaces__srv__UnloadNode_Response.
typedef struct composition_interfaces__srv__UnloadNode_Response__Sequence
{
  composition_interfaces__srv__UnloadNode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition_interfaces__srv__UnloadNode_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t composition_interfaces__srv__UnloadNode_Event__TYPE_HASH = {1, {
    0x44, 0x8a, 0x52, 0x5d, 0xf1, 0x40, 0x6f, 0x0c,
    0x3d, 0xc6, 0x53, 0xb0, 0x3c, 0x68, 0xcb, 0x80,
    0xd5, 0xc6, 0x7c, 0xff, 0x48, 0xa8, 0x00, 0x6a,
    0x65, 0xf7, 0x6f, 0x13, 0xe2, 0x3e, 0x29, 0xcf,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  composition_interfaces__srv__UnloadNode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  composition_interfaces__srv__UnloadNode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/UnloadNode in the package composition_interfaces.
typedef struct composition_interfaces__srv__UnloadNode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  composition_interfaces__srv__UnloadNode_Request__Sequence request;
  composition_interfaces__srv__UnloadNode_Response__Sequence response;
} composition_interfaces__srv__UnloadNode_Event;

// Struct for a sequence of composition_interfaces__srv__UnloadNode_Event.
typedef struct composition_interfaces__srv__UnloadNode_Event__Sequence
{
  composition_interfaces__srv__UnloadNode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} composition_interfaces__srv__UnloadNode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMPOSITION_INTERFACES__SRV__DETAIL__UNLOAD_NODE__STRUCT_H_
