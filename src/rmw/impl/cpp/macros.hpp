// Copyright 2015 Open Source Robotics Foundation, Inc.
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

#ifndef RMW__IMPL__CPP__MACROS_HPP_
#define RMW__IMPL__CPP__MACROS_HPP_

#include <iostream>
#include <sstream>
#include <string>

#include "rcutils/snprintf.h"

#include "rmw/allocators.h"
#include "rmw/error_handling.h"
#include "rmw/impl/config.h"  // For RMW_AVOID_MEMORY_ALLOCATION
#include "rmw/impl/cpp/demangle.hpp"  // For demangle.

#define RMW_TRY_PLACEMENT_NEW(Destination, BufferForNew, FailureAction, Type, ...) \
  try { \
    Destination = new(BufferForNew) Type(__VA_ARGS__); \
  } catch (const std::exception & exception) { \
    RMW_SET_ERROR_MSG( \
      ( \
        std::string("caught C++ exception ") + rmw::impl::cpp::demangle(exception) + \
        " constructing " #Type ": " + exception.what() \
      ).c_str()); \
    FailureAction; \
  } catch (...) { \
    RMW_SET_ERROR_MSG("caught unknown C++ exception constructing " #Type); \
    FailureAction; \
  }

#define RMW_TRY_DESTRUCTOR(Statement, Type, FailureAction) \
  try { \
    Statement; \
  } catch (const std::exception & exception) { \
    RMW_SET_ERROR_MSG( \
      ( \
        std::string("caught C++ exception in destructor of " #Type ": ") + \
        rmw::impl::cpp::demangle(exception) + ": " + exception.what() \
      ).c_str()); \
    FailureAction; \
  } catch (...) { \
    RMW_SET_ERROR_MSG("caught unknown C++ exception in destructor of " #Type); \
    FailureAction; \
  }

#define RMW_TRY_DESTRUCTOR_FROM_WITHIN_FAILURE(Statement, Type) \
  try { \
    Statement; \
  } catch (const std::exception & exception) { \
    std::stringstream ss; \
    ss << "caught C++ exception in destructor of " #Type " while handling a failure: " \
       << rmw::impl::cpp::demangle(exception) << ": " << exception.what() \
       << ", at: " << __FILE__ << ":" << __LINE__ << '\n'; \
    (std::cerr << ss.str()).flush(); \
  } catch (...) { \
    std::stringstream ss; \
    ss << "caught unknown C++ exception in destructor of " #Type << \
      " while handling a failure at: " << __FILE__ << ":" << __LINE__ << '\n'; \
    (std::cerr << ss.str()).flush(); \
  }

#if RMW_AVOID_MEMORY_ALLOCATION
#define RMW_CHECK_TYPE_IDENTIFIERS_MATCH(ElementName, ElementTypeID, ExpectedTypeID, OnFailure) \
  { \
    if (ElementTypeID != ExpectedTypeID) { \
      char __msg[1024]; \
      int ret = rcutils_snprintf( \
        __msg, sizeof(__msg), \
        #ElementName " implementation '%s'(%p) does not match rmw implementation '%s'(%p)", \
        ElementTypeID, reinterpret_cast<const void *>(ElementTypeID), \
        ExpectedTypeID, reinterpret_cast<const void *>(ExpectedTypeID)); \
      if (ret < 0) { \
        static const char error_msg[] = \
          "RMW_CHECK_TYPE_IDENTIFIERS_MATCH(): rcutils_snprintf() failed"; \
        memmove(__msg, error_msg, sizeof(error_msg)); \
      } \
      RMW_SET_ERROR_MSG(__msg); \
      OnFailure; \
    } \
  }
#else  // RMW_AVOID_MEMORY_ALLOCATION
#define RMW_CHECK_TYPE_IDENTIFIERS_MATCH(ElementName, ElementTypeID, ExpectedTypeID, OnFailure) \
  { \
    if (ElementTypeID != ExpectedTypeID) { \
      int __bytes_that_would_have_been_written = rcutils_snprintf( \
        NULL, 0, \
        #ElementName " implementation '%s'(%p) does not match rmw implementation '%s'(%p)", \
        ElementTypeID, reinterpret_cast<const void *>(ElementTypeID), \
        ExpectedTypeID, reinterpret_cast<const void *>(ExpectedTypeID)); \
      if (__bytes_that_would_have_been_written < 0) { \
        RMW_SET_ERROR_MSG( \
          "RMW_CHECK_TYPE_IDENTIFIERS_MATCH(): rcutils_snprintf(NULL, 0, ...) failed"); \
        OnFailure; \
      } else { \
        char * __msg = \
          reinterpret_cast<char *>(rmw_allocate(__bytes_that_would_have_been_written + 1)); \
        if (NULL == __msg) { \
          RMW_SET_ERROR_MSG( \
            "RMW_CHECK_TYPE_IDENTIFIERS_MATCH(): rmw_allocate() failed"); \
        } else { \
          int ret = rcutils_snprintf( \
            __msg, __bytes_that_would_have_been_written + 1, \
            #ElementName " implementation '%s'(%p) does not match rmw implementation '%s'(%p)", \
            ElementTypeID, reinterpret_cast<const void *>(ElementTypeID), \
            ExpectedTypeID, reinterpret_cast<const void *>(ExpectedTypeID)); \
          if (ret < 0) { \
            RMW_SET_ERROR_MSG( \
              "RMW_CHECK_TYPE_IDENTIFIERS_MATCH(): rcutils_snprintf() failed"); \
          } else { \
            RMW_SET_ERROR_MSG(__msg); \
          } \
        } \
        rmw_free(__msg); \
        OnFailure; \
      } \
    } \
  }
#endif  // RMW_AVOID_MEMORY_ALLOCATION

#endif  // RMW__IMPL__CPP__MACROS_HPP_
