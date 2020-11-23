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

#include <rmw/ret_types.h>
#include <rmw/init_options.h>

#if defined(__cplusplus)
extern "C"
{
#endif

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
  int argc, const char * const argv[],
  rmw_init_options_t * rmw_options);

/**
 * \brief Fills rmw implementation-specific options with the given parameters.
 *
 * \param[in] dev Serial device.
 * \param[in,out] rmw_options Updated options with rmw specifics.
 * \return RMW_RET_OK If arguments were valid and set in rmw_init_options.
 * \return RMW_RET_INVALID_ARGUMENT If rmw_init_options is not valid or unexpected arguments.
 */
rmw_ret_t rmw_uros_options_set_serial_device(const char * dev, rmw_init_options_t * rmw_options);

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
  const char * ip, const char * port,
  rmw_init_options_t * rmw_options);

/**
 * \brief Fills rmw implementation-specific options with the autodicovered address of an micro-ROS Agent.
 *
 * \param[in,out] rmw_options Updated options with rmw specifics.
 * \return RMW_RET_OK If arguments were valid and set in rmw_init_options.
 * \return RMW_RET_TIMEOUT If micro-ROS agent autodiscovery is timeout.
 * \return RMW_RET_INVALID_ARGUMENT If rmw_init_options is not valid or unexpected arguments.
 */
rmw_ret_t rmw_uros_discover_agent(rmw_init_options_t * rmw_options);

/**
 * \brief Fills rmw implementation-specific options with the given parameters.
 *
 * \param[in] client_key MicroXRCE-DDS client key.
 * \param[in,out] rmw_options Updated options with rmw specifics.
 * \return RMW_RET_OK If arguments were valid and set in rmw_init_options.
 * \return RMW_RET_INVALID_ARGUMENT If rmw_init_options is not valid or unexpected arguments.
 */
rmw_ret_t rmw_uros_options_set_client_key(uint32_t client_key, rmw_init_options_t * rmw_options);

/**
 * \brief Check if micro-ROS Agent answers to micro-ROS client
 *
 * \param[in] timeout_ms timeout in ms.
 * \return RMW_RET_OK If micro-ROS Agent is available.
 * \return RMW_RET_ERROR If micro-ROS Agent is not available.
 */
rmw_ret_t rmw_uros_check_agent_status(int timeout_ms);

#if defined(__cplusplus)
}
#endif

#endif  // RMW_UROS__OPTIONS_H_
