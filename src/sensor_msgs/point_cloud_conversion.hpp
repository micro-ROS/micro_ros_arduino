// Copyright (c) 2010, Willow Garage
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

// this file is originally ported from ROS1:
// https://raw.githubusercontent.com/ros/common_msgs/ef18af000759bf15c7ea036356dbdce631c75577/sensor_msgs/include/sensor_msgs/point_cloud_conversion.h_
//
#ifndef SENSOR_MSGS__POINT_CLOUD_CONVERSION_HPP_
#define SENSOR_MSGS__POINT_CLOUD_CONVERSION_HPP_

#include <sensor_msgs/msg/point_cloud.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/point_field_conversion.hpp>

#include <string>

#ifndef SENSOR_MSGS_SKIP_WARNING
#  define POINT_CLOUD_DEPRECATION_MESSAGE \
  "PointCloud is deprecated in Foxy for PointCloud2. This whole header will be removed."
#  ifdef _MSC_VER
#    pragma message(POINT_CLOUD_DEPRECATION_MESSAGE)
#  else
#    warning POINT_CLOUD_DEPRECATION_MESSAGE
#  endif
#endif

/**
  * \brief Convert between the old (sensor_msgs::msg::PointCloud) and the new (sensor_msgs::msg::PointCloud2) format.
  * \author Radu Bogdan Rusu
  */
namespace sensor_msgs
{
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/** \brief Get the index of a specified field (i.e., dimension/channel)
  * \param cloud the the point cloud message
  * \param field_name the string defining the field name
  */
static inline int getPointCloud2FieldIndex(
  const sensor_msgs::msg::PointCloud2 & cloud,
  const std::string & field_name)
{
  // Get the index we need
  for (size_t d = 0; d < cloud.fields.size(); ++d) {
    if (cloud.fields[d].name == field_name) {
      return static_cast<int>(d);
    }
  }
  return -1;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/** \brief Convert a sensor_msgs::msg::PointCloud message to a sensor_msgs::msg::PointCloud2 message.
  * \param input the message in the sensor_msgs::msg::PointCloud format
  * \param output the resultant message in the sensor_msgs::msg::PointCloud2 format
  */
[[deprecated("PointCloud is deprecated as of Foxy in favor of sensor_msgs/PointCloud2.")]]
static inline bool convertPointCloudToPointCloud2(
  const sensor_msgs::msg::PointCloud & input,
  sensor_msgs::msg::PointCloud2 & output)
{
  output.header = input.header;
  output.width = static_cast<uint32_t>(input.points.size());
  output.height = 1;
  output.fields.resize(3 + input.channels.size());
  // Convert x/y/z to fields
  output.fields[0].name = "x"; output.fields[1].name = "y"; output.fields[2].name = "z";
  int offset = 0;
  // All offsets are *4, as all field data types are float32
  for (size_t d = 0; d < output.fields.size(); ++d, offset += 4) {
    output.fields[d].offset = offset;
    output.fields[d].datatype = sensor_msgs::msg::PointField::FLOAT32;
    output.fields[d].count = 1;
  }
  output.point_step = offset;
  output.row_step = output.point_step * output.width;
  // Convert the remaining of the channels to fields
  for (size_t d = 0; d < input.channels.size(); ++d) {
    output.fields[3 + d].name = input.channels[d].name;
  }
  output.data.resize(input.points.size() * output.point_step);
  output.is_bigendian = false;  // @todo ?
  output.is_dense = false;

  // Copy the data points
  for (size_t cp = 0; cp < input.points.size(); ++cp) {
    memcpy(
      &output.data[cp * output.point_step + output.fields[0].offset],
      &input.points[cp].x, sizeof(float));
    memcpy(
      &output.data[cp * output.point_step + output.fields[1].offset],
      &input.points[cp].y, sizeof(float));
    memcpy(
      &output.data[cp * output.point_step + output.fields[2].offset],
      &input.points[cp].z, sizeof(float));
    for (size_t d = 0; d < input.channels.size(); ++d) {
      if (input.channels[d].values.size() == input.points.size()) {
        memcpy(
          &output.data[cp * output.point_step + output.fields[3 + d].offset],
          &input.channels[d].values[cp], sizeof(float));
      }
    }
  }
  return true;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/** \brief Convert a sensor_msgs::msg::PointCloud2 message to a sensor_msgs::msg::PointCloud message.
  * \param input the message in the sensor_msgs::msg::PointCloud2 format
  * \param output the resultant message in the sensor_msgs::msg::PointCloud format
  */
[[deprecated("PointCloud is deprecated as of Foxy if favor of sensor_msgs/PointCloud2.")]]
static inline bool convertPointCloud2ToPointCloud(
  const sensor_msgs::msg::PointCloud2 & input,
  sensor_msgs::msg::PointCloud & output)
{
  output.header = input.header;
  output.points.resize(input.width * input.height);
  output.channels.resize(input.fields.size() - 3);
  // Get the x/y/z field offsets
  int x_idx = getPointCloud2FieldIndex(input, "x");
  int y_idx = getPointCloud2FieldIndex(input, "y");
  int z_idx = getPointCloud2FieldIndex(input, "z");
  if (x_idx == -1 || y_idx == -1 || z_idx == -1) {
    return false;
  }
  int x_offset = input.fields[x_idx].offset;
  int y_offset = input.fields[y_idx].offset;
  int z_offset = input.fields[z_idx].offset;
  uint8_t x_datatype = input.fields[x_idx].datatype;
  uint8_t y_datatype = input.fields[y_idx].datatype;
  uint8_t z_datatype = input.fields[z_idx].datatype;

  // Convert the fields to channels
  int cur_c = 0;
  for (size_t d = 0; d < input.fields.size(); ++d) {
    if (static_cast<int>(input.fields[d].offset) == x_offset ||
      static_cast<int>(input.fields[d].offset) == y_offset ||
      static_cast<int>(input.fields[d].offset) == z_offset)
    {
      continue;
    }
    output.channels[cur_c].name = input.fields[d].name;
    output.channels[cur_c].values.resize(output.points.size());
    cur_c++;
  }

  // Copy the data points
  for (size_t cp = 0; cp < output.points.size(); ++cp) {
    // Copy x/y/z
    output.points[cp].x =
      sensor_msgs::readPointCloud2BufferValue<float>(
      &input.data[cp * input.point_step + x_offset], x_datatype);
    output.points[cp].y =
      sensor_msgs::readPointCloud2BufferValue<float>(
      &input.data[cp * input.point_step + y_offset], y_datatype);
    output.points[cp].z =
      sensor_msgs::readPointCloud2BufferValue<float>(
      &input.data[cp * input.point_step + z_offset], z_datatype);
    // Copy the rest of the data
    int cur_c = 0;
    for (size_t d = 0; d < input.fields.size(); ++d) {
      if (static_cast<int>(input.fields[d].offset) == x_offset ||
        static_cast<int>(input.fields[d].offset) == y_offset ||
        static_cast<int>(input.fields[d].offset) == z_offset)
      {
        continue;
      }
      output.channels[cur_c++].values[cp] = sensor_msgs::readPointCloud2BufferValue<float>(
        &input.data[cp * input.point_step + input.fields[d].offset], input.fields[d].datatype);
    }
  }
  return true;
}
}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__POINT_CLOUD_CONVERSION_HPP_
