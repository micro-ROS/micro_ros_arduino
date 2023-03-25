// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:srv/Empty.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__SRV__DETAIL__EMPTY__STRUCT_H_
#define TEST_MSGS__SRV__DETAIL__EMPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t test_msgs__srv__Empty__TYPE_HASH = {1, {
    0x97, 0x37, 0x67, 0x9d, 0x04, 0x95, 0x0f, 0xec,
    0xab, 0x59, 0xb9, 0xe8, 0x2e, 0xc2, 0xbf, 0x28,
    0x5f, 0x58, 0x44, 0x6c, 0xe8, 0xe4, 0x8d, 0x28,
    0x7e, 0x13, 0xb8, 0xa9, 0xf1, 0x9f, 0x08, 0x23,
  }};


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__srv__Empty_Request__TYPE_HASH = {1, {
    0xab, 0x04, 0x6f, 0x24, 0xc1, 0xca, 0x55, 0xcd,
    0xb5, 0xe7, 0x7f, 0x81, 0xa5, 0xbf, 0x1b, 0xa9,
    0x2c, 0x4b, 0xd9, 0xa5, 0xf6, 0x75, 0x60, 0x1d,
    0x4f, 0x9a, 0x48, 0xfe, 0xf7, 0x0a, 0x4e, 0x89,
  }};

// Constants defined in the message

/// Struct defined in srv/Empty in the package test_msgs.
typedef struct test_msgs__srv__Empty_Request
{
  uint8_t structure_needs_at_least_one_member;
} test_msgs__srv__Empty_Request;

// Struct for a sequence of test_msgs__srv__Empty_Request.
typedef struct test_msgs__srv__Empty_Request__Sequence
{
  test_msgs__srv__Empty_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__srv__Empty_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__srv__Empty_Response__TYPE_HASH = {1, {
    0x72, 0x58, 0xf2, 0x80, 0x34, 0xbb, 0x37, 0x47,
    0xd3, 0x74, 0x3b, 0x73, 0xf2, 0xe0, 0x99, 0xd9,
    0xeb, 0x73, 0x9f, 0x92, 0xb4, 0xbf, 0x6d, 0x69,
    0x57, 0xd1, 0xa8, 0xe9, 0xdf, 0x04, 0x3a, 0xd8,
  }};

// Constants defined in the message

/// Struct defined in srv/Empty in the package test_msgs.
typedef struct test_msgs__srv__Empty_Response
{
  uint8_t structure_needs_at_least_one_member;
} test_msgs__srv__Empty_Response;

// Struct for a sequence of test_msgs__srv__Empty_Response.
typedef struct test_msgs__srv__Empty_Response__Sequence
{
  test_msgs__srv__Empty_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__srv__Empty_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__srv__Empty_Event__TYPE_HASH = {1, {
    0x3d, 0x58, 0xc3, 0x87, 0x25, 0x2d, 0xad, 0xcd,
    0x64, 0x22, 0xbd, 0xd1, 0x3b, 0xf9, 0x20, 0xd3,
    0xbd, 0xb2, 0xfe, 0x27, 0x89, 0xaa, 0xe6, 0x3b,
    0xf9, 0xdf, 0x38, 0x26, 0x7c, 0xa1, 0x50, 0x05,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  test_msgs__srv__Empty_Event__request__MAX_SIZE = 1
};
// response
enum
{
  test_msgs__srv__Empty_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Empty in the package test_msgs.
typedef struct test_msgs__srv__Empty_Event
{
  service_msgs__msg__ServiceEventInfo info;
  test_msgs__srv__Empty_Request__Sequence request;
  test_msgs__srv__Empty_Response__Sequence response;
} test_msgs__srv__Empty_Event;

// Struct for a sequence of test_msgs__srv__Empty_Event.
typedef struct test_msgs__srv__Empty_Event__Sequence
{
  test_msgs__srv__Empty_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__srv__Empty_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__SRV__DETAIL__EMPTY__STRUCT_H_
