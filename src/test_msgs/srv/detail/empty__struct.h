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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__Empty__TYPE_VERSION_HASH__INIT {1, { \
      0x6c, 0x14, 0x19, 0x6f, 0x45, 0xb0, 0x90, 0x80, \
      0x0e, 0x63, 0xab, 0x95, 0x91, 0x30, 0xa6, 0x10, \
      0x0b, 0x49, 0x9c, 0xe0, 0x74, 0x20, 0x1f, 0xe1, \
      0x82, 0x0f, 0x36, 0xff, 0x5c, 0xfd, 0x4c, 0xc7, \
    }}
static const rosidl_type_hash_t test_msgs__srv__Empty__TYPE_VERSION_HASH = test_msgs__srv__Empty__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__Empty_Request__TYPE_VERSION_HASH__INIT {1, { \
      0xc6, 0xc3, 0x0e, 0xa6, 0xf0, 0x75, 0x90, 0x89, \
      0x74, 0xb6, 0x66, 0x60, 0x2c, 0x88, 0x38, 0x57, \
      0xae, 0x5b, 0xf0, 0xcd, 0x41, 0xe3, 0x5b, 0x43, \
      0xc7, 0x9d, 0x1d, 0x42, 0x98, 0x06, 0xb2, 0x32, \
    }}
static const rosidl_type_hash_t test_msgs__srv__Empty_Request__TYPE_VERSION_HASH = test_msgs__srv__Empty_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__Empty_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xd7, 0x1d, 0x90, 0x0d, 0x8b, 0xda, 0x4f, 0xf2, \
      0x4a, 0x6e, 0xd5, 0x77, 0xad, 0xa7, 0x81, 0x9f, \
      0x3b, 0x19, 0x3b, 0xef, 0xb9, 0x19, 0xa7, 0x2e, \
      0xc8, 0xfd, 0x33, 0xdf, 0x77, 0x3e, 0x89, 0xf0, \
    }}
static const rosidl_type_hash_t test_msgs__srv__Empty_Response__TYPE_VERSION_HASH = test_msgs__srv__Empty_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define test_msgs__srv__Empty_Event__TYPE_VERSION_HASH__INIT {1, { \
      0x71, 0x00, 0x4e, 0x16, 0x1a, 0x6c, 0x96, 0x3e, \
      0x76, 0x27, 0xc2, 0x70, 0x1c, 0x5d, 0xb0, 0x8c, \
      0x79, 0x27, 0x1e, 0xe3, 0xbd, 0xa5, 0xa6, 0xf9, \
      0x32, 0x7b, 0x5c, 0x96, 0x27, 0x8f, 0xcd, 0xce, \
    }}
static const rosidl_type_hash_t test_msgs__srv__Empty_Event__TYPE_VERSION_HASH = test_msgs__srv__Empty_Event__TYPE_VERSION_HASH__INIT;

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
