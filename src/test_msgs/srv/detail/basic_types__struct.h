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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__BasicTypes__TYPE_VERSION_HASH__INIT {1, { \
      0x91, 0x94, 0x51, 0xc9, 0x44, 0x9e, 0xb2, 0xc2, \
      0x8d, 0x98, 0x75, 0x80, 0x3c, 0x15, 0x4d, 0xaf, \
      0x5e, 0x16, 0xc0, 0x2b, 0xee, 0xbc, 0x94, 0xab, \
      0x91, 0xc2, 0x1a, 0xf2, 0x40, 0x1c, 0x27, 0xdd, \
    }}
static const rosidl_type_hash_t test_msgs__srv__BasicTypes__TYPE_VERSION_HASH = test_msgs__srv__BasicTypes__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__BasicTypes_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xb2, 0xf4, 0xd4, 0x59, 0x91, 0xd6, 0x81, 0x64, \
      0x74, 0x73, 0x7f, 0xae, 0x99, 0x74, 0xac, 0xfb, \
      0xf8, 0xbc, 0x60, 0xfa, 0xc8, 0xd9, 0xcd, 0x78, \
      0xca, 0xb5, 0x31, 0x1a, 0x15, 0xf1, 0x2b, 0x87, \
    }}
static const rosidl_type_hash_t test_msgs__srv__BasicTypes_Request__TYPE_VERSION_HASH = test_msgs__srv__BasicTypes_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__BasicTypes_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xeb, 0x7b, 0x7f, 0xfc, 0x1a, 0x0c, 0x52, 0xd8, \
      0x0d, 0x8b, 0x8c, 0x7f, 0x36, 0xc2, 0x35, 0x49, \
      0x44, 0xa9, 0x84, 0xe3, 0x81, 0x8d, 0xd1, 0x53, \
      0x13, 0x76, 0xc2, 0xe5, 0xcf, 0x6a, 0x42, 0x29, \
    }}
static const rosidl_type_hash_t test_msgs__srv__BasicTypes_Response__TYPE_VERSION_HASH = test_msgs__srv__BasicTypes_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__BasicTypes_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xe9, 0xf8, 0x7f, 0x6b, 0xee, 0xa3, 0x08, 0xa2, \
      0x9b, 0x55, 0x1f, 0x49, 0xee, 0x37, 0x42, 0xc2, \
      0x4c, 0x2f, 0xbf, 0xcd, 0x26, 0xa4, 0xac, 0x6e, \
      0xf4, 0x8a, 0x9c, 0xd9, 0x41, 0x14, 0x2d, 0xff, \
    }}
static const rosidl_type_hash_t test_msgs__srv__BasicTypes_Event__TYPE_VERSION_HASH = test_msgs__srv__BasicTypes_Event__TYPE_VERSION_HASH__INIT;

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
