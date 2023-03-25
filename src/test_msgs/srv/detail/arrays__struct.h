// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_msgs:srv/Arrays.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__SRV__DETAIL__ARRAYS__STRUCT_H_
#define TEST_MSGS__SRV__DETAIL__ARRAYS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t test_msgs__srv__Arrays__TYPE_HASH = {1, {
    0xae, 0x66, 0xe1, 0x3b, 0x3a, 0xd1, 0x52, 0x0b,
    0xcd, 0x9f, 0xa5, 0x75, 0x1c, 0x4a, 0x45, 0x21,
    0x22, 0x2b, 0xf2, 0x7c, 0x2f, 0x84, 0x5d, 0x79,
    0xde, 0x0c, 0x76, 0xe4, 0xcb, 0xb4, 0x10, 0x80,
  }};


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__srv__Arrays_Request__TYPE_HASH = {1, {
    0x69, 0xe1, 0xd2, 0x77, 0xb2, 0xef, 0xd1, 0xd2,
    0x76, 0x0e, 0x54, 0x5a, 0x40, 0x57, 0xf1, 0x1f,
    0x62, 0xf7, 0xc6, 0x39, 0x5c, 0x5f, 0xaa, 0x17,
    0xe5, 0x05, 0x99, 0x39, 0x9b, 0x4f, 0xb5, 0xd8,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'string_values'
// Member 'string_values_default'
#include "rosidl_runtime_c/string.h"
// Member 'basic_types_values'
#include "test_msgs/msg/detail/basic_types__struct.h"
// Member 'constants_values'
#include "test_msgs/msg/detail/constants__struct.h"
// Member 'defaults_values'
#include "test_msgs/msg/detail/defaults__struct.h"

/// Struct defined in srv/Arrays in the package test_msgs.
typedef struct test_msgs__srv__Arrays_Request
{
  bool bool_values[3];
  uint8_t byte_values[3];
  uint8_t char_values[3];
  float float32_values[3];
  double float64_values[3];
  int8_t int8_values[3];
  uint8_t uint8_values[3];
  int16_t int16_values[3];
  uint16_t uint16_values[3];
  int32_t int32_values[3];
  uint32_t uint32_values[3];
  int64_t int64_values[3];
  uint64_t uint64_values[3];
  rosidl_runtime_c__String string_values[3];
  test_msgs__msg__BasicTypes basic_types_values[3];
  test_msgs__msg__Constants constants_values[3];
  test_msgs__msg__Defaults defaults_values[3];
  bool bool_values_default[3];
  uint8_t byte_values_default[3];
  uint8_t char_values_default[3];
  float float32_values_default[3];
  double float64_values_default[3];
  int8_t int8_values_default[3];
  uint8_t uint8_values_default[3];
  int16_t int16_values_default[3];
  uint16_t uint16_values_default[3];
  int32_t int32_values_default[3];
  uint32_t uint32_values_default[3];
  int64_t int64_values_default[3];
  uint64_t uint64_values_default[3];
  rosidl_runtime_c__String string_values_default[3];
} test_msgs__srv__Arrays_Request;

// Struct for a sequence of test_msgs__srv__Arrays_Request.
typedef struct test_msgs__srv__Arrays_Request__Sequence
{
  test_msgs__srv__Arrays_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__srv__Arrays_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__srv__Arrays_Response__TYPE_HASH = {1, {
    0xe0, 0xf5, 0x9d, 0x6b, 0xd8, 0x45, 0x46, 0xeb,
    0xfb, 0x5a, 0xd7, 0x6a, 0x0a, 0xfe, 0x77, 0xf9,
    0xfe, 0xe9, 0xbd, 0x6f, 0x1f, 0xc8, 0xf8, 0xfc,
    0xa3, 0x78, 0x90, 0xfe, 0xaf, 0x27, 0xee, 0x69,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'string_values'
// Member 'string_values_default'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'basic_types_values'
// already included above
// #include "test_msgs/msg/detail/basic_types__struct.h"
// Member 'constants_values'
// already included above
// #include "test_msgs/msg/detail/constants__struct.h"
// Member 'defaults_values'
// already included above
// #include "test_msgs/msg/detail/defaults__struct.h"

/// Struct defined in srv/Arrays in the package test_msgs.
typedef struct test_msgs__srv__Arrays_Response
{
  bool bool_values[3];
  uint8_t byte_values[3];
  uint8_t char_values[3];
  float float32_values[3];
  double float64_values[3];
  int8_t int8_values[3];
  uint8_t uint8_values[3];
  int16_t int16_values[3];
  uint16_t uint16_values[3];
  int32_t int32_values[3];
  uint32_t uint32_values[3];
  int64_t int64_values[3];
  uint64_t uint64_values[3];
  rosidl_runtime_c__String string_values[3];
  test_msgs__msg__BasicTypes basic_types_values[3];
  test_msgs__msg__Constants constants_values[3];
  test_msgs__msg__Defaults defaults_values[3];
  bool bool_values_default[3];
  uint8_t byte_values_default[3];
  uint8_t char_values_default[3];
  float float32_values_default[3];
  double float64_values_default[3];
  int8_t int8_values_default[3];
  uint8_t uint8_values_default[3];
  int16_t int16_values_default[3];
  uint16_t uint16_values_default[3];
  int32_t int32_values_default[3];
  uint32_t uint32_values_default[3];
  int64_t int64_values_default[3];
  uint64_t uint64_values_default[3];
  rosidl_runtime_c__String string_values_default[3];
} test_msgs__srv__Arrays_Response;

// Struct for a sequence of test_msgs__srv__Arrays_Response.
typedef struct test_msgs__srv__Arrays_Response__Sequence
{
  test_msgs__srv__Arrays_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__srv__Arrays_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t test_msgs__srv__Arrays_Event__TYPE_HASH = {1, {
    0x41, 0xbe, 0x0b, 0xc3, 0xda, 0xa6, 0xdb, 0xbd,
    0x6d, 0x11, 0x98, 0x67, 0x8b, 0x36, 0x2b, 0xd4,
    0xb4, 0x3a, 0x08, 0xcb, 0x75, 0xfe, 0x0a, 0x4f,
    0x43, 0x4f, 0xe7, 0x9b, 0xad, 0x31, 0xf1, 0x9e,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  test_msgs__srv__Arrays_Event__request__MAX_SIZE = 1
};
// response
enum
{
  test_msgs__srv__Arrays_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Arrays in the package test_msgs.
typedef struct test_msgs__srv__Arrays_Event
{
  service_msgs__msg__ServiceEventInfo info;
  test_msgs__srv__Arrays_Request__Sequence request;
  test_msgs__srv__Arrays_Response__Sequence response;
} test_msgs__srv__Arrays_Event;

// Struct for a sequence of test_msgs__srv__Arrays_Event.
typedef struct test_msgs__srv__Arrays_Event__Sequence
{
  test_msgs__srv__Arrays_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__srv__Arrays_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_MSGS__SRV__DETAIL__ARRAYS__STRUCT_H_
