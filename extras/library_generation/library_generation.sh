#!/bin/bash

cd /uros_ws

######## Copying Arduino placeholders XRCE transport ########

cp /arduino_project/extras/library_generation/arduino_xrce_transports/serial_transport_external.c firmware/mcu_ws/eProsima/Micro-XRCE-DDS-Client/src/c/profile/transport/serial/
cp /arduino_project/extras/library_generation/arduino_xrce_transports/serial_transport_external.h firmware/mcu_ws/eProsima/Micro-XRCE-DDS-Client/include/uxr/client/profile/transport/serial/

######## Clean and source ########
find /arduino_project/src/ ! -name micro_ros_arduino.h ! -name *.c ! -name *.c.in -delete

source /opt/ros/$ROS_DISTRO/setup.bash
source install/local_setup.bash

######## Build for OpenCR  ########
rm -rf firmware/build

export TOOLCHAIN_PREFIX=/uros_ws/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-
ros2 run micro_ros_setup build_firmware.sh /arduino_project/extras/library_generation/opencr_toolchain.cmake /arduino_project/extras/library_generation/colcon.meta

find firmware/build/include/ -name "*.c"  -delete
cp -R firmware/build/include/* /arduino_project/src/ 

mkdir -p /arduino_project/src/cortex-m7/fpv5-sp-d16-softfp
cp -R firmware/build/libmicroros.a /arduino_project/src/cortex-m7/fpv5-sp-d16-softfp/libmicroros.a

######## Build for Teensy 4 ########
rm -rf firmware/build

export TOOLCHAIN_PREFIX=/uros_ws/gcc-arm-none-eabi-5_4-2016q3/bin/arm-none-eabi-

ros2 run micro_ros_setup build_firmware.sh /arduino_project/extras/library_generation/teensy4_toolchain.cmake /arduino_project/extras/library_generation/colcon.meta

mkdir -p /arduino_project/src/imxrt1062/fpv5-d16-hard
cp -R firmware/build/libmicroros.a /arduino_project/src/imxrt1062/fpv5-d16-hard/libmicroros.a


######## Build for Teensy 3.2 ########
rm -rf firmware/build

export TOOLCHAIN_PREFIX=/uros_ws/gcc-arm-none-eabi-5_4-2016q3/bin/arm-none-eabi-

ros2 run micro_ros_setup build_firmware.sh /arduino_project/extras/library_generation/teensy32_toolchain.cmake /arduino_project/extras/library_generation/colcon_lowmem.meta

mkdir -p /arduino_project/src/mk20dx256
cp -R firmware/build/libmicroros.a /arduino_project/src/mk20dx256/libmicroros.a

######## Generate extra files ########
find firmware/mcu_ws/ros2 \( -name "*.srv" -o -name "*.msg" \) | awk -F"/" '{print $(NF-2)"/"$NF}' > /arduino_project/available_ros2_types