// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_msgs:srv/SetCameraInfo.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__STRUCT_H_
#define SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "rosidl_runtime_c/type_hash.h"


static const rosidl_type_hash_t sensor_msgs__srv__SetCameraInfo__TYPE_HASH = {1, {
    0xa1, 0x0c, 0xca, 0x5d, 0x33, 0xdc, 0x63, 0x7c,
    0x8d, 0x49, 0xdb, 0x50, 0xab, 0x28, 0x87, 0x01,
    0xa3, 0x59, 0x2b, 0xb9, 0xcd, 0x85, 0x4f, 0x2f,
    0x16, 0xa0, 0x65, 0x96, 0x13, 0xb6, 0x89, 0x84,
  }};


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__srv__SetCameraInfo_Request__TYPE_HASH = {1, {
    0x27, 0xdc, 0x54, 0x97, 0x73, 0x0f, 0xdb, 0x69,
    0x30, 0xe6, 0x6c, 0xb8, 0x79, 0xc2, 0x10, 0xe3,
    0x1a, 0x83, 0x02, 0x2a, 0xcc, 0x5b, 0xbc, 0x99,
    0x9f, 0x24, 0xf5, 0x52, 0x86, 0x02, 0x9f, 0x87,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.h"

/// Struct defined in srv/SetCameraInfo in the package sensor_msgs.
typedef struct sensor_msgs__srv__SetCameraInfo_Request
{
  /// The camera_info to store
  sensor_msgs__msg__CameraInfo camera_info;
} sensor_msgs__srv__SetCameraInfo_Request;

// Struct for a sequence of sensor_msgs__srv__SetCameraInfo_Request.
typedef struct sensor_msgs__srv__SetCameraInfo_Request__Sequence
{
  sensor_msgs__srv__SetCameraInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__srv__SetCameraInfo_Request__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__srv__SetCameraInfo_Response__TYPE_HASH = {1, {
    0x4d, 0xb6, 0xd7, 0xdf, 0x20, 0xcd, 0xcd, 0xc0,
    0x54, 0x30, 0x94, 0x5e, 0x76, 0xfa, 0x58, 0xe1,
    0xea, 0xb1, 0x28, 0x5c, 0x15, 0xf3, 0x1d, 0x26,
    0xfa, 0xd7, 0x6e, 0x2c, 0x1b, 0x10, 0x29, 0x9c,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'status_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetCameraInfo in the package sensor_msgs.
typedef struct sensor_msgs__srv__SetCameraInfo_Response
{
  /// True if the call succeeded
  bool success;
  /// Used to give details about success
  rosidl_runtime_c__String status_message;
} sensor_msgs__srv__SetCameraInfo_Response;

// Struct for a sequence of sensor_msgs__srv__SetCameraInfo_Response.
typedef struct sensor_msgs__srv__SetCameraInfo_Response__Sequence
{
  sensor_msgs__srv__SetCameraInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__srv__SetCameraInfo_Response__Sequence;


// Type Hash for interface
static const rosidl_type_hash_t sensor_msgs__srv__SetCameraInfo_Event__TYPE_HASH = {1, {
    0xe3, 0xb4, 0xe2, 0x1d, 0xdd, 0x26, 0x87, 0x11,
    0x66, 0xe6, 0xae, 0x7f, 0x34, 0x28, 0x56, 0xdf,
    0xcd, 0x3a, 0xc0, 0x33, 0xc7, 0xea, 0xc9, 0x9d,
    0xb6, 0xbf, 0xe5, 0x15, 0xfb, 0xa3, 0xd6, 0x93,
  }};

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  sensor_msgs__srv__SetCameraInfo_Event__request__MAX_SIZE = 1
};
// response
enum
{
  sensor_msgs__srv__SetCameraInfo_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetCameraInfo in the package sensor_msgs.
typedef struct sensor_msgs__srv__SetCameraInfo_Event
{
  service_msgs__msg__ServiceEventInfo info;
  sensor_msgs__srv__SetCameraInfo_Request__Sequence request;
  sensor_msgs__srv__SetCameraInfo_Response__Sequence response;
} sensor_msgs__srv__SetCameraInfo_Event;

// Struct for a sequence of sensor_msgs__srv__SetCameraInfo_Event.
typedef struct sensor_msgs__srv__SetCameraInfo_Event__Sequence
{
  sensor_msgs__srv__SetCameraInfo_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_msgs__srv__SetCameraInfo_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_MSGS__SRV__DETAIL__SET_CAMERA_INFO__STRUCT_H_
