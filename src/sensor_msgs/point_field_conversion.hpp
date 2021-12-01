// Copyright (c) 2015, University of Osnabrück
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
//
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
//
//    * Neither the name of the copyright holder nor the names of its
//      contributors may be used to endorse or promote products derived from
//      this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

// Created on: 16.07.2015
// Authors: Sebastian Pütz <spuetz@uni-osnabrueck.de>
// this file is originally ported from ROS1:
// https://raw.githubusercontent.com/ros/common_msgs/ef18af000759bf15c7ea036356dbdce631c75577/sensor_msgs/include/sensor_msgs/point_field_conversion.h
//
#ifndef SENSOR_MSGS__POINT_FIELD_CONVERSION_HPP_
#define SENSOR_MSGS__POINT_FIELD_CONVERSION_HPP_

#include <sensor_msgs/msg/point_field.hpp>
#include <cstdint>

/**
  * \brief  This file provides a type to enum mapping for the different
  *         PointField types and methods to read and write in
  *         a PointCloud2 buffer for the different PointField types.
  * \author Sebastian Pütz
  */
namespace sensor_msgs
{
/**
 * \brief Enum to type mapping.
 */
template<int>
struct pointFieldTypeAsType {};
/** \brief Concrete templatization of Enum to type for INT8 */
template<>
struct pointFieldTypeAsType<sensor_msgs::msg::PointField::INT8>
{
  /** Enum to type for INT8 -> int8_t */
  typedef int8_t type;
};
/** \brief Concrete templatization of Enum to type for UINT8 */
template<>
struct pointFieldTypeAsType<sensor_msgs::msg::PointField::UINT8>
{
  /** Enum to type for UINT8 -> uint8_t */
  typedef uint8_t type;
};
/** \brief Concrete templatization of Enum to type for INT16 */
template<>
struct pointFieldTypeAsType<sensor_msgs::msg::PointField::INT16>
{
  /** Enum to type for INT16 -> int16_t */
  typedef int16_t type;
};
/** \brief Concrete templatization of Enum to type for UINT16 */
template<>
struct pointFieldTypeAsType<sensor_msgs::msg::PointField::UINT16>
{
  /** Enum to type for UINT16 -> uint16_t */
  typedef uint16_t type;
};
/** \brief Concrete templatization of Enum to type for INT32 */
template<>
struct pointFieldTypeAsType<sensor_msgs::msg::PointField::INT32>
{
  /** Enum to type for INT32 -> int32_t */
  typedef int32_t type;
};
/** \brief Concrete templatization of Enum to type for UINT32 */
template<>
struct pointFieldTypeAsType<sensor_msgs::msg::PointField::UINT32>
{
  /** Enum to type for UINT32 -> uint32_t */
  typedef uint32_t type;
};
/** \brief Concrete templatization of Enum to type for FLOAT32 */
template<>
struct pointFieldTypeAsType<sensor_msgs::msg::PointField::FLOAT32>
{
  /** Enum to type for FLOAT32 -> float */
  typedef float type;
};
/** \brief Concrete templatization of Enum to type for FLOAT64 */
template<>
struct pointFieldTypeAsType<sensor_msgs::msg::PointField::FLOAT64>
{
  /** Enum to type for FLOAT64 -> double */
  typedef double type;
};

/**
 * \brief Type to enum mapping.
 */
template<typename T>
struct typeAsPointFieldType {};
/** \brief Concrete templatization of type to enum for int8_t */
template<>
struct typeAsPointFieldType<int8_t>
{
  /** Type to enum for int8_t -> INT8 */
  static const uint8_t value = sensor_msgs::msg::PointField::INT8;
};
/** \brief Concrete templatization of type to enum for uint8_t */
template<>
struct typeAsPointFieldType<uint8_t>
{
  /** Type to enum for uint8_t -> UINT8 */
  static const uint8_t value = sensor_msgs::msg::PointField::UINT8;
};
/** \brief Concrete templatization of type to enum for int16_t */
template<>
struct typeAsPointFieldType<int16_t>
{
  /** Type to enum for int16_t -> INT16 */
  static const uint8_t value = sensor_msgs::msg::PointField::INT16;
};
/** \brief Concrete templatization of type to enum for uint16_t */
template<>
struct typeAsPointFieldType<uint16_t>
{
  /** Type to enum for uint16_t -> UINT16 */
  static const uint8_t value = sensor_msgs::msg::PointField::UINT16;
};
/** \brief Concrete templatization of type to enum for int32_t */
template<>
struct typeAsPointFieldType<int32_t>
{
  /** Type to enum for int32_t -> INT32 */
  static const uint8_t value = sensor_msgs::msg::PointField::INT32;
};
/** \brief Concrete templatization of type to enum for uint32_t */
template<>
struct typeAsPointFieldType<uint32_t>
{
  /** Type to enum for uint32_t -> UINT32 */
  static const uint8_t value = sensor_msgs::msg::PointField::UINT32;
};
/** \brief Concrete templatization of type to enum for float */
template<>
struct typeAsPointFieldType<float>
{
  /** Type to enum for float -> FLOAT32 */
  static const uint8_t value = sensor_msgs::msg::PointField::FLOAT32;
};
/** \brief Concrete templatization of type to enum for double */
template<>
struct typeAsPointFieldType<double>
{
  /** Type to enum for double -> FLOAT64 */
  static const uint8_t value = sensor_msgs::msg::PointField::FLOAT64;
};

/**
 * \brief Converts a value at the given pointer position, interpreted as the datatype
 *  specified by the given template argument point_field_type, to the given
 *  template type T and returns it.
 * \param data_ptr            pointer into the point cloud 2 buffer
 * \tparam point_field_type   sensor_msgs::PointField datatype value
 * \tparam T                  return type
 */
template<int point_field_type, typename T>
inline T readPointCloud2BufferValue(const unsigned char * data_ptr)
{
  typedef typename pointFieldTypeAsType<point_field_type>::type type;
  return static_cast<T>(*(reinterpret_cast<type const *>(data_ptr)));
}

/**
 * \brief Converts a value at the given pointer position interpreted as the datatype
 *  specified by the given datatype parameter to the given template type and returns it.
 * \param data_ptr    pointer into the point cloud 2 buffer
 * \param datatype    sensor_msgs::PointField datatype value
 * \tparam T          return type
 */
template<typename T>
inline T readPointCloud2BufferValue(const unsigned char * data_ptr, const unsigned char datatype)
{
  switch (datatype) {
    case sensor_msgs::msg::PointField::INT8:
      return readPointCloud2BufferValue<sensor_msgs::msg::PointField::INT8, T>(data_ptr);
    case sensor_msgs::msg::PointField::UINT8:
      return readPointCloud2BufferValue<sensor_msgs::msg::PointField::UINT8, T>(data_ptr);
    case sensor_msgs::msg::PointField::INT16:
      return readPointCloud2BufferValue<sensor_msgs::msg::PointField::INT16, T>(data_ptr);
    case sensor_msgs::msg::PointField::UINT16:
      return readPointCloud2BufferValue<sensor_msgs::msg::PointField::UINT16, T>(data_ptr);
    case sensor_msgs::msg::PointField::INT32:
      return readPointCloud2BufferValue<sensor_msgs::msg::PointField::INT32, T>(data_ptr);
    case sensor_msgs::msg::PointField::UINT32:
      return readPointCloud2BufferValue<sensor_msgs::msg::PointField::UINT32, T>(data_ptr);
    case sensor_msgs::msg::PointField::FLOAT32:
      return readPointCloud2BufferValue<sensor_msgs::msg::PointField::FLOAT32, T>(data_ptr);
    case sensor_msgs::msg::PointField::FLOAT64:
      return readPointCloud2BufferValue<sensor_msgs::msg::PointField::FLOAT64, T>(data_ptr);
  }
  // This should never be reached, but return statement added to avoid compiler warning. (#84)
  return T();
}
}  // namespace sensor_msgs
#endif  // SENSOR_MSGS__POINT_FIELD_CONVERSION_HPP_
