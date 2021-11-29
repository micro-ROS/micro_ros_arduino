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

#ifndef RMW__IMPL__CPP__DEMANGLE_HPP_
#define RMW__IMPL__CPP__DEMANGLE_HPP_

#ifndef _WIN32
// Includes for abi::__cxa_demangle.
#include <cxxabi.h>
#include <cstdlib>
#include <memory>
#endif
#include <iostream>
#include <string>

#include "rmw/impl/config.h"

namespace rmw
{
namespace impl
{
namespace cpp
{

/// Return the demangle name of the instance of type T.
template<typename T>
std::string
demangle(const T & instance)
{
  (void)instance;
// Cannot do demangling if on Windows or if we want to avoid memory allocation.
#if !defined(_WIN32) || RMW_AVOID_MEMORY_ALLOCATION
  int status = 0;
  std::string mangled_typeid_name = typeid(T).name();

  std::unique_ptr<char, void (*)(void *)> res {
    abi::__cxa_demangle(mangled_typeid_name.c_str(), NULL, NULL, &status),
    std::free
  };

  return (status == 0) ? res.get() : mangled_typeid_name;
#else
  return typeid(T).name();
#endif
}

}  // namespace cpp
}  // namespace impl
}  // namespace rmw

#endif  // RMW__IMPL__CPP__DEMANGLE_HPP_
