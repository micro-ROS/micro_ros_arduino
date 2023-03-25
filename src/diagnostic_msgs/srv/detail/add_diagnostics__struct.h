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


static const rosidl_type_hash_t diagnostic_msgs__srv__AddDiagnostics__TYPE_HASH = {1, {
    0x6b, 0x91, 0x08, 0x4c, 0x9f, 0x8b, 0xff, 0xd9,
    0xb0, 0xc1, 0xf6, 0x88, 0x3e, 0x0e, 0x8e, 0x49,
    0x1a, 0x83, 0x1f, 0x4f, 0xc6, 0xc6, 0xae, 0xc7,
    0x7a, 0x4e, 0xfa, 0xf3, 0xf1, 0xea, 0x90, 0xb5,
  }};


// Type Hash for interface
static const rosidl_type_hash_t diagnostic_msgs__srv__AddDiagnostics_Request__TYPE_HASH = {1, {
    0xe0, 0xb6, 0x57, 0x2a, 0x07, 0xc2, 0xb3, 0xca,
    0x2c, 0x4f, 0x2a, 0xcf, 0x74, 0x22, 0x97, 0x66,
    0x1f, 0x6c, 0xeb, 0x50, 0xf5, 0xba, 0xa4, 0xf9,
    0x30, 0x5b, 0x60, 0x94, 0xcf, 0x95, 0x01, 0x46,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t diagnostic_msgs__srv__AddDiagnostics_Response__TYPE_HASH = {1, {
    0xe7, 0x07, 0x0a, 0x23, 0x73, 0xc8, 0x92, 0xc4,
    0xcf, 0x07, 0x1d, 0xcd, 0x90, 0x40, 0x5d, 0x76,
    0x96, 0x18, 0x7e, 0xb2, 0xff, 0x0e, 0x40, 0xd8,
    0xb6, 0x47, 0x2a, 0x04, 0xa4, 0xb7, 0x3d, 0x22,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t diagnostic_msgs__srv__AddDiagnostics_Event__TYPE_HASH = {1, {
    0x21, 0xac, 0x80, 0x18, 0x10, 0x29, 0x7a, 0xe8,
    0x6b, 0x5e, 0x5d, 0xcc, 0x66, 0x5b, 0xbd, 0x19,
    0x18, 0xbf, 0x71, 0xb1, 0x96, 0x15, 0xc0, 0x31,
    0xc4, 0xc6, 0xe7, 0x55, 0xad, 0xa8, 0x0c, 0x7c,
  }};

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
