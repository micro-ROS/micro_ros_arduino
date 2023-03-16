// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from diagnostic_msgs:srv/AddDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__STRUCT_H_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define diagnostic_msgs__srv__AddDiagnostics__TYPE_VERSION_HASH__INIT {1, { \
      0x59, 0xcb, 0x6d, 0x75, 0xc8, 0x77, 0x61, 0x3f, \
      0xbd, 0x85, 0xa7, 0x33, 0x11, 0x22, 0x4d, 0x9f, \
      0xb6, 0x70, 0xa7, 0x4d, 0xd9, 0x78, 0xd1, 0x75, \
      0x06, 0xc8, 0x21, 0x24, 0x05, 0x0e, 0xbe, 0xff, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__srv__AddDiagnostics__TYPE_VERSION_HASH = diagnostic_msgs__srv__AddDiagnostics__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define diagnostic_msgs__srv__AddDiagnostics_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x85, 0x8f, 0xcb, 0x79, 0x23, 0x7f, 0x9c, 0x26, \
      0x50, 0x98, 0xe6, 0x95, 0x95, 0xcf, 0x70, 0x86, \
      0xd9, 0x4c, 0xf0, 0x98, 0xaa, 0x1e, 0x1b, 0xc8, \
      0x5e, 0x8d, 0xd4, 0x03, 0xb1, 0x68, 0x36, 0x70, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__srv__AddDiagnostics_Request__TYPE_VERSION_HASH = diagnostic_msgs__srv__AddDiagnostics_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'load_namespace'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AddDiagnostics in the package diagnostic_msgs.
typedef struct diagnostic_msgs__srv__AddDiagnostics_Request
{
  /// The load_namespace parameter defines the namespace where parameters for the
  /// initialization of analyzers in the diagnostic aggregator have been loaded. The
  /// value should be a global name (i.e. /my/name/space), not a relative
  /// (my/name/space) or private (~my/name/space) name. Analyzers will not be added
  /// if a non-global name is used. The call will also fail if the namespace
  /// contains parameters that follow a namespace structure that does not conform to
  /// that expected by the analyzer definitions. See
  /// http://wiki.ros.org/diagnostics/Tutorials/Configuring%20Diagnostic%20Aggregators
  /// and http://wiki.ros.org/diagnostics/Tutorials/Using%20the%20GenericAnalyzer
  /// for examples of the structure of yaml files which are expected to have been
  /// loaded into the namespace.
  rosidl_runtime_c__String load_namespace;
} diagnostic_msgs__srv__AddDiagnostics_Request;

// Struct for a sequence of diagnostic_msgs__srv__AddDiagnostics_Request.
typedef struct diagnostic_msgs__srv__AddDiagnostics_Request__Sequence
{
  diagnostic_msgs__srv__AddDiagnostics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__srv__AddDiagnostics_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define diagnostic_msgs__srv__AddDiagnostics_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x6b, 0x66, 0xa6, 0x48, 0x1b, 0x06, 0x2f, 0xf0, \
      0xb8, 0x68, 0x3d, 0xcd, 0xd2, 0x29, 0x7b, 0xf6, \
      0xa2, 0x07, 0x9a, 0xc2, 0xb1, 0xd3, 0xc6, 0x95, \
      0xf8, 0x46, 0x7f, 0x0e, 0x28, 0xb8, 0xa0, 0x24, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__srv__AddDiagnostics_Response__TYPE_VERSION_HASH = diagnostic_msgs__srv__AddDiagnostics_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AddDiagnostics in the package diagnostic_msgs.
typedef struct diagnostic_msgs__srv__AddDiagnostics_Response
{
  /// True if diagnostic aggregator was updated with new diagnostics, False
  /// otherwise. A false return value means that either there is a bond in the
  /// aggregator which already used the requested namespace, or the initialization
  /// of analyzers failed.
  bool success;
  /// Message with additional information about the success or failure
  rosidl_runtime_c__String message;
} diagnostic_msgs__srv__AddDiagnostics_Response;

// Struct for a sequence of diagnostic_msgs__srv__AddDiagnostics_Response.
typedef struct diagnostic_msgs__srv__AddDiagnostics_Response__Sequence
{
  diagnostic_msgs__srv__AddDiagnostics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__srv__AddDiagnostics_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define diagnostic_msgs__srv__AddDiagnostics_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x12, 0x70, 0x7a, 0x5d, 0x14, 0x0f, 0x10, 0x3e, \
      0xf3, 0xde, 0x34, 0x7a, 0x87, 0xb7, 0x6e, 0x98, \
      0xb2, 0x6f, 0x56, 0x6a, 0x23, 0x7b, 0x2b, 0x7b, \
      0x16, 0x72, 0xd4, 0xa2, 0xff, 0xeb, 0xaf, 0xa3, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__srv__AddDiagnostics_Event__TYPE_VERSION_HASH = diagnostic_msgs__srv__AddDiagnostics_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  diagnostic_msgs__srv__AddDiagnostics_Event__request__MAX_SIZE = 1
};
// response
enum
{
  diagnostic_msgs__srv__AddDiagnostics_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddDiagnostics in the package diagnostic_msgs.
typedef struct diagnostic_msgs__srv__AddDiagnostics_Event
{
  service_msgs__msg__ServiceEventInfo info;
  diagnostic_msgs__srv__AddDiagnostics_Request__Sequence request;
  diagnostic_msgs__srv__AddDiagnostics_Response__Sequence response;
} diagnostic_msgs__srv__AddDiagnostics_Event;

// Struct for a sequence of diagnostic_msgs__srv__AddDiagnostics_Event.
typedef struct diagnostic_msgs__srv__AddDiagnostics_Event__Sequence
{
  diagnostic_msgs__srv__AddDiagnostics_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__srv__AddDiagnostics_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__ADD_DIAGNOSTICS__STRUCT_H_
