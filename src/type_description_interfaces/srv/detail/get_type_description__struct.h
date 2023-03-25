// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from type_description_interfaces:srv/GetTypeDescription.idl
// generated code does not contain a copyright notice

#ifndef TYPE_DESCRIPTION_INTERFACES__SRV__DETAIL__GET_TYPE_DESCRIPTION__STRUCT_H_
#define TYPE_DESCRIPTION_INTERFACES__SRV__DETAIL__GET_TYPE_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t type_description_interfaces__srv__GetTypeDescription__TYPE_HASH = {1, {
    0x69, 0xb9, 0xc1, 0x9c, 0x10, 0x21, 0x40, 0x59,
    0x84, 0xcc, 0x60, 0xdb, 0xbb, 0x1e, 0xdc, 0xeb,
    0x14, 0x7a, 0x65, 0x38, 0xb4, 0x11, 0xd8, 0x12,
    0xba, 0x6a, 0xfa, 0xbe, 0xed, 0x96, 0x2c, 0xd5,
  }};


// Type Hash for interface
static const rosidl_type_hash_t type_description_interfaces__srv__GetTypeDescription_Request__TYPE_HASH = {1, {
    0x47, 0x0f, 0x56, 0xcc, 0xbc, 0xf1, 0x3d, 0x55,
    0xc7, 0x8c, 0x8b, 0x73, 0x5f, 0xb1, 0x2d, 0xa0,
    0x3e, 0x63, 0x9e, 0x5a, 0xcd, 0xed, 0x99, 0x44,
    0x26, 0xc8, 0x9d, 0x94, 0x77, 0x8d, 0x9e, 0x28,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'type_name'
// Member 'type_hash'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetTypeDescription in the package type_description_interfaces.
typedef struct type_description_interfaces__srv__GetTypeDescription_Request
{
  rosidl_runtime_c__String type_name;
  /// REP-2011 RIHS hash string.
  rosidl_runtime_c__String type_hash;
  /// Whether to return the original idl/msg/etc. source file(s) in the response.
  bool include_type_sources;
} type_description_interfaces__srv__GetTypeDescription_Request;

// Struct for a sequence of type_description_interfaces__srv__GetTypeDescription_Request.
typedef struct type_description_interfaces__srv__GetTypeDescription_Request__Sequence
{
  type_description_interfaces__srv__GetTypeDescription_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} type_description_interfaces__srv__GetTypeDescription_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t type_description_interfaces__srv__GetTypeDescription_Response__TYPE_HASH = {1, {
    0x64, 0x8c, 0x49, 0xd9, 0x76, 0x24, 0x08, 0x61,
    0xa4, 0x82, 0xf9, 0x61, 0xc5, 0x62, 0x1d, 0xdd,
    0x0d, 0x21, 0x35, 0xd8, 0xcc, 0xe6, 0xf2, 0x97,
    0xa7, 0x6d, 0x4f, 0x63, 0x76, 0xd9, 0x3b, 0x75,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'failure_reason'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'type_description'
#include "type_description_interfaces/msg/detail/type_description__struct.h"
// Member 'type_sources'
#include "type_description_interfaces/msg/detail/type_source__struct.h"
// Member 'extra_information'
#include "type_description_interfaces/msg/detail/key_value__struct.h"

/// Struct defined in srv/GetTypeDescription in the package type_description_interfaces.
typedef struct type_description_interfaces__srv__GetTypeDescription_Response
{
  bool successful;
  /// If `successful` is false, contains a reason for failure.
  /// If `successful` is true, this is left empty.
  rosidl_runtime_c__String failure_reason;
  /// The parsed type description which can be used programmatically.
  type_description_interfaces__msg__TypeDescription type_description;
  /// A list containing the interface definition source text of the requested type,
  /// plus all types it recursively depends on.
  /// Each source text is a copy of the original contents of the
  /// .msg, .srv, .action, .idl, or other file if it exists, including comments and whitespace.
  /// Sources can be matched with IndividualTypeDescriptions by their `type_name`.
  /// The `encoding` field of each entry informs how to interpret its contents.
  type_description_interfaces__msg__TypeSource__Sequence type_sources;
  /// Key-value pairs of extra information.
  type_description_interfaces__msg__KeyValue__Sequence extra_information;
} type_description_interfaces__srv__GetTypeDescription_Response;

// Struct for a sequence of type_description_interfaces__srv__GetTypeDescription_Response.
typedef struct type_description_interfaces__srv__GetTypeDescription_Response__Sequence
{
  type_description_interfaces__srv__GetTypeDescription_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} type_description_interfaces__srv__GetTypeDescription_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t type_description_interfaces__srv__GetTypeDescription_Event__TYPE_HASH = {1, {
    0x49, 0x1e, 0x33, 0x50, 0xe7, 0xa0, 0xb1, 0x19,
    0x18, 0xfb, 0x16, 0xa5, 0x23, 0xcf, 0x01, 0xa2,
    0x2d, 0x76, 0xfd, 0xaa, 0x53, 0xc4, 0x3b, 0x52,
    0x16, 0x4f, 0xea, 0x14, 0xaa, 0xbb, 0x56, 0x12,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  type_description_interfaces__srv__GetTypeDescription_Event__request__MAX_SIZE = 1
};
// response
enum
{
  type_description_interfaces__srv__GetTypeDescription_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetTypeDescription in the package type_description_interfaces.
typedef struct type_description_interfaces__srv__GetTypeDescription_Event
{
  service_msgs__msg__ServiceEventInfo info;
  type_description_interfaces__srv__GetTypeDescription_Request__Sequence request;
  type_description_interfaces__srv__GetTypeDescription_Response__Sequence response;
} type_description_interfaces__srv__GetTypeDescription_Event;

// Struct for a sequence of type_description_interfaces__srv__GetTypeDescription_Event.
typedef struct type_description_interfaces__srv__GetTypeDescription_Event__Sequence
{
  type_description_interfaces__srv__GetTypeDescription_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} type_description_interfaces__srv__GetTypeDescription_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TYPE_DESCRIPTION_INTERFACES__SRV__DETAIL__GET_TYPE_DESCRIPTION__STRUCT_H_
