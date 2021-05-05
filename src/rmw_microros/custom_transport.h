// Copyright 2021 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/**
 * @file
 */

#ifndef RMW_MICROROS__CUSTOM_TRANSPORTS_H_
#define RMW_MICROROS__CUSTOM_TRANSPORTS_H_

#include <rmw/rmw.h>
#include <rmw/ret_types.h>
#include <rmw/init_options.h>
#include <rmw_microxrcedds_c/config.h>
#include <ucdr/microcdr.h>

#include <uxr/client/profile/transport/custom/custom_transport.h>

#if defined(__cplusplus)
extern "C"
{
#endif // if defined(__cplusplus)

/** \addtogroup rmw micro-ROS RMW API
 *  @{
 */

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

/** @}*/

#if defined(__cplusplus)
}
#endif // if defined(__cplusplus)

#endif  // RMW_MICROROS__CUSTOM_TRANSPORTS_H_
