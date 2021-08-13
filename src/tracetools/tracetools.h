// Copyright 2019 Robert Bosch GmbH
// Copyright 2020 Christophe Bedard
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

/** \mainpage tracetools: tracing tools and instrumentation for ROS 2
 *
 * `tracetools` provides utilities to instrument ROS.
 * It provides two main headers:
 *
 * - tracetools/tracetools.h
 *   - instrumentation functions
 * - tracetools/utils.hpp
 *   - utility functions
 */

#ifndef TRACETOOLS__TRACETOOLS_H_
#define TRACETOOLS__TRACETOOLS_H_

#include <stdint.h>
#include <string.h>
#include <stdbool.h>

#include "tracetools/config.h"
#include "tracetools/visibility_control.hpp"

#ifndef TRACETOOLS_DISABLED
/**
 * This allows us to select between two versions of each macro
 * to avoid the 'gnu-zero-variadic-macro-arguments' warning:
 *    1. Only one macro argument for tracepoints without any arguments.
 *    2. Up to 10 macro arguments for tracepoints with up to 9 arguments.
 * We can easily support more than 10 macro arguments if needed.
 */
#  define _GET_MACRO(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, NAME, ...) NAME

#  define _TRACEPOINT_NOARGS(event_name) \
  (ros_trace_ ## event_name)()
#  define _TRACEPOINT_ARGS(event_name, ...) \
  (ros_trace_ ## event_name)(__VA_ARGS__)
#  define _DECLARE_TRACEPOINT_NOARGS(event_name) \
  TRACETOOLS_PUBLIC void ros_trace_ ## event_name();
#  define _DECLARE_TRACEPOINT_ARGS(event_name, ...) \
  TRACETOOLS_PUBLIC void ros_trace_ ## event_name(__VA_ARGS__);

#  define _GET_MACRO_TRACEPOINT(...) \
  _GET_MACRO( \
    __VA_ARGS__, \
    _TRACEPOINT_ARGS, _TRACEPOINT_ARGS, _TRACEPOINT_ARGS, _TRACEPOINT_ARGS, _TRACEPOINT_ARGS, \
    _TRACEPOINT_ARGS, _TRACEPOINT_ARGS, _TRACEPOINT_ARGS, _TRACEPOINT_ARGS, _TRACEPOINT_NOARGS, \
    shoud_not_be_called_without_any_arguments)
#  define _GET_MACRO_DECLARE_TRACEPOINT(...) \
  _GET_MACRO( \
    __VA_ARGS__, \
    _DECLARE_TRACEPOINT_ARGS, _DECLARE_TRACEPOINT_ARGS, _DECLARE_TRACEPOINT_ARGS, \
    _DECLARE_TRACEPOINT_ARGS, _DECLARE_TRACEPOINT_ARGS, _DECLARE_TRACEPOINT_ARGS, \
    _DECLARE_TRACEPOINT_ARGS, _DECLARE_TRACEPOINT_ARGS, _DECLARE_TRACEPOINT_ARGS, \
    _DECLARE_TRACEPOINT_NOARGS, shoud_not_be_called_without_any_arguments)

/// Call a tracepoint.
/**
 * The first argument is mandatory and should be the tracepoint event name.
 * The other arguments should be the tracepoint arguments.
 * This is the preferred method over calling the actual function directly.
 *
 * This macro currently supports up to 9 tracepoint arguments after the event name.
 */
#  define TRACEPOINT(...) \
  _GET_MACRO_TRACEPOINT(__VA_ARGS__)(__VA_ARGS__)
#  define DECLARE_TRACEPOINT(...) \
  _GET_MACRO_DECLARE_TRACEPOINT(__VA_ARGS__)(__VA_ARGS__)
#else
#  define TRACEPOINT(...) ((void) (0))
#  define DECLARE_TRACEPOINT(...)
#endif  // TRACETOOLS_DISABLED

#ifdef __cplusplus
extern "C"
{
#endif

/// Get tracing compilation status.
/**
 * \return `true` if tracing is enabled, `false` otherwise
 */
TRACETOOLS_PUBLIC bool ros_trace_compile_status();

/// `rcl_init`
/**
 * Initialisation for the whole process.
 * Notes the `tracetools` version automatically.
 *
 * \param[in] context_handle pointer to the `rcl_context_t` handle
 */
DECLARE_TRACEPOINT(
  rcl_init,
  const void * context_handle)

/// `rcl_node_init`
/**
 * Node initialisation.
 * Links a `rcl_node_t` handle to its `rmw_node_t` handle.
 *
 * \param[in] node_handle pointer to the node's `rcl_node_t` handle
 * \param[in] rmw_handle pointer to the node's `rmw_node_t` handle
 * \param[in] node_name node name
 * \param[in] node_namespace node namespace
 */
DECLARE_TRACEPOINT(
  rcl_node_init,
  const void * node_handle,
  const void * rmw_handle,
  const char * node_name,
  const char * node_namespace)

/// `rmw_publisher_init`
/**
 * RMW publisher initialisation.
 * Links a `rmw_publisher_t` handle to its DDS/rmw GID.
 *
 * \param[in] rmw_publisher_handle pointer to the publisher's `rmw_publisher_t` handle
 * \param[in] gid pointer to the publisher's DDS/rmw GID
 */
DECLARE_TRACEPOINT(
  rmw_publisher_init,
  const void * rmw_publisher_handle,
  const uint8_t * gid)

/// `rcl_publisher_init`
/**
 * Publisher initialisation.
 * Links a `rcl_publisher_t` handle to its `rcl_node_t` handle
 * and its `rmw_publisher_t` handle, and links it to a topic name.
 *
 * \param[in] publisher_handle pointer to the publisher's `rcl_publisher_t` handle
 * \param[in] node_handle pointer to the `rcl_node_t` handle of the node the publisher belongs to
 * \param[in] rmw_publisher_handle pointer to the publisher's `rmw_publisher_t` handle
 * \param[in] topic_name full topic name
 * \param[in] queue_depth publisher history depth
 */
DECLARE_TRACEPOINT(
  rcl_publisher_init,
  const void * publisher_handle,
  const void * node_handle,
  const void * rmw_publisher_handle,
  const char * topic_name,
  const size_t queue_depth)

/// `rclcpp_publish`
/**
 * Message publication.
 * Notes the pointer to the message being published at the `rclcpp` level.
 *
 * \param[in] publisher_handle not used, but kept for API/ABI stability
 * \param[in] message pointer to the message being published
 */
DECLARE_TRACEPOINT(
  rclcpp_publish,
  const void * publisher_handle,
  const void * message)

/// `rcl_publish`
/**
 * Message publication.
 * Links a `rcl_publisher_t` handle to a pointer to
 * a message being published at the `rcl` level.
 *
 * \param[in] publisher_handle pointer to the publisher's `rcl_publisher_t` handle
 * \param[in] message pointer to the message being published
 */
DECLARE_TRACEPOINT(
  rcl_publish,
  const void * publisher_handle,
  const void * message)

/// `rmw_publish`
/**
 * Message publication.
 * Notes the pointer to the message being published at the `rmw` level.
 *
 * \param[in] message pointer to the message being published
 */
DECLARE_TRACEPOINT(
  rmw_publish,
  const void * message)

/// `rmw_subscription_init`
/**
 * RMW subscription initialisation.
 * Links a `rmw_subscription_handle` handle to its DDS/rmw GID.
 *
 * \param[in] rmw_subscription_handle pointer to the publisher's `rmw_subscription_t` handle
 * \param[in] gid pointer to the subscription's DDS/rmw GID
 */
DECLARE_TRACEPOINT(
  rmw_subscription_init,
  const void * rmw_subscription_handle,
  const uint8_t * gid)

/// `rcl_subscription_init`
/**
 * Subscription initialisation.
 * Links a `rcl_subscription_t` handle to its `rcl_node_t` handle
 * and its `rmw_subscription_t` handle, and links it to a topic name.
 *
 * \param[in] subscription_handle pointer to the subscription's `rcl_subscription_t` handle
 * \param[in] node_handle
 *  pointer to the `rcl_node_t` handle of the node the subscription belongs to
 * \param[in] rmw_subscription_handle pointer to the subscription's `rmw_subscription_t` handle
 * \param[in] topic_name full topic name
 * \param[in] queue_depth subscription history depth
 */
DECLARE_TRACEPOINT(
  rcl_subscription_init,
  const void * subscription_handle,
  const void * node_handle,
  const void * rmw_subscription_handle,
  const char * topic_name,
  const size_t queue_depth)

/// `rclcpp_subscription_init`
/**
 * Subscription object initialisation.
 * Links the `rclcpp::*Subscription*` object to a `rcl_subscription_t` handle.
 * Needed since there could be more than 1 `rclcpp::*Subscription*` object
 * for one `rcl` subscription (e.g. when using intra-process).
 *
 * \param[in] subscription_handle
 *  pointer to the `rcl_subscription_t` handle of the subscription this object belongs to
 * \param[in] subscription pointer to this subscription object (e.g. `rclcpp::*Subscription*`)
 */
DECLARE_TRACEPOINT(
  rclcpp_subscription_init,
  const void * subscription_handle,
  const void * subscription)

/// `rclcpp_subscription_callback_added`
/**
 * Link a subscription callback object to a subscription object.
 *
 * \param[in] subscription pointer to the subscription object this callback belongs to
 * \param[in] callback pointer to this callback object (e.g. `rclcpp::AnySubscriptionCallback`)
 */
DECLARE_TRACEPOINT(
  rclcpp_subscription_callback_added,
  const void * subscription,
  const void * callback)

/// `rmw_take`
/**
 * Message taking.
 * Links a `rmw_subscription_t` handle to a pointer
 * to a message being taken at the `rmw` level.
 *
 * \param[in] rmw_subscription_handle pointer to the subscription's `rmw_subscription_t` handle
 * \param[in] message pointer to the message being taken
 * \param[in] source_timestamp the source timestamp of the received message,
 *  or 0 (if no message or no info)
 * \param[in] taken whether a message was taken
 */
DECLARE_TRACEPOINT(
  rmw_take,
  const void * rmw_subscription_handle,
  const void * message,
  int64_t source_timestamp,
  const bool taken)

/// `rcl_take`
/**
 * Message taking.
 * Notes the pointer to the message being taken at the `rcl` level.
 *
 * \param[in] message pointer to the message being taken
 */
DECLARE_TRACEPOINT(
  rcl_take,
  const void * message)

/// `rclcpp_take`
/**
 * Message taking.
 * Notes the pointer to the message being taken at the `rclcpp` level.
 *
 * \param[in] message pointer to the message being taken
 */
DECLARE_TRACEPOINT(
  rclcpp_take,
  const void * message)

/// `rcl_service_init`
/**
 * Service initialisation.
 * Links a `rcl_service_t` handle to its `rcl_node_t` handle
 * and its `rmw_service_t` handle, and links it to a service name.
 *
 * \param[in] service_handle pointer to the service's `rcl_service_t` handle
 * \param[in] node_handle pointer to the `rcl_node_t` handle of the node the service belongs to
 * \param[in] rmw_service_handle pointer to the service's `rmw_service_t` handle
 * \param[in] service_name full service name
 */
DECLARE_TRACEPOINT(
  rcl_service_init,
  const void * service_handle,
  const void * node_handle,
  const void * rmw_service_handle,
  const char * service_name)

/// `rclcpp_service_callback_added`
/**
 * Link a service callback object to a service.
 *
 * \param[in] service_handle
 *  pointer to the `rcl_service_t` handle of the service this callback belongs to
 * \param[in] callback pointer to this callback object (e.g. `rclcpp::AnyServiceCallback`)
 */
DECLARE_TRACEPOINT(
  rclcpp_service_callback_added,
  const void * service_handle,
  const void * callback)

/// `rcl_client_init`
/**
 * Client initialisation.
 * Links a `rcl_client_t` handle to its `rcl_node_t` handle
 * and its `rmw_client_t` handle, and links it to a client name.
 *
 * \param[in] client_handle pointer to the client's `rcl_client_t` handle
 * \param[in] node_handle pointer to the `rcl_node_t` handle of the node the client belongs to
 * \param[in] rmw_client_handle pointer to the client's `rmw_client_t` handle
 * \param[in] service_name full client name
 */
DECLARE_TRACEPOINT(
  rcl_client_init,
  const void * client_handle,
  const void * node_handle,
  const void * rmw_client_handle,
  const char * service_name)

/// `rcl_timer_init`
/**
 * Timer initialisation.
 * Notes the timer's period.
 *
 * \param[in] timer_handle pointer to the timer's `rcl_timer_t` handle
 * \param[in] period period in nanoseconds
 */
DECLARE_TRACEPOINT(
  rcl_timer_init,
  const void * timer_handle,
  int64_t period)

/// `rclcpp_timer_callback_added`
/**
 * Link a timer callback object to its `rcl_timer_t` handle.
 *
 * \param[in] timer_handle
 *  pointer to the `rcl_timer_t` handle of the timer this callback belongs to
 * \param[in] callback pointer to the callback object (`std::function`)
 */
DECLARE_TRACEPOINT(
  rclcpp_timer_callback_added,
  const void * timer_handle,
  const void * callback)

/// `rclcpp_timer_link_node`
/**
 * Link a timer to a node.
 *
 * \param[in] timer_handle pointer to the timer's `rcl_timer_t` handle
 * \param[in] node_handle pointer to the `rcl_node_t` handle of the node the timer belongs to
 */
DECLARE_TRACEPOINT(
  rclcpp_timer_link_node,
  const void * timer_handle,
  const void * node_handle)

/// `rclcpp_callback_register`
/**
 * Register a demangled function symbol with a callback.
 *
 * \param[in] callback pointer to the callback object
 *  (e.g. `rclcpp::AnySubscriptionCallback`,
 *  `rclcpp::AnyServiceCallback`, timer `std::function`, etc.)
 * \param[in] function_symbol demangled symbol of the callback function/lambda,
 *  see \ref get_symbol()
 */
DECLARE_TRACEPOINT(
  rclcpp_callback_register,
  const void * callback,
  const char * function_symbol)

/// `callback_start`
/**
 * Start of a callback.
 *
 * \param[in] callback pointer to this callback object
 *  (e.g. `rclcpp::AnySubscriptionCallback`,
 *  `rclcpp::AnyServiceCallback`, timer `std::function`, etc.)
 * \param[in] is_intra_process whether this callback is done via intra-process or not
 */
DECLARE_TRACEPOINT(
  callback_start,
  const void * callback,
  const bool is_intra_process)

/// `callback_end`
/**
 * End of a callback.
 *
 * \param[in] callback pointer to this callback object
 *  (e.g. `rclcpp::AnySubscriptionCallback`,
 *  `rclcpp::AnyServiceCallback`, timer `std::function`, etc.)
 */
DECLARE_TRACEPOINT(
  callback_end,
  const void * callback)

/// `rcl_lifecycle_state_machine_init`
/**
 * Lifecycle state machine initialisation.
 * Links a `rcl_lifecycle_state_machine_t` handle to a `rcl_node_t` handle.
 *
 * \param[in] node_handle pointer to the node handle
 * \param[in] state_machine pointer to the state machine
 */
DECLARE_TRACEPOINT(
  rcl_lifecycle_state_machine_init,
  const void * node_handle,
  const void * state_machine)

/// `rcl_lifecycle_transition`
/**
 * Lifecycle transition between two states.
 *
 * \param[in] state_machine pointer to the state machine for the transition
 * \param[in] start_label start state label
 * \param[in] goal_label goal state label
 */
DECLARE_TRACEPOINT(
  rcl_lifecycle_transition,
  const void * state_machine,
  const char * start_label,
  const char * goal_label)

/// `rclcpp_executor_get_next_ready`
/**
 * Notes the start time of the executor phase that gets the next executable that's ready.
 */
DECLARE_TRACEPOINT(
  rclcpp_executor_get_next_ready)

/// `rclcpp_executor_wait_for_work`
/**
 * Notes the start time of the executor phase that waits for work and notes the timeout value.
 *
 * \param[in] timeout the timeout value for the wait call
 */
DECLARE_TRACEPOINT(
  rclcpp_executor_wait_for_work,
  const int64_t timeout)

/// `rclcpp_executor_execute`
/**
 * Executable execution.
 * Notes an executable being executed using its `rcl` handle, which can be a:
 *   * timer
 *   * subscription
 *
 * \param[in] handle pointer to the `rcl` handle of the executable being executed
 */
DECLARE_TRACEPOINT(
  rclcpp_executor_execute,
  const void * handle)

#ifdef __cplusplus
}
#endif

#endif  // TRACETOOLS__TRACETOOLS_H_
