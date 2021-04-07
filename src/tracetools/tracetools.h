// Copyright 2019 Robert Bosch GmbH
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
/// Call a tracepoint.
/**
 * This is the preferred method over calling the actual function directly.
 */
#  define TRACEPOINT(event_name, ...) \
  (ros_trace_ ## event_name)(__VA_ARGS__)
#  define DECLARE_TRACEPOINT(event_name, ...) \
  TRACETOOLS_PUBLIC void ros_trace_ ## event_name(__VA_ARGS__);
#else
#  define TRACEPOINT(event_name, ...) ((void) (0))
#  define DECLARE_TRACEPOINT(event_name, ...)
#endif

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

#ifdef __cplusplus
}
#endif

#endif  // TRACETOOLS__TRACETOOLS_H_
