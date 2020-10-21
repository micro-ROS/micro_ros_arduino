FROM ros:foxy 

RUN mkdir -p uros_ws
WORKDIR uros_ws
RUN git clone --depth 1 -branch -b feature/generate_standalone_uros_lib https://github.com/micro-ROS/micro-ros-build.git src/micro-ros-build \
    &&  . /opt/ros/$ROS_DISTRO/setup.sh \
    &&  apt update \
    &&  apt install -y python3-pip \
    &&  rosdep update \
    &&  rosdep install --from-paths src --ignore-src -y \
    &&  colcon build \
    &&  . install/local_setup.sh \
    &&  ros2 run micro_ros_setup create_firmware_ws.sh generate_lib \
    &&  rm -rf log/ build/ src/* \
    &&  rm -rf /var/lib/apt/lists/* \
    && wget https://launchpad.net/gcc-arm-embedded/5.0/5-2016-q2-update/+download/gcc-arm-none-eabi-5_4-2016q2-20160622-linux.tar.bz2 \
    && tar -xvf gcc-arm-none-eabi-5_4-2016q2-20160622-linux.tar.bz2 \
    && rm -rf gcc-arm-none-eabi-5_4-2016q2-20160622-linux.tar.bz2 gcc-arm-none-eabi-5_4-2016q2/share/doc \
    && wget https://launchpad.net/gcc-arm-embedded/5.0/5-2016-q3-update/+download/gcc-arm-none-eabi-5_4-2016q3-20160926-linux.tar.bz2 \
    && tar -xvf gcc-arm-none-eabi-5_4-2016q3-20160926-linux.tar.bz2 \
    && rm -rf gcc-arm-none-eabi-5_4-2016q3-20160926-linux.tar.bz2 gcc-arm-none-eabi-5_4-2016q3/share/doc 

COPY ./library_generation.sh /library_generation.sh

ENTRYPOINT ["/library_generation.sh"]
