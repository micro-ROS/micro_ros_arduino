// Copyright 2019 Open Source Robotics Foundation, Inc.
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

/// \file

#ifndef RCUTILS__PROCESS_H_
#define RCUTILS__PROCESS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#if defined _WIN32 || defined __CYGWIN__
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef NOMINMAX
#define NOMINMAX
#endif
// When building with MSVC 19.28.29333.0 on Windows 10 (as of 2020-11-11),
// there appears to be a problem with winbase.h (which is included by
// Windows.h). In particular, warnings of the form:
//
// warning C5105: macro expansion producing 'defined' has undefined behavior
//
// See https://developercommunity.visualstudio.com/content/problem/695656/wdk-and-sdk-are-not-compatible-with-experimentalpr.html
// for more information. For now disable that warning when including windows.h
#pragma warning(push)
#pragma warning(disable : 5105)
#include <Windows.h>
#pragma warning(pop)
#endif

#include "rcutils/allocator.h"
#include "rcutils/macros.h"
#include "rcutils/types/string_array.h"
#include "rcutils/visibility_control.h"

/// Retrieve the current process ID.
/**
 * This function returns the current process ID, and is always successful.
 *
 * This function is thread-safe.
 *
 * \return The current process ID.
 */
RCUTILS_PUBLIC
RCUTILS_WARN_UNUSED
int rcutils_get_pid(void);

/// Retrieve the current executable name.
/**
 * This function portably retrieves the current program name and returns
 * a copy of it.
 * It is up to the caller to free the memory.
 *
 * This function is thread-safe.
 *
 * \param[in] allocator the allocator to use
 * \return The program name on success, or
 * \return NULL on failure.
 */
RCUTILS_PUBLIC
RCUTILS_WARN_UNUSED
char * rcutils_get_executable_name(rcutils_allocator_t allocator);

/// Information about a subprocess created by this process
typedef struct rcutils_process_s
{
#if defined _WIN32 || defined __CYGWIN__
  /// The open handle to the process.
  HANDLE handle;
#endif

  /// The process ID of the process.
  int pid;

  /// The allocator used to allocate and free memory for the process.
  rcutils_allocator_t allocator;
} rcutils_process_t;

/// Execute a command as a new subprocess.
/**
 * This function runs a command by creating a new subprocess of the currently
 * running process.
 *
 * \param[in] args the command line arguments to be run
 * \param[in] allocator the allocator to use
 * \return The successfully created subprocess, or
 * \return NULL on failure.
 */
RCUTILS_PUBLIC
RCUTILS_WARN_UNUSED
rcutils_process_t *
rcutils_start_process(
  const rcutils_string_array_t * args,
  rcutils_allocator_t * allocator);

/// Release resources allocated when a subprocess was created.
/**
 * Closes, cleans up, and deallocates resources which were allocated by
 * rcutils_start_process(), including the rcutils_process_t itself.
 * \param[in] process the process to be closed and deallocated
 */
RCUTILS_PUBLIC
void rcutils_process_close(rcutils_process_t * process);

/// Blocks until the given subprocess has been has exited.
/**
 * Wait for a subprocess to terminate, and optionally retrieve the exit code
 * from that process.
 * Upon successful invocation of this function, subsequent calls will produce
 * undefined behavior. It should typically be followed by a call to
 * rcutils_process_close().
 * \param[in] process The process to wait for
 * \param[out] status The exit code from that process
 * \return #RCUTILS_RET_OK if the process exited, or
 * \return #RCUTILS_RET_INVALID_ARGUMENT if the process argument is invalid
 * \return #RCUTILS_RET_ERROR if an unexpected error occurs.
 */
RCUTILS_PUBLIC
RCUTILS_WARN_UNUSED
rcutils_ret_t
rcutils_process_wait(const rcutils_process_t * process, int * status);

#ifdef __cplusplus
}
#endif

#endif  // RCUTILS__PROCESS_H_
