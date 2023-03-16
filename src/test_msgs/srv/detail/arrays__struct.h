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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__Arrays__TYPE_VERSION_HASH__INIT {1, { \
      0x8b, 0x83, 0x98, 0xe1, 0xb3, 0x15, 0x1f, 0x81, \
      0x77, 0xaf, 0x13, 0xd0, 0x09, 0xcf, 0xd4, 0x84, \
      0x39, 0x83, 0x14, 0x93, 0x94, 0x56, 0x6f, 0x0a, \
      0x0e, 0x48, 0xa7, 0x48, 0xc7, 0x15, 0x93, 0x06, \
    }}
static const rosidl_type_hash_t test_msgs__srv__Arrays__TYPE_VERSION_HASH = test_msgs__srv__Arrays__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__Arrays_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xbd, 0x85, 0x1b, 0xc6, 0x6a, 0x55, 0x91, 0xb1, \
      0xec, 0x2e, 0xf7, 0xc8, 0xca, 0xd6, 0xca, 0x0c, \
      0xce, 0x36, 0x77, 0xa4, 0xc9, 0xbb, 0xc2, 0x56, \
      0x34, 0x62, 0x02, 0xdc, 0x6e, 0xfd, 0xc9, 0x26, \
    }}
static const rosidl_type_hash_t test_msgs__srv__Arrays_Request__TYPE_VERSION_HASH = test_msgs__srv__Arrays_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__Arrays_Response__TYPE_VERSION_HASH__INIT {1, { \
      0x07, 0xdf, 0x13, 0x9e, 0xa5, 0x9f, 0x28, 0x10, \
      0x61, 0x70, 0x13, 0x52, 0xa4, 0xb4, 0x1b, 0xbc, \
      0xe9, 0xb0, 0x8c, 0x70, 0xc6, 0xde, 0x87, 0xb3, \
      0xf7, 0x32, 0xb0, 0xaa, 0x24, 0xd2, 0xe3, 0xe2, \
    }}
static const rosidl_type_hash_t test_msgs__srv__Arrays_Response__TYPE_VERSION_HASH = test_msgs__srv__Arrays_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__Arrays_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x03, 0x32, 0xb6, 0x38, 0xa8, 0x4e, 0xa7, 0xec, \
      0xcc, 0x07, 0x1b, 0x48, 0x4a, 0xb3, 0x43, 0x3a, \
      0x53, 0x87, 0x2b, 0x38, 0x63, 0xa5, 0x4f, 0x11, \
      0xf5, 0x2e, 0xfb, 0x51, 0xbd, 0xbc, 0x93, 0x05, \
    }}
static const rosidl_type_hash_t test_msgs__srv__Arrays_Event__TYPE_VERSION_HASH = test_msgs__srv__Arrays_Event__TYPE_VERSION_HASH__INIT;

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
