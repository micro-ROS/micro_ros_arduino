// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:srv/BasicTypes.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__SRV__DETAIL__BASIC_TYPES__STRUCT_H_
#define TEST_MSGS__SRV__DETAIL__BASIC_TYPES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t test_msgs__srv__BasicTypes__TYPE_HASH = {1, {
    0xda, 0x34, 0x86, 0x97, 0x43, 0x7c, 0x10, 0x3c,
    0xc9, 0xa9, 0x32, 0x2a, 0xc1, 0xbd, 0xbd, 0xcf,
    0x8e, 0xb1, 0x1a, 0x85, 0xde, 0x22, 0xf7, 0xf2,
    0x49, 0x2c, 0xa1, 0xdf, 0x41, 0x6e, 0x1a, 0x5f,
  }};


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__srv__BasicTypes_Request__TYPE_HASH = {1, {
    0x1d, 0xaf, 0xcf, 0x38, 0x9e, 0x22, 0x46, 0x92,
    0x78, 0x3e, 0x9c, 0x4f, 0x60, 0x66, 0xba, 0x0d,
    0xb3, 0xfa, 0x75, 0xfd, 0xbd, 0x8f, 0x08, 0x1f,
    0xfb, 0xe7, 0xed, 0x03, 0x14, 0x4d, 0x73, 0xd4,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'string_value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/BasicTypes in the package test_msgs.
typedef struct test_msgs__srv__BasicTypes_Request
{
  bool bool_value;
  uint8_t byte_value;
  uint8_t char_value;
  float float32_value;
  double float64_value;
  int8_t int8_value;
  uint8_t uint8_value;
  int16_t int16_value;
  uint16_t uint16_value;
  int32_t int32_value;
  uint32_t uint32_value;
  int64_t int64_value;
  uint64_t uint64_value;
  rosidl_runtime_c__String string_value;
} test_msgs__srv__BasicTypes_Request;

// Struct for a sequence of test_msgs__srv__BasicTypes_Request.
typedef struct test_msgs__srv__BasicTypes_Request__Sequence
{
  test_msgs__srv__BasicTypes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__srv__BasicTypes_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__srv__BasicTypes_Response__TYPE_HASH = {1, {
    0x84, 0x79, 0xb3, 0xde, 0xfe, 0x55, 0x4d, 0x96,
    0x9e, 0x81, 0xc6, 0xcf, 0x8c, 0xda, 0xf0, 0xb9,
    0x7b, 0x4f, 0xcd, 0x76, 0x92, 0x8b, 0x2d, 0x64,
    0x4c, 0x68, 0x13, 0xb0, 0x32, 0x67, 0x3c, 0x0d,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'string_value'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/BasicTypes in the package test_msgs.
typedef struct test_msgs__srv__BasicTypes_Response
{
  bool bool_value;
  uint8_t byte_value;
  uint8_t char_value;
  float float32_value;
  double float64_value;
  int8_t int8_value;
  uint8_t uint8_value;
  int16_t int16_value;
  uint16_t uint16_value;
  int32_t int32_value;
  uint32_t uint32_value;
  int64_t int64_value;
  uint64_t uint64_value;
  rosidl_runtime_c__String string_value;
} test_msgs__srv__BasicTypes_Response;

// Struct for a sequence of test_msgs__srv__BasicTypes_Response.
typedef struct test_msgs__srv__BasicTypes_Response__Sequence
{
  test_msgs__srv__BasicTypes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__srv__BasicTypes_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__srv__BasicTypes_Event__TYPE_HASH = {1, {
    0x5b, 0x99, 0x88, 0xa4, 0x80, 0x5a, 0x06, 0xae,
    0x22, 0xdf, 0xf1, 0x29, 0x03, 0xa7, 0x74, 0xcc,
    0xda, 0x71, 0x0e, 0x95, 0x14, 0x92, 0x6b, 0x82,
    0x6f, 0xfc, 0x88, 0x4e, 0x3a, 0x9a, 0x98, 0x2e,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  test_msgs__srv__BasicTypes_Event__request__MAX_SIZE = 1
};
// response
enum
{
  test_msgs__srv__BasicTypes_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/BasicTypes in the package test_msgs.
typedef struct test_msgs__srv__BasicTypes_Event
{
  service_msgs__msg__ServiceEventInfo info;
  test_msgs__srv__BasicTypes_Request__Sequence request;
  test_msgs__srv__BasicTypes_Response__Sequence response;
} test_msgs__srv__BasicTypes_Event;

// Struct for a sequence of test_msgs__srv__BasicTypes_Event.
typedef struct test_msgs__srv__BasicTypes_Event__Sequence
{
  test_msgs__srv__BasicTypes_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__srv__BasicTypes_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__SRV__DETAIL__BASIC_TYPES__STRUCT_H_
