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


static const rosidl_type_hash_t diagnostic_msgs__srv__SelfTest__TYPE_HASH = {1, {
    0xdf, 0x1e, 0x4e, 0x54, 0xa8, 0x14, 0xa1, 0x6c,
    0xcc, 0x77, 0x47, 0x1e, 0x92, 0x39, 0x61, 0x8d,
    0x46, 0x81, 0x8e, 0x8d, 0x0e, 0x3b, 0x45, 0xad,
    0x6f, 0x8c, 0x34, 0xc6, 0xe2, 0xab, 0xfe, 0xf6,
  }};


// Type Hash for interface
static const rosidl_type_hash_t diagnostic_msgs__srv__SelfTest_Request__TYPE_HASH = {1, {
    0x3b, 0xb9, 0x4b, 0x49, 0x7e, 0x74, 0xe9, 0xbe,
    0xed, 0x2d, 0xdd, 0xc7, 0x21, 0x2d, 0x3a, 0xe5,
    0x96, 0x69, 0x6d, 0x30, 0x41, 0x3b, 0xd1, 0x55,
    0x0f, 0xe9, 0x32, 0xfc, 0x20, 0xef, 0xb8, 0xa4,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t diagnostic_msgs__srv__SelfTest_Response__TYPE_HASH = {1, {
    0x48, 0x9d, 0xa8, 0x2e, 0x00, 0xdc, 0xe6, 0x67,
    0x1c, 0xb0, 0xff, 0x42, 0x3a, 0x0f, 0x09, 0x39,
    0xb5, 0x46, 0x33, 0x6f, 0xbf, 0xe4, 0x9d, 0x6c,
    0x7e, 0x64, 0xc9, 0xb8, 0x9f, 0x89, 0x8f, 0x57,
  }};

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


// Type Hash for interface
static const rosidl_type_hash_t diagnostic_msgs__srv__SelfTest_Event__TYPE_HASH = {1, {
    0x94, 0x9f, 0x4b, 0xd4, 0x18, 0xda, 0xe4, 0x83,
    0x87, 0x9d, 0x64, 0x90, 0x12, 0xbe, 0xff, 0x10,
    0x52, 0x76, 0xe5, 0xb7, 0x5b, 0x3c, 0x74, 0x45,
    0x69, 0x3c, 0x70, 0xdc, 0xa1, 0x68, 0x77, 0x18,
  }};

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
