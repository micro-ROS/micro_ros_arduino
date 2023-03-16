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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__UnloadNode__TYPE_VERSION_HASH__INIT {1, { \
      0x92, 0xfb, 0x5d, 0xed, 0x97, 0xd4, 0xf5, 0x1a, \
      0x56, 0x3c, 0x83, 0xe2, 0xd3, 0x80, 0x4b, 0x8e, \
      0xea, 0x5d, 0xf2, 0xb8, 0xe9, 0x27, 0x81, 0x85, \
      0x91, 0x78, 0x4e, 0x32, 0xb8, 0xda, 0x64, 0x4d, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__UnloadNode__TYPE_VERSION_HASH = composition_interfaces__srv__UnloadNode__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__UnloadNode_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x72, 0xcf, 0x14, 0x76, 0x2b, 0x3c, 0x5a, 0x72, \
      0xba, 0x43, 0x62, 0x98, 0xa1, 0x13, 0xb0, 0x85, \
      0xdf, 0xfb, 0xf8, 0xd7, 0x6c, 0x17, 0x66, 0x2e, \
      0x29, 0x95, 0xac, 0x1e, 0x73, 0xa9, 0x35, 0x9a, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__UnloadNode_Request__TYPE_VERSION_HASH = composition_interfaces__srv__UnloadNode_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__UnloadNode_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xb5, 0x6d, 0xcf, 0xeb, 0x7d, 0x00, 0x6e, 0x73, \
      0x4f, 0x87, 0x06, 0xa5, 0x30, 0x71, 0xec, 0xa3, \
      0x3a, 0xa4, 0x67, 0x4e, 0x93, 0xe2, 0xb5, 0xb8, \
      0x91, 0x72, 0xa5, 0xd7, 0x0d, 0x3c, 0x52, 0xd3, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__UnloadNode_Response__TYPE_VERSION_HASH = composition_interfaces__srv__UnloadNode_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__UnloadNode_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x9c, 0xbe, 0x45, 0xdc, 0x96, 0xd9, 0x07, 0x4a, \
      0x03, 0x5b, 0xb7, 0x17, 0x32, 0x96, 0x3a, 0x41, \
      0xcc, 0xfb, 0x7b, 0x32, 0xa3, 0xf1, 0x0a, 0x56, \
      0xcc, 0x24, 0xfa, 0x2a, 0xc2, 0x7d, 0x4b, 0x66, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__UnloadNode_Event__TYPE_VERSION_HASH = composition_interfaces__srv__UnloadNode_Event__TYPE_VERSION_HASH__INIT;

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
