// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from diagnostic_msgs:srv/SelfTest.idl
// generated code does not contain a copyright notice

#ifndef DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__STRUCT_H_
#define DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define diagnostic_msgs__srv__SelfTest__TYPE_VERSION_HASH__INIT {1, { \
      0x4f, 0x44, 0x1f, 0xb1, 0x42, 0x33, 0x6f, 0x09, \
      0x74, 0xe3, 0x19, 0x81, 0x20, 0x48, 0x06, 0xf4, \
      0xee, 0xe7, 0xda, 0x22, 0x62, 0x25, 0x2d, 0x4e, \
      0x0e, 0x8f, 0x7d, 0x2e, 0x1b, 0x49, 0xd6, 0x89, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__srv__SelfTest__TYPE_VERSION_HASH = diagnostic_msgs__srv__SelfTest__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define diagnostic_msgs__srv__SelfTest_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xe8, 0xae, 0x03, 0xe8, 0x58, 0xbf, 0x5e, 0x6a, \
      0x6e, 0x21, 0xad, 0xae, 0x00, 0x64, 0x90, 0x8f, \
      0x3b, 0xa6, 0x02, 0x12, 0xab, 0x19, 0x6e, 0x15, \
      0x78, 0xa8, 0xc2, 0x02, 0x51, 0x6a, 0x13, 0xfa, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__srv__SelfTest_Request__TYPE_VERSION_HASH = diagnostic_msgs__srv__SelfTest_Request__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

/// Struct defined in srv/SelfTest in the package diagnostic_msgs.
typedef struct diagnostic_msgs__srv__SelfTest_Request
{
  uint8_t structure_needs_at_least_one_member;
} diagnostic_msgs__srv__SelfTest_Request;

// Struct for a sequence of diagnostic_msgs__srv__SelfTest_Request.
typedef struct diagnostic_msgs__srv__SelfTest_Request__Sequence
{
  diagnostic_msgs__srv__SelfTest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__srv__SelfTest_Request__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define diagnostic_msgs__srv__SelfTest_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x3c, 0x3d, 0xcf, 0x9a, 0xf6, 0x5d, 0x5a, 0xad, \
      0xec, 0x56, 0x90, 0xda, 0x3a, 0x83, 0xad, 0xdf, \
      0xdc, 0xae, 0x8b, 0xd4, 0xe8, 0xfe, 0xfb, 0x45, \
      0x46, 0x02, 0x2d, 0x3e, 0x4e, 0x81, 0x5a, 0x58, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__srv__SelfTest_Response__TYPE_VERSION_HASH = diagnostic_msgs__srv__SelfTest_Response__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'status'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.h"

/// Struct defined in srv/SelfTest in the package diagnostic_msgs.
typedef struct diagnostic_msgs__srv__SelfTest_Response
{
  rosidl_runtime_c__String id;
  uint8_t passed;
  diagnostic_msgs__msg__DiagnosticStatus__Sequence status;
} diagnostic_msgs__srv__SelfTest_Response;

// Struct for a sequence of diagnostic_msgs__srv__SelfTest_Response.
typedef struct diagnostic_msgs__srv__SelfTest_Response__Sequence
{
  diagnostic_msgs__srv__SelfTest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__srv__SelfTest_Response__Sequence;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define diagnostic_msgs__srv__SelfTest_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x72, 0xab, 0x07, 0x3b, 0x8e, 0x88, 0x72, 0x1b, \
      0x9f, 0x2e, 0xf7, 0xc9, 0x67, 0x95, 0xb5, 0xe9, \
      0xeb, 0x9d, 0xd6, 0xea, 0xca, 0x0f, 0x7c, 0x28, \
      0x0b, 0xd8, 0x24, 0xad, 0x2d, 0xda, 0xa5, 0x6e, \
    }}
static const rosidl_type_hash_t diagnostic_msgs__srv__SelfTest_Event__TYPE_VERSION_HASH = diagnostic_msgs__srv__SelfTest_Event__TYPE_VERSION_HASH__INIT;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  diagnostic_msgs__srv__SelfTest_Event__request__MAX_SIZE = 1
};
// response
enum
{
  diagnostic_msgs__srv__SelfTest_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SelfTest in the package diagnostic_msgs.
typedef struct diagnostic_msgs__srv__SelfTest_Event
{
  service_msgs__msg__ServiceEventInfo info;
  diagnostic_msgs__srv__SelfTest_Request__Sequence request;
  diagnostic_msgs__srv__SelfTest_Response__Sequence response;
} diagnostic_msgs__srv__SelfTest_Event;

// Struct for a sequence of diagnostic_msgs__srv__SelfTest_Event.
typedef struct diagnostic_msgs__srv__SelfTest_Event__Sequence
{
  diagnostic_msgs__srv__SelfTest_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} diagnostic_msgs__srv__SelfTest_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DIAGNOSTIC_MSGS__SRV__DETAIL__SELF_TEST__STRUCT_H_
