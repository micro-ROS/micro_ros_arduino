# micro-ROS for Arduino

This is a **experimental** micro-ROS library for baremetal projects based on Arduino IDE or Arduino CLI.
As the build process for ROS 2 and micro-ROS is based on custom meta-build system tools and CMake, this library is provided as a precompiled library. Anyways, users can rebuild its own precompiled libraries in order to modify micro-ROS parameters, for example customizing prebuild meta file.

Supported boards are:

| Board                                                                    | State      | Details                                                                                             | Prebuild meta        |
| ------------------------------------------------------------------------ | ---------- | --------------------------------------------------------------------------------------------------- | -------------------- |
| [OpenCR](https://emanual.robotis.com/docs/en/parts/controller/opencr10/) | Supported  | [Based on custom board](https://emanual.robotis.com/docs/en/parts/controller/opencr10/#arduino-ide) | `colcon.meta`        |
| [Teensy 4.0](https://www.pjrc.com/store/teensy40.html)                   | Not tested | [Based on Teensyduino](https://www.pjrc.com/teensy/td_download.html)                                | `colcon.meta`        |
| [Teensy 4.1](https://www.pjrc.com/store/teensy41.html)                   | Not tested | [Based on Teensyduino](https://www.pjrc.com/teensy/td_download.html)                                | `colcon.meta`        |
| [Teensy 3.2](https://www.pjrc.com/store/teensy32.html)                   | Not tested | [Based on Teensyduino](https://www.pjrc.com/teensy/td_download.html)                                | `colcon_lowmem.meta` |

You can find the available precompiled ROS 2 types for messages and services in [available_ros2_types](available_ros2_types).

## How to use the precompiled library

Go to [link to release section]() and download the last release of micro-ROS library for Arduino. 

Include it in your proyect using `Sketch -> Include library -> Add .ZIP Library...`

## How to build the precompiled library

```bash
pushd extras/library_generation
docker build . -t micro_ros_arduino_builder
popd

docker run -it --rm -v $(pwd):/arduino_project micro_ros_arduino_builder
```

## Purpose of the Project

This software is not ready for production use. It has neither been developed nor
tested for a specific use case. However, the license conditions of the
applicable Open Source licenses allow you to adapt the software to your needs.
Before using it in a safety relevant setting, make sure that the software
fulfills your requirements and adjust it according to any applicable safety
standards, e.g., ISO 26262.

## License

This repository is open-sourced under the Apache-2.0 license. See the [LICENSE](LICENSE) file for details.

For a list of other open-source components included in this repository,
see the file [3rd-party-licenses.txt](3rd-party-licenses.txt).

## Known Issues/Limitations

- When using provided precompiled libraries, users should take into account the already configured static memory pools in middleware layers. [More info here](https://micro-ros.github.io/docs/tutorials/core/microxrcedds_rmw_configuration/).
- micro-ROS transports should be refactored in order to provide a pluggable mechanims. Only USB serial transports are provided.
- Both OpenCR and Teensyduino support files have to be patched in order to use precompiled libraries. 

### Patch OpenCR

```bash
    cd ~/.arduino15/packages/OpenCR/hardware/OpenCR/1.4.15
    rm -rf platform.txt
    wget https://github.com/ROBOTIS-GIT/OpenCR/blob/develop/arduino/opencr_arduino/opencr/platform.txt
```

### Patch Teensyduino

TODO