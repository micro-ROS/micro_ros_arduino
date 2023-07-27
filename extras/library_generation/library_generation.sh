#!/bin/bash

PLATFORMS=()
while getopts "p:" o; do
    case "$o" in
        p)
            PLATFORMS+=(${OPTARG})
            ;;
    esac
done

if [ $OPTIND -eq 1 ]; then
    PLATFORMS+=("opencr1")
    PLATFORMS+=("teensy4")
    PLATFORMS+=("teensy32")
    PLATFORMS+=("teensy35")
    PLATFORMS+=("teensy36")
    PLATFORMS+=("cortex_m0")
    PLATFORMS+=("cortex_m3")
    PLATFORMS+=("cortex_m4")
    # PLATFORMS+=("portenta-m4")
    PLATFORMS+=("portenta-m7")
    PLATFORMS+=("kakutef7-m7")
    PLATFORMS+=("esp32")
fi

shift $((OPTIND-1))

######## Init ########

apt update

cd /uros_ws

source /opt/ros/$ROS_DISTRO/setup.bash
source install/local_setup.bash

ros2 run micro_ros_setup create_firmware_ws.sh generate_lib

######## Adding extra packages ########
pushd firmware/mcu_ws > /dev/null

    # Workaround: Copy just tf2_msgs
    git clone -b iron https://github.com/ros2/geometry2
    cp -R geometry2/tf2_msgs ros2/tf2_msgs
    rm -rf geometry2

    # Import user defined packages
    mkdir extra_packages
    pushd extra_packages > /dev/null
        cp -R /project/extras/library_generation/extra_packages/* .
        vcs import --input extra_packages.repos
    popd > /dev/null

popd > /dev/null

######## Clean and source ########
find /project/src/ ! -name micro_ros_arduino.h ! -name *.c ! -name *.cpp ! -name *.c.in -delete

######## Build for OpenCR  ########
if [[ " ${PLATFORMS[@]} " =~ " opencr1 " ]]; then
    rm -rf firmware/build

    export TOOLCHAIN_PREFIX=/uros_ws/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-
    ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/opencr_toolchain.cmake /project/extras/library_generation/colcon.meta

    find firmware/build/include/ -name "*.c"  -delete
    cp -R firmware/build/include/* /project/src/

    mkdir -p /project/src/cortex-m7/fpv5-sp-d16-softfp
    cp -R firmware/build/libmicroros.a /project/src/cortex-m7/fpv5-sp-d16-softfp/libmicroros.a
fi

######## Build for SAMD (e.g. Arduino Zero) ########
if [[ " ${PLATFORMS[@]} " =~ " cortex_m0 " ]]; then
    rm -rf firmware/build

    export TOOLCHAIN_PREFIX=/uros_ws/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-
    ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/cortex_m0_toolchain.cmake /project/extras/library_generation/colcon_verylowmem.meta

    find firmware/build/include/ -name "*.c"  -delete
    cp -R firmware/build/include/* /project/src/

    mkdir -p /project/src/cortex-m0plus
    cp -R firmware/build/libmicroros.a /project/src/cortex-m0plus/libmicroros.a
fi

######## Build for SAM (e.g. Arduino Due) ########
if [[ " ${PLATFORMS[@]} " =~ " cortex_m3 " ]]; then
    rm -rf firmware/build

    export TOOLCHAIN_PREFIX=/uros_ws/gcc-arm-none-eabi-4_8-2014q1/bin/arm-none-eabi-
    ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/cortex_m3_toolchain.cmake /project/extras/library_generation/colcon_lowmem.meta

    find firmware/build/include/ -name "*.c"  -delete
    cp -R firmware/build/include/* /project/src/

    mkdir -p /project/src/cortex-m3
    cp -R firmware/build/libmicroros.a /project/src/cortex-m3/libmicroros.a
fi

######## Build for STM32F4 ########
if [[ " ${PLATFORMS[@]} " =~ " cortex_m4 " ]]; then
    rm -rf firmware/build

    export TOOLCHAIN_PREFIX=/uros_ws/gcc-arm-none-eabi-9-2020-q2-update/bin/arm-none-eabi-
    ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/cortex_m4_toolchain.cmake /project/extras/library_generation/colcon_lowmem.meta

    find firmware/build/include/ -name "*.c"  -delete
    cp -R firmware/build/include/* /project/src/

    mkdir -p /project/src/cortex-m4
    cp -R firmware/build/libmicroros.a /project/src/cortex-m4/libmicroros.a
fi

######## Build for Teensy 3.2 ########
if [[ " ${PLATFORMS[@]} " =~ " teensy32 " ]]; then
    rm -rf firmware/build

    export TOOLCHAIN_PREFIX=/uros_ws/teensy-compile/tools/arm/bin/arm-none-eabi-
    ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/teensy32_toolchain.cmake /project/extras/library_generation/colcon_lowmem.meta

    find firmware/build/include/ -name "*.c"  -delete
    cp -R firmware/build/include/* /project/src/

    mkdir -p /project/src/mk20dx256
    cp -R firmware/build/libmicroros.a /project/src/mk20dx256/libmicroros.a
fi

######## Build for Teensy 3.5 ########
if [[ " ${PLATFORMS[@]} " =~ " teensy35 " ]]; then
    rm -rf firmware/build

    export TOOLCHAIN_PREFIX=/uros_ws/teensy-compile/tools/arm/bin/arm-none-eabi-
    ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/teensy35_toolchain.cmake /project/extras/library_generation/colcon_lowmem.meta

    find firmware/build/include/ -name "*.c"  -delete
    cp -R firmware/build/include/* /project/src/

    mkdir -p /project/src/mk64fx512/fpv4-sp-d16-hard
    cp -R firmware/build/libmicroros.a /project/src/mk64fx512/fpv4-sp-d16-hard/libmicroros.a
fi

######## Build for Teensy 3.6 ########
if [[ " ${PLATFORMS[@]} " =~ " teensy36 " ]]; then
    rm -rf firmware/build
    mkdir -p /project/src/mk66fx1m0/fpv4-sp-d16-hard

    # Reuse Teensy 3.5 build if possible
    if [[ " ${PLATFORMS[@]} " =~ " teensy35 " ]]; then
        ln /project/src/mk64fx512/fpv4-sp-d16-hard/libmicroros.a /project/src/mk66fx1m0/fpv4-sp-d16-hard/libmicroros.a
    else
        export TOOLCHAIN_PREFIX=/uros_ws/teensy-compile/tools/arm/bin/arm-none-eabi-
        ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/teensy35_toolchain.cmake /project/extras/library_generation/colcon_lowmem.meta

        find firmware/build/include/ -name "*.c"  -delete
        cp -R firmware/build/include/* /project/src/

        cp -R firmware/build/libmicroros.a /project/src/mk66fx1m0/fpv4-sp-d16-hard/libmicroros.a
    fi
fi

######## Build for Teensy 4 ########
if [[ " ${PLATFORMS[@]} " =~ " teensy4 " ]]; then
    rm -rf firmware/build

    export TOOLCHAIN_PREFIX=/uros_ws/teensy-compile/tools/arm/bin/arm-none-eabi-
    ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/teensy4_toolchain.cmake /project/extras/library_generation/colcon.meta

    find firmware/build/include/ -name "*.c"  -delete
    cp -R firmware/build/include/* /project/src/

    mkdir -p /project/src/imxrt1062/fpv5-d16-hard
    cp -R firmware/build/libmicroros.a /project/src/imxrt1062/fpv5-d16-hard/libmicroros.a
fi

######## Build for Arduino Portenta M4 core ########
# if [[ " ${PLATFORMS[@]} " =~ " portenta-m4 " ]]; then
#     rm -rf firmware/build

#     export TOOLCHAIN_PREFIX=/uros_ws/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-
#     ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/portenta-m4_toolchain.cmake /project/extras/library_generation/colcon.meta

#     find firmware/build/include/ -name "*.c"  -delete
#     cp -R firmware/build/include/* /project/src/

#     mkdir -p /project/src/cortex-m4/fpv4-sp-d16-softfp
#     cp -R firmware/build/libmicroros.a /project/src/cortex-m4/fpv4-sp-d16-softfp/libmicroros.a
# fi

######## Build for Arduino Portenta M7 core ########
if [[ " ${PLATFORMS[@]} " =~ " portenta-m7 " ]]; then
    rm -rf firmware/build

    export TOOLCHAIN_PREFIX=/uros_ws/gcc-arm-none-eabi-7-2017-q4-major/bin/arm-none-eabi-
    ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/portenta-m7_toolchain.cmake /project/extras/library_generation/colcon.meta

    find firmware/build/include/ -name "*.c"  -delete
    cp -R firmware/build/include/* /project/src/

    mkdir -p /project/src/cortex-m7/fpv5-d16-softfp
    cp -R firmware/build/libmicroros.a /project/src/cortex-m7/fpv5-d16-softfp/libmicroros.a
fi

######## Build for Kakute F7 M7 core  ########
if [[ " ${PLATFORMS[@]} " =~ " kakutef7-m7 " ]]; then
    rm -rf firmware/build

    export TOOLCHAIN_PREFIX=/uros_ws/gcc-arm-none-eabi-9-2020-q2-update/bin/arm-none-eabi-
    ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/kakutef7-m7_toolchain.cmake /project/extras/library_generation/colcon.meta

    find firmware/build/include/ -name "*.c"  -delete
    cp -R firmware/build/include/* /project/src/

    mkdir -p /project/src/cortex-m7/fpv5-sp-d16-hardfp
    cp -R firmware/build/libmicroros.a /project/src/cortex-m7/fpv5-sp-d16-hardfp/libmicroros.a
fi

######## Build for ESP32  ########
if [[ " ${PLATFORMS[@]} " =~ " esp32 " ]]; then
    rm -rf firmware/build

    export TOOLCHAIN_PREFIX=/uros_ws/xtensa-esp32-elf/bin/xtensa-esp32-elf-
    ros2 run micro_ros_setup build_firmware.sh /project/extras/library_generation/esp32_toolchain.cmake /project/extras/library_generation/colcon.meta

    find firmware/build/include/ -name "*.c"  -delete
    cp -R firmware/build/include/* /project/src/

    mkdir -p /project/src/esp32
    cp -R firmware/build/libmicroros.a /project/src/esp32/libmicroros.a
fi

######## Fix include paths  ########
pushd firmware/mcu_ws > /dev/null
    INCLUDE_ROS2_PACKAGES=$(colcon list | awk '{print $1}' | awk -v d=" " '{s=(NR==1?s:s d)$0}END{print s}')
popd > /dev/null

apt -y install rsync
for var in ${INCLUDE_ROS2_PACKAGES}; do
    rsync -r /project/src/${var}/${var}/* /project/src/${var}/ > /dev/null 2>&1
    rm -rf /project/src/${var}/${var}/ > /dev/null 2>&1
done

######## Generate extra files ########
find firmware/mcu_ws/ros2 \( -name "*.srv" -o -name "*.msg" -o -name "*.action" \) | awk -F"/" '{print $(NF-2)"/"$NF}' > /project/available_ros2_types
find firmware/mcu_ws/extra_packages \( -name "*.srv" -o -name "*.msg" -o -name "*.action" \) | awk -F"/" '{print $(NF-2)"/"$NF}' >> /project/available_ros2_types
# sort it so that the result order is reproducible
sort -o /project/available_ros2_types /project/available_ros2_types

cd firmware
echo "" > /project/built_packages
for f in $(find $(pwd) -name .git -type d); do pushd $f > /dev/null; echo $(git config --get remote.origin.url) $(git rev-parse HEAD) >> /project/built_packages; popd > /dev/null; done;
# sort it so that the result order is reproducible
sort -o /project/built_packages /project/built_packages

######## Fix permissions ########
sudo chmod -R 777 .