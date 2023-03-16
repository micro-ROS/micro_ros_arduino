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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__ListNodes__TYPE_VERSION_HASH__INIT {1, { \
      0xb3, 0x9e, 0x21, 0x65, 0x7e, 0x7b, 0x96, 0x0c, \
      0xfd, 0x01, 0x2f, 0xa7, 0xcf, 0xa1, 0x70, 0x20, \
      0xfa, 0xf3, 0x3e, 0x25, 0xef, 0x87, 0xb9, 0x77, \
      0x58, 0x3c, 0xa2, 0x7f, 0xaf, 0x67, 0x0a, 0x58, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__ListNodes__TYPE_VERSION_HASH = composition_interfaces__srv__ListNodes__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__ListNodes_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xf5, 0x6b, 0xba, 0xce, 0x63, 0x97, 0xe0, 0x6f, \
      0xf2, 0xe9, 0x48, 0xd9, 0xf7, 0xe4, 0xd8, 0x13, \
      0x5c, 0xd1, 0x37, 0xa8, 0x7f, 0x50, 0x91, 0x92, \
      0x69, 0xa8, 0x4c, 0xa6, 0xe3, 0xcb, 0x05, 0x6c, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__ListNodes_Request__TYPE_VERSION_HASH = composition_interfaces__srv__ListNodes_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__ListNodes_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x98, 0x76, 0xed, 0xcf, 0x4c, 0xc2, 0x4c, 0xcb, \
      0x43, 0xe5, 0xfe, 0x6a, 0x47, 0x0c, 0x99, 0x39, \
      0xb9, 0xdf, 0x93, 0x90, 0x42, 0x4b, 0x18, 0x42, \
      0xcf, 0x5d, 0x51, 0x5d, 0xaf, 0xeb, 0xbb, 0x9a, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__ListNodes_Response__TYPE_VERSION_HASH = composition_interfaces__srv__ListNodes_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define composition_interfaces__srv__ListNodes_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x29, 0x7c, 0x03, 0xf2, 0x25, 0x05, 0x60, 0x6a, \
      0x00, 0x17, 0xec, 0x54, 0x3d, 0xe3, 0x16, 0xc1, \
      0x05, 0x37, 0xb7, 0xa7, 0x14, 0xfb, 0x27, 0xa0, \
      0x36, 0xf9, 0x1f, 0x68, 0x98, 0x37, 0x26, 0x11, \
    }}
static const rosidl_type_hash_t composition_interfaces__srv__ListNodes_Event__TYPE_VERSION_HASH = composition_interfaces__srv__ListNodes_Event__TYPE_VERSION_HASH__INIT;

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
