// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__TRIGGER__STRUCT_H_
#define EXAMPLE_INTERFACES__SRV__DETAIL__TRIGGER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__Trigger__TYPE_VERSION_HASH__INIT {1, { \
      0x6d, 0xe9, 0xfc, 0x91, 0xab, 0x0b, 0x9d, 0xba, \
      0x7a, 0x39, 0x72, 0x79, 0x36, 0xd0, 0x2b, 0xf8, \
      0x5e, 0x88, 0x2a, 0x6a, 0xe3, 0x11, 0xc4, 0xb7, \
      0xd4, 0xfe, 0xab, 0xea, 0x47, 0x79, 0xec, 0x00, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__Trigger__TYPE_VERSION_HASH = example_interfaces__srv__Trigger__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__Trigger_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x55, 0x62, 0xac, 0x4e, 0x52, 0x35, 0xe6, 0xf7, \
      0xa6, 0x12, 0xed, 0x38, 0xc3, 0x94, 0xf6, 0x69, \
      0x23, 0x6d, 0x65, 0x3a, 0xcf, 0x9c, 0x75, 0x02, \
      0xef, 0x62, 0x88, 0xf8, 0xe0, 0x37, 0xf9, 0x88, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__Trigger_Request__TYPE_VERSION_HASH = example_interfaces__srv__Trigger_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in srv/Trigger in the package example_interfaces.
typedef struct example_interfaces__srv__Trigger_Request
{
  uint8_t structure_needs_at_least_one_member;
} example_interfaces__srv__Trigger_Request;

// Struct for a sequence of example_interfaces__srv__Trigger_Request.
typedef struct example_interfaces__srv__Trigger_Request__Sequence
{
  example_interfaces__srv__Trigger_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__Trigger_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__Trigger_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x6f, 0xe7, 0x06, 0xc1, 0xcc, 0x46, 0xf9, 0xac, \
      0xe9, 0x8b, 0x3b, 0x7f, 0xb0, 0x58, 0xa5, 0x96, \
      0x3e, 0x34, 0xa4, 0xbf, 0x82, 0xf0, 0x57, 0x6d, \
      0x3c, 0x0c, 0x5b, 0x89, 0x33, 0x6f, 0xab, 0x79, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__Trigger_Response__TYPE_VERSION_HASH = example_interfaces__srv__Trigger_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Trigger in the package example_interfaces.
typedef struct example_interfaces__srv__Trigger_Response
{
  /// indicate successful run of triggered service
  bool success;
  /// informational, e.g. for error messages.
  rosidl_runtime_c__String message;
} example_interfaces__srv__Trigger_Response;

// Struct for a sequence of example_interfaces__srv__Trigger_Response.
typedef struct example_interfaces__srv__Trigger_Response__Sequence
{
  example_interfaces__srv__Trigger_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__Trigger_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__Trigger_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x49, 0x15, 0xe3, 0xa5, 0x80, 0x46, 0x48, 0x21, \
      0x7e, 0x28, 0xa6, 0xa2, 0xbe, 0x4b, 0xe2, 0x88, \
      0xd9, 0x03, 0x42, 0x12, 0x51, 0xdb, 0x1e, 0xac, \
      0x0a, 0xba, 0xe3, 0x47, 0x99, 0x70, 0xaa, 0xf0, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__Trigger_Event__TYPE_VERSION_HASH = example_interfaces__srv__Trigger_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  example_interfaces__srv__Trigger_Event__request__MAX_SIZE = 1
};
// response
enum
{
  example_interfaces__srv__Trigger_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Trigger in the package example_interfaces.
typedef struct example_interfaces__srv__Trigger_Event
{
  service_msgs__msg__ServiceEventInfo info;
  example_interfaces__srv__Trigger_Request__Sequence request;
  example_interfaces__srv__Trigger_Response__Sequence response;
} example_interfaces__srv__Trigger_Event;

// Struct for a sequence of example_interfaces__srv__Trigger_Event.
typedef struct example_interfaces__srv__Trigger_Event__Sequence
{
  example_interfaces__srv__Trigger_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__Trigger_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__TRIGGER__STRUCT_H_
