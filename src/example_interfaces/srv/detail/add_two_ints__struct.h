// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define EXAMPLE_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t example_interfaces__srv__AddTwoInts__TYPE_HASH = {1, {
    0xe1, 0x18, 0xde, 0x6b, 0xf5, 0xee, 0xb6, 0x6a,
    0x24, 0x91, 0xb5, 0xbd, 0xa1, 0x12, 0x02, 0xe7,
    0xb6, 0x8f, 0x19, 0x8d, 0x6f, 0x67, 0x92, 0x2c,
    0xf3, 0x03, 0x64, 0x85, 0x82, 0x39, 0xc8, 0x1a,
  }};


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__srv__AddTwoInts_Request__TYPE_HASH = {1, {
    0x00, 0x0c, 0x5f, 0xd9, 0x2d, 0x6b, 0x2e, 0x1a,
    0x05, 0x94, 0x93, 0x48, 0xf5, 0x84, 0xd6, 0xd6,
    0x52, 0xad, 0xea, 0x1e, 0x92, 0xd6, 0x91, 0x79,
    0x20, 0x11, 0xac, 0x22, 0x73, 0x50, 0x83, 0x02,
  }};

// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package example_interfaces.
typedef struct example_interfaces__srv__AddTwoInts_Request
{
  int64_t a;
  int64_t b;
} example_interfaces__srv__AddTwoInts_Request;

// Struct for a sequence of example_interfaces__srv__AddTwoInts_Request.
typedef struct example_interfaces__srv__AddTwoInts_Request__Sequence
{
  example_interfaces__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__AddTwoInts_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__srv__AddTwoInts_Response__TYPE_HASH = {1, {
    0xde, 0x5c, 0x03, 0x0d, 0x4a, 0xf3, 0x3c, 0xba,
    0x27, 0x49, 0x31, 0x0b, 0x24, 0x97, 0x37, 0xb6,
    0x31, 0x59, 0x47, 0x03, 0xf9, 0x30, 0x04, 0x95,
    0xf4, 0x8b, 0xff, 0xb2, 0xb4, 0x4d, 0xcc, 0x2f,
  }};

// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package example_interfaces.
typedef struct example_interfaces__srv__AddTwoInts_Response
{
  int64_t sum;
} example_interfaces__srv__AddTwoInts_Response;

// Struct for a sequence of example_interfaces__srv__AddTwoInts_Response.
typedef struct example_interfaces__srv__AddTwoInts_Response__Sequence
{
  example_interfaces__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__AddTwoInts_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t example_interfaces__srv__AddTwoInts_Event__TYPE_HASH = {1, {
    0x32, 0xc1, 0xd1, 0x40, 0x25, 0x9c, 0x71, 0xe5,
    0xc3, 0x55, 0x11, 0x59, 0x42, 0xbc, 0xb3, 0x1d,
    0xf9, 0x8b, 0x43, 0x30, 0xe4, 0xd9, 0x06, 0xb1,
    0xb7, 0x5c, 0xcb, 0x1c, 0x9b, 0x3c, 0xe6, 0xc8,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  example_interfaces__srv__AddTwoInts_Event__request__MAX_SIZE = 1
};
// response
enum
{
  example_interfaces__srv__AddTwoInts_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddTwoInts in the package example_interfaces.
typedef struct example_interfaces__srv__AddTwoInts_Event
{
  service_msgs__msg__ServiceEventInfo info;
  example_interfaces__srv__AddTwoInts_Request__Sequence request;
  example_interfaces__srv__AddTwoInts_Response__Sequence response;
} example_interfaces__srv__AddTwoInts_Event;

// Struct for a sequence of example_interfaces__srv__AddTwoInts_Event.
typedef struct example_interfaces__srv__AddTwoInts_Event__Sequence
{
  example_interfaces__srv__AddTwoInts_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__AddTwoInts_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
