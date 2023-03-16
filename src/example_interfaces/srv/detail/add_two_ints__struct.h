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


// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__AddTwoInts__TYPE_VERSION_HASH__INIT {1, { \
      0xd0, 0xf8, 0xc1, 0x05, 0x25, 0xcd, 0x07, 0xe0, \
      0xf1, 0xdc, 0x45, 0xcc, 0x6e, 0x11, 0xf5, 0x70, \
      0xc5, 0x65, 0x3e, 0x69, 0x4b, 0x3f, 0x0d, 0x75, \
      0xa1, 0x07, 0x76, 0x82, 0x77, 0x4f, 0xda, 0x71, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__AddTwoInts__TYPE_VERSION_HASH = example_interfaces__srv__AddTwoInts__TYPE_VERSION_HASH__INIT;


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__AddTwoInts_Request__TYPE_VERSION_HASH__INIT {1, { \
      0x87, 0x61, 0x7a, 0xa5, 0x76, 0x89, 0x74, 0xf9, \
      0x2e, 0x25, 0x7f, 0x89, 0xaa, 0x76, 0x96, 0xbf, \
      0x77, 0x97, 0x00, 0x85, 0x2c, 0xdc, 0x24, 0x99, \
      0x54, 0xec, 0xc2, 0x87, 0x8b, 0x71, 0xda, 0x28, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__AddTwoInts_Request__TYPE_VERSION_HASH = example_interfaces__srv__AddTwoInts_Request__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__AddTwoInts_Response__TYPE_VERSION_HASH__INIT {1, { \
      0xb2, 0x5a, 0x7c, 0x1a, 0x3e, 0xb4, 0xa0, 0x65, \
      0x64, 0xd6, 0x99, 0xe0, 0x91, 0x69, 0x2d, 0xa4, \
      0x34, 0xa3, 0x78, 0x82, 0x76, 0xf2, 0x00, 0x23, \
      0x97, 0x06, 0x2f, 0xf0, 0xdf, 0x34, 0xb7, 0x51, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__AddTwoInts_Response__TYPE_VERSION_HASH = example_interfaces__srv__AddTwoInts_Response__TYPE_VERSION_HASH__INIT;

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


// Type Version Hash for interface
// Note: this define is for MSVC, where the static const var can't be used in downstream aggregate initializers
#define example_interfaces__srv__AddTwoInts_Event__TYPE_VERSION_HASH__INIT {1, { \
      0xd2, 0x38, 0xd1, 0x2f, 0x82, 0xef, 0x51, 0x1b, \
      0xdc, 0x4e, 0xe1, 0x22, 0x16, 0x77, 0x0d, 0x80, \
      0xc8, 0x62, 0xfd, 0xc2, 0xf3, 0x5d, 0x10, 0x07, \
      0x97, 0x49, 0x1a, 0x78, 0x5d, 0x64, 0xd4, 0x41, \
    }}
static const rosidl_type_hash_t example_interfaces__srv__AddTwoInts_Event__TYPE_VERSION_HASH = example_interfaces__srv__AddTwoInts_Event__TYPE_VERSION_HASH__INIT;

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
