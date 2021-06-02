// Copyright (c) 2021 - for information on the respective copyright owner
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCLC_PARAMETER__RCLC_PARAMETER_H_
#define RCLC_PARAMETER__RCLC_PARAMETER_H_

#if __cplusplus
extern "C"
{
#endif  // if __cplusplus

#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <rcl/types.h>

#include <rcl_interfaces/msg/parameter.h>
#include <rcl_interfaces/msg/parameter_value.h>
#include <rcl_interfaces/msg/parameter_event.h>
#include <rcl_interfaces/srv/get_parameter_types.h>
#include <rcl_interfaces/srv/get_parameters.h>
#include <rcl_interfaces/msg/set_parameters_result.h>
#include <rcl_interfaces/srv/list_parameters.h>
#include <rcl_interfaces/srv/set_parameters.h>
#include <rcl_interfaces/srv/describe_parameters.h>
#include <rcl_interfaces/msg/parameter_descriptor.h>
#include <rosidl_runtime_c/string_functions.h>
#include <rosidl_runtime_c/primitives_sequence_functions.h>

#include <rclc_parameter/visibility_control.h>

// Alias for rcl_interfaces types

typedef struct rcl_interfaces__srv__GetParameters_Request GetParameters_Request;
typedef struct rcl_interfaces__srv__GetParameters_Response GetParameters_Response;

typedef struct rcl_interfaces__srv__GetParameterTypes_Request GetParameterTypes_Request;
typedef struct rcl_interfaces__srv__GetParameterTypes_Response GetParameterTypes_Response;

typedef struct rcl_interfaces__srv__SetParameters_Request SetParameters_Request;
typedef struct rcl_interfaces__srv__SetParameters_Response SetParameters_Response;
typedef struct rcl_interfaces__msg__SetParametersResult SetParameters_Result;

typedef struct rcl_interfaces__srv__DescribeParameters_Request DescribeParameters_Request;
typedef struct rcl_interfaces__srv__DescribeParameters_Response DescribeParameters_Response;

typedef struct rcl_interfaces__srv__ListParameters_Request ListParameters_Request;
typedef struct rcl_interfaces__srv__ListParameters_Response ListParameters_Response;

typedef struct rcl_interfaces__msg__Parameter Parameter;
typedef struct rcl_interfaces__msg__ParameterValue ParameterValue;
typedef struct rcl_interfaces__msg__Parameter__Sequence Parameter__Sequence;
typedef struct rcl_interfaces__msg__ParameterEvent ParameterEvent;

// Number of RCLC executor handles required for a parameter server
#define RCLC_PARAMETER_EXECUTOR_HANDLES_NUMBER 5

// On parameter modified callback
typedef void (* ModifiedParameter_Callback)(Parameter * param);

// Allowed RCLC parameter types
typedef enum rclc_parameter_type_t
{
  RCLC_PARAMETER_NOT_SET = 0,
  RCLC_PARAMETER_BOOL,
  RCLC_PARAMETER_INT,
  RCLC_PARAMETER_DOUBLE
} rclc_parameter_type_t;

// RCLC parameter server options
typedef struct rclc_parameter_options_t
{
  bool notify_changed_over_dds;
  size_t max_params;
} rclc_parameter_options_t;

// Container for RCLC parameter server
typedef struct rclc_parameter_server_t
{
  rcl_service_t get_service;
  rcl_service_t get_types_service;
  rcl_service_t set_service;
  rcl_service_t list_service;
  rcl_service_t describe_service;
  rcl_publisher_t event_publisher;

  GetParameters_Request get_request;
  GetParameters_Response get_response;

  GetParameterTypes_Request get_types_request;
  GetParameterTypes_Response get_types_response;

  SetParameters_Request set_request;
  SetParameters_Response set_response;

  ListParameters_Request list_request;
  ListParameters_Response list_response;

  DescribeParameters_Request describe_request;
  DescribeParameters_Response describe_response;

  Parameter__Sequence parameter_list;

  ParameterEvent event_list;

  ModifiedParameter_Callback on_modification;

  bool notify_changed_over_dds;
} rclc_parameter_server_t;

/**
 *  Initializes a RCLC parameter server in a node with default configuration
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[inout] parameter_server preallocated rclc_parameter_server_t
 * \param[in] node related node
 * \return `RCL_RET_OK` if the \p parameter_server was initialized successfully
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t rclc_parameter_server_init_default(
  rclc_parameter_server_t * parameter_server,
  rcl_node_t * node);

/**
 *  Initializes a RCLC parameter server in a node with given configuration
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[inout] parameter_server preallocated rclc_parameter_server_t
 * \param[in] node related node
 * \param[in] options rclc_parameter_options_t struct with parameter options
 * \return `RCL_RET_OK` if the \p parameter_server was initialized successfully
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t rclc_parameter_server_init_with_option(
  rclc_parameter_server_t * parameter_server,
  rcl_node_t * node,
  const rclc_parameter_options_t * options);

/**
 *  Destroy a RCLC parameter server
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[in] parameter_server preallocated rclc_parameter_server_t
 * \param[in] node related node
 * \return `RCL_RET_OK` if the \p parameter_server was destroyed successfully
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t rclc_parameter_server_fini(
  rclc_parameter_server_t * parameter_server,
  rcl_node_t * node);

/**
 *  Adds a RCLC parameter server to an RCLC executor
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[in] executor RCLC executor
 * \param[in] parameter_server preallocated rclc_parameter_server_t
 * \param[in] on_modification on parameter modification callback
 * \return `RCL_RET_OK` if success
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t rclc_executor_add_parameter_server(
  rclc_executor_t * executor,
  rclc_parameter_server_t * parameter_server,
  ModifiedParameter_Callback on_modification);

/**
 *  Adds a RCLC parameter to a server
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[in] parameter_server preallocated rclc_parameter_server_t
 * \param[in] parameter_name name of the parameter
 * \param[in] type type of the parameter
 * \return `RCL_RET_OK` if success
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t
rclc_add_parameter(
  rclc_parameter_server_t * parameter_server,
  const char * parameter_name,
  rclc_parameter_type_t type);

/**
 *  Sets the value of an existing a RCLC bool parameter
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[in] parameter_server preallocated rclc_parameter_server_t
 * \param[in] parameter_name name of the parameter
 * \param[in] value value of the parameter
 * \return `RCL_RET_OK` if success
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t
rclc_parameter_set_bool(
  rclc_parameter_server_t * parameter_server,
  const char * parameter_name,
  bool value);

/**
 *  Sets the value of an existing a RCLC integer parameter
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[in] parameter_server preallocated rclc_parameter_server_t
 * \param[in] parameter_name name of the parameter
 * \param[in] value value of the parameter
 * \return `RCL_RET_OK` if success
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t
rclc_parameter_set_int(
  rclc_parameter_server_t * parameter_server,
  const char * parameter_name,
  int64_t value);

/**
 *  Sets the value of an existing a RCLC double parameter
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[in] parameter_server preallocated rclc_parameter_server_t
 * \param[in] parameter_name name of the parameter
 * \param[in] value value of the parameter
 * \return `RCL_RET_OK` if success
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t
rclc_parameter_set_double(
  rclc_parameter_server_t * parameter_server,
  const char * parameter_name,
  double value);

/**
 *  Get the value of an existing a RCLC bool parameter
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[in] parameter_server preallocated rclc_parameter_server_t
 * \param[in] parameter_name name of the parameter
 * \param[inout] value returns value of the parameter
 * \return `RCL_RET_OK` if success
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t
rclc_parameter_get_bool(
  rclc_parameter_server_t * parameter_server,
  const char * parameter_name,
  bool * output);

/**
 *  Get the value of an existing a RCLC integer parameter
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[in] parameter_server preallocated rclc_parameter_server_t
 * \param[in] parameter_name name of the parameter
 * \param[inout] value returns value of the parameter
 * \return `RCL_RET_OK` if success
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t
rclc_parameter_get_int(
  rclc_parameter_server_t * parameter_server,
  const char * parameter_name,
  int * output);

/**
 *  Get the value of an existing a RCLC double parameter
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | No
 *
 * \param[in] parameter_server preallocated rclc_parameter_server_t
 * \param[in] parameter_name name of the parameter
 * \param[inout] value returns value of the parameter
 * \return `RCL_RET_OK` if success
 */
RCLC_PARAMETER_PUBLIC
rcl_ret_t
rclc_parameter_get_double(
  rclc_parameter_server_t * parameter_server,
  const char * parameter_name,
  double * output);

#if __cplusplus
}
#endif  // if __cplusplus

#endif  // RCLC_PARAMETER__RCLC_PARAMETER_H_
