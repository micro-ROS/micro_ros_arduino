// Copyright 2020 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

#ifndef UXR_CLIENT_UTIL_PING_H_
#define UXR_CLIENT_UTIL_PING_H_

#ifdef __cplusplus
extern "C"
{
#endif // ifdef __cplusplus

#include <uxr/client/visibility.h>
#include <uxr/client/transport.h>
#include <uxr/client/core/communication/communication.h>

#include <stdbool.h>

#define UXR_PING_BUF 16 // 4 (HEADER SIZE) + 4 (SUBHEADER_SIZE) + 8 (GET_Info payload)

#define GET_INFO_MSG_SIZE   8
#define GET_INFO_REQUEST_ID 9

/**
 * @brief   Checks the availability status of a valid connection with an agent.
 *          This methods performs a single attempt.
 *          Transport must be properly initialized before calling this method.
 *          This method does not take care of init/fini the transport struct.
 * @param   comm Pointer to the uxrCommunication struct holding the transport
 *               information and callback methods.
 * @param   timeout Time, in milliseconds, for a ping attempt.
 * @return `true` in case of a successful ping to the agent, `false` otherwise.
 */
UXRDLLAPI bool uxr_ping_agent(
        const uxrCommunication* comm,
        const int timeout);

/**
 * @brief   Checks the availability status of a valid connection with an agent.
 *          Additionally, this method allows the user to specify the number
 *          of attempts to be performed. This number will not be reached if a
 *          successful ping occurs.
 *          Transport must be properly initialized before calling this method.
 *          This method does not take care of init/fini the transport struct.
 * @param   comm Pointer to the uxrCommunication struct holding the transport
 *               information and callback methods.
 * @param   timeout Time, in milliseconds, for a ping attempt.
 * @param   attempts Maximum number of ping attempts to be performed.
 * @return `true` in case of a successful ping to the agent, `false` otherwise.
 */
UXRDLLAPI bool uxr_ping_agent_attempts(
        const uxrCommunication* comm,
        const int timeout,
        const uint8_t attempts);


#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif // UXR_CLIENT_UTIL_PING_H_