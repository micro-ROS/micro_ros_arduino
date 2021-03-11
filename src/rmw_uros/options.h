// Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

#ifndef RMW_UROS__OPTIONS_H_
#define RMW_UROS__OPTIONS_H_

#include <rmw/rmw.h>
#include <rmw/ret_types.h>
#include <rmw/init_options.h>
#include <rmw_microxrcedds_c/config.h>
#include <ucdr/microcdr.h>

#ifdef RMW_UXRCE_TRANSPORT_CUSTOM
#include <uxr/client/profile/transport/custom/custom_transport.h>
#endif  // RMW_UROS__OPTIONS_H_


#if defined(__cplusplus)
extern "C"
{
#endif // if defined(__cplusplus)

#ifdef RMW_UXRCE_TRANSPORT_IPV4
  #define MAX_IP_LEN         16
#elif defined(RMW_UXRCE_TRANSPORT_IPV6)
  #define MAX_IP_LEN         39
#endif // ifdef RMW_UXRCE_TRANSPORT_IPV4
#define MAX_PORT_LEN         5
#define MAX_SERIAL_DEVICE    50

typedef struct rmw_uxrce_transport_params_t
{
#if defined(RMW_UXRCE_TRANSPORT_SERIAL)
    char serial_device[MAX_SERIAL_DEVICE];
#elif defined(RMW_UXRCE_TRANSPORT_UDP)
    char agent_address[MAX_IP_LEN];
    char agent_port[MAX_PORT_LEN];
#elif defined(RMW_UXRCE_TRANSPORT_CUSTOM)
    bool framing;
    void*             args;
    open_custom_func open_cb;
    close_custom_func close_cb;
    write_custom_func write_cb;
    read_custom_func read_cb;
#endif // if defined(RMW_UXRCE_TRANSPORT_SERIAL)
    uint32_t client_key;
} rmw_uxrce_transport_params_t;

/**
 * \brief Parses command line args and fills rmw implementation-specific options.
 * `rmw_init_options allocator` is used to allocate the specific rmw options.
 *
 * \param[in] argc Number of arguments.
 * \param[in] argv Arguments.
 * \param[in,out] rmw_options Updated options with rmw specifics.
 * \return RMW_RET_OK If arguments were valid and set in rmw_init_options.
 * \return RMW_RET_INVALID_ARGUMENT If rmw_init_options is not valid or unexpected arguments.
 */
rmw_ret_t rmw_uros_init_options(
        int argc,
        const char* const argv[],
        rmw_init_options_t* rmw_options);

/**
 * \brief Fills rmw implementation-specific options with the given parameters.
 *
 * \param[in] dev Serial device.
 * \param[in,out] rmw_options Updated options with rmw specifics.
 * \return RMW_RET_OK If arguments were valid and set in rmw_init_options.
 * \return RMW_RET_INVALID_ARGUMENT If rmw_init_options is not valid or unexpected arguments.
 */
rmw_ret_t rmw_uros_options_set_serial_device(
        const char* dev,
        rmw_init_options_t* rmw_options);

/**
 * \brief Fills rmw implementation-specific options with the given parameters.
 *
 * \param[in] ip Agent IP address.
 * \param[in] port Agent UDP port.
 * \param[in,out] rmw_options Updated options with rmw specifics.
 * \return RMW_RET_OK If arguments were valid and set in rmw_init_options.
 * \return RMW_RET_INVALID_ARGUMENT If rmw_init_options is not valid or unexpected arguments.
 */
rmw_ret_t rmw_uros_options_set_udp_address(
        const char* ip,
        const char* port,
        rmw_init_options_t* rmw_options);

/**
 * \brief Fills rmw implementation-specific options with the autodicovered address of an micro-ROS Agent.
 *
 * \param[in,out] rmw_options Updated options with rmw specifics.
 * \return RMW_RET_OK If arguments were valid and set in rmw_init_options.
 * \return RMW_RET_TIMEOUT If micro-ROS agent autodiscovery is timeout.
 * \return RMW_RET_INVALID_ARGUMENT If rmw_init_options is not valid or unexpected arguments.
 */
rmw_ret_t rmw_uros_discover_agent(
        rmw_init_options_t* rmw_options);

/**
 * \brief Fills rmw implementation-specific options with the given parameters.
 *
 * \param[in] client_key MicroXRCE-DDS client key.
 * \param[in,out] rmw_options Updated options with rmw specifics.
 * \return RMW_RET_OK If arguments were valid and set in rmw_init_options.
 * \return RMW_RET_INVALID_ARGUMENT If rmw_init_options is not valid or unexpected arguments.
 */
rmw_ret_t rmw_uros_options_set_client_key(
        uint32_t client_key,
        rmw_init_options_t* rmw_options);

/**
 * \brief Check if micro-ROS Agent is up and running.
 *        This function can be called even when the micro-ROS context has not yet been
 *        initialized by the application logics.
 * \param[in] timeout_ms Timeout in ms (per attempt).
 * \param[in] attempts Number of tries before considering the ping as failed.
 * \return RMW_RET_OK If micro-ROS Agent is available.
 * \return RMW_RET_ERROR If micro-ROS Agent is not available.
 */
rmw_ret_t rmw_uros_ping_agent(
        const int timeout_ms,
        const uint8_t attempts);

/**
 * \brief Sets the callback functions for continous serialization for a publisher
 *
 * \param[in] publisher publisher where continous serialization is being configured
 * \param[in] size_cb callback that should modify the total serialization size
 * \param[in] serialization_cb callback that should serialize the user part of the message
 */

typedef void (* rmw_uros_continous_serialization_size)(
        uint32_t* topic_length);
typedef void (* rmw_uros_continous_serialization)(
        ucdrBuffer* ucdr);

void rmw_uros_set_continous_serialization_callbacks(
        rmw_publisher_t* publisher,
        rmw_uros_continous_serialization_size size_cb,
        rmw_uros_continous_serialization serialization_cb);

#ifdef RMW_UXRCE_TRANSPORT_CUSTOM
extern rmw_uxrce_transport_params_t rmw_uxrce_transport_default_params;

/**
 * \brief Check if micro-ROS Agent answers to micro-ROS client
 *
 * \param[in] framing Enable XRCE framing.
 * \param[in] args Arguments for open function.
 * \param[in] open_cb Open transport callback.
 * \param[in] close_cb Close transport callback.
 * \param[in] write_cb Write transport callback.
 * \param[in] read_cb Read transport callback.
 * \return RMW_RET_OK If correct.
 * \return RMW_RET_ERROR If invalid.
 */
rmw_ret_t rmw_uros_set_custom_transport(
        bool framing,
        void* args,
        open_custom_func open_cb,
        close_custom_func close_cb,
        write_custom_func write_cb,
        read_custom_func read_cb);

#endif //RMW_UXRCE_TRANSPORT_CUSTOM

#if defined(__cplusplus)
}
#endif // if defined(__cplusplus)

#endif  // RMW_UROS__OPTIONS_H_
