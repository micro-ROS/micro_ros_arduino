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

#ifndef UXR_CLIENT_CUSTOM_TRANSPORT_H_
#define UXR_CLIENT_CUSTOM_TRANSPORT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <uxr/client/core/communication/communication.h>
#include <uxr/client/config.h>
#include <uxr/client/profile/transport/stream_framing/stream_framing_protocol.h>
#include <uxr/client/visibility.h>

struct uxrCustomTransport;

typedef bool (*open_custom_func) (
        struct uxrCustomTransport* transport);

typedef bool (*close_custom_func) (
        struct uxrCustomTransport* transport);

typedef size_t (*write_custom_func) (
        struct uxrCustomTransport* transport,
        const uint8_t* buffer,
        size_t length,
        uint8_t* error_code);

typedef size_t (*read_custom_func) (
        struct uxrCustomTransport* transport,
        uint8_t* buffer,
        size_t length,
        int timeout,
        uint8_t* error_code);

typedef struct uxrCustomTransport
{
    uint8_t buffer[UXR_CONFIG_CUSTOM_TRANSPORT_MTU];
    bool framing;
    uxrFramingIO framing_io;
    open_custom_func open;
    close_custom_func close;
    write_custom_func write;
    read_custom_func read;
    uxrCommunication comm;
    void * args;
} uxrCustomTransport;


/**
 * @brief Set a Custom transport callbacks.
 * @param transport     The uninitialized transport structure used for managing the transport.
 * @param open          Open callback.
 * @param close         Close callback.
 * @param write         Write callback.
 * @param read          Read callback.
 */
UXRDLLAPI void uxr_set_custom_transport_callbacks(uxrCustomTransport* transport,
                                                  bool framing,
                                                  open_custom_func open,
                                                  close_custom_func close,
                                                  write_custom_func write,
                                                  read_custom_func read);

/**
 * @brief Initializes a Custom transport.
 * @param transport     The transport structure used for managing the transport.
 *                      Callbacks must be set.
 * @param open_args     Arguments for the open function.
 * @return `true` in case of successful initialization. `false` in other case.
 */
UXRDLLAPI bool uxr_init_custom_transport(uxrCustomTransport* transport,
                                         void * args);

/**
 * @brief Closes a Custom transport.
 * @param transport The transport structure.
 * @return `true` in case of successful closing. `false` in other case.
 */
UXRDLLAPI bool uxr_close_custom_transport(uxrCustomTransport* transport);

#ifdef __cplusplus
}
#endif

#endif // UXR_CLIENT_CUSTOM_TRANSPORT_H_
