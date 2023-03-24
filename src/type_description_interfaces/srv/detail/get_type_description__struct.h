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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define type_description_interfaces__srv__GetTypeDescription__TYPE_VERSION_HASH__INIT {1, { \
      0xbd, 0x9a, 0x41, 0xe9, 0x11, 0xf8, 0x55, 0xeb, \
      0x45, 0xa7, 0x47, 0xd6, 0x1a, 0xbf, 0xf2, 0x08, \
      0x4d, 0x07, 0xb7, 0xa5, 0x80, 0x16, 0x6f, 0x8e, \
      0x1b, 0xa9, 0x76, 0x8c, 0x59, 0xfa, 0xab, 0xe3, \
    }}
static const rosidl_type_hash_t type_description_interfaces__srv__GetTypeDescription__TYPE_VERSION_HASH = type_description_interfaces__srv__GetTypeDescription__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define type_description_interfaces__srv__GetTypeDescription_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xe1, 0x04, 0x6b, 0xb6, 0x59, 0xe9, 0x1a, 0xfe, \
      0x6b, 0xf1, 0x4e, 0xb6, 0x5b, 0x91, 0x68, 0x81, \
      0x73, 0x04, 0x05, 0x07, 0x18, 0x03, 0xb7, 0xb8, \
      0x73, 0xc1, 0xa4, 0xdb, 0x5b, 0x4f, 0x92, 0x99, \
    }}
static const rosidl_type_hash_t type_description_interfaces__srv__GetTypeDescription_Request__TYPE_VERSION_HASH = type_description_interfaces__srv__GetTypeDescription_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define type_description_interfaces__srv__GetTypeDescription_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xdd, 0x6e, 0x9b, 0x46, 0xb4, 0xb7, 0xc4, 0xd0, \
      0xd1, 0x5c, 0x13, 0x33, 0xa7, 0x57, 0x54, 0x6a, \
      0x58, 0x96, 0x4b, 0x04, 0xf8, 0x6d, 0x0e, 0xa7, \
      0xf1, 0x66, 0x97, 0xf1, 0x5f, 0x5f, 0x30, 0x3a, \
    }}
static const rosidl_type_hash_t type_description_interfaces__srv__GetTypeDescription_Response__TYPE_VERSION_HASH = type_description_interfaces__srv__GetTypeDescription_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define type_description_interfaces__srv__GetTypeDescription_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x80, 0x3c, 0x43, 0x78, 0x86, 0x70, 0x19, 0x65, \
      0xc8, 0x3d, 0xa8, 0xcb, 0xff, 0x9e, 0x23, 0x7a, \
      0x67, 0x64, 0xbf, 0xd2, 0x61, 0x41, 0x76, 0xa5, \
      0x12, 0x7b, 0xb1, 0xed, 0x5b, 0x6e, 0x63, 0x63, \
    }}
static const rosidl_type_hash_t type_description_interfaces__srv__GetTypeDescription_Event__TYPE_VERSION_HASH = type_description_interfaces__srv__GetTypeDescription_Event__TYPE_VERSION_HASH__INIT;

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
