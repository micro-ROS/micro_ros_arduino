![banner](.images/banner-dark-theme.png#gh-dark-mode-only)
![banner](.images/banner-light-theme.png#gh-light-mode-only)

# micro-ROS for Arduino

This is a micro-ROS library for baremetal projects based on Arduino IDE or Arduino CLI.

As the build process for ROS 2 and micro-ROS is based on custom meta-build system tools and [CMake](https://cmake.org/), this library is provided as a precompiled library. However, users can rebuild their own precompiled libraries in order to modify the micro-ROS configuration or [RMW parameters](https://micro.ros.org/docs/tutorials/advanced/microxrcedds_rmw_configuration/) by customizing the respective [.meta file](https://github.com/micro-ROS/micro_ros_arduino/tree/main/extras/library_generation).

- [micro-ROS for Arduino](#micro-ros-for-arduino)
  - [Supported boards](#supported-boards)
  - [How to use the precompiled library](#how-to-use-the-precompiled-library)
    - [Arduino IDE](#arduino-ide)
    - [PlatformIO](#platformio)
  - [How to build the precompiled library](#how-to-build-the-precompiled-library)
  - [Patch Arduino board for support precompiled libraries](#patch-arduino-board-for-support-precompiled-libraries)
    - [Patch Teensyduino](#patch-teensyduino)
    - [Patch SAM](#patch-sam)
  - [Purpose of the Project](#purpose-of-the-project)
  - [License](#license)
  - [Known Issues/Limitations](#known-issueslimitations)

## Supported boards

Supported boards are:

| Board                                                                                                       | Min version | State      | Details                                                                                              | .meta file               |
| ----------------------------------------------------------------------------------------------------------- | ----------- | ---------- | ---------------------------------------------------------------------------------------------------- | ------------------------ |
| [Arduino Portenta H7 M7 Core](https://store.arduino.cc/portenta-h7)                                         | v1.8.5      | Supported  | Official Arduino support                                                                             | `colcon.meta`            |
| [Arduino Nano RP2040 Connect](https://docs.arduino.cc/hardware/nano-rp2040-connect)                         | v1.8.5      | Supported  | Official Arduino support                                                                             | `colcon_verylowmem.meta` |
| [OpenCR](https://emanual.robotis.com/docs/en/parts/controller/opencr10/)                                    | v1.4.16     | Supported  | [Based on custom board](https://emanual.robotis.com/docs/en/parts/controller/opencr10/#arduino-ide)  | `colcon.meta`            |
| [Teensy 4.0](https://www.pjrc.com/store/teensy40.html)                                                      | v1.8.5      | Not tested | [Based on Teensyduino (1.58.x)](https://www.pjrc.com/arduino-ide-2-0-0-teensy-support/)                       | `colcon.meta`            |
| [Teensy 4.1](https://www.pjrc.com/store/teensy41.html)                                                      | v1.8.5      | Supported  | [Based on Teensyduino (1.58.x)](https://www.pjrc.com/arduino-ide-2-0-0-teensy-support/)                       | `colcon.meta`            |
| [Teensy 3.2/3.1](https://www.pjrc.com/store/teensy32.html)                                                  | v1.8.5      | Supported  | [Based on Teensyduino (1.58.x)](https://www.pjrc.com/arduino-ide-2-0-0-teensy-support/)                       | `colcon_lowmem.meta`     |
| [Teensy 3.5](https://www.pjrc.com/store/teensy35.html)                                                      | v1.8.5      | Not tested | [Based on Teensyduino (1.58.x)](https://www.pjrc.com/arduino-ide-2-0-0-teensy-support/)                       | `colcon_lowmem.meta`     |
| [Teensy 3.6](https://www.pjrc.com/store/teensy36.html)                                                      | v1.8.5      | Supported  | [Based on Teensyduino (1.58.x)](https://www.pjrc.com/arduino-ide-2-0-0-teensy-support/)                       | `colcon_lowmem.meta`     |
| [ESP32 Dev Module](https://docs.espressif.com/projects/arduino-esp32/en/latest/boards/ESP32-DevKitC-1.html) | v1.8.5      | Supported  | [Arduino core for the ESP32 (v2.0.2)](https://github.com/espressif/arduino-esp32/releases/tag/2.0.2) | `colcon.meta`            |

Community contributed boards are:

| Board                                                                                    | Min version | Contributor                                            | Details                                                                   | .meta file               |
| ---------------------------------------------------------------------------------------- | ----------- | ------------------------------------------------------ | ------------------------------------------------------------------------- | ------------------------ |
| [Arduino Due](https://store.arduino.cc/arduino-due)                                      | -           | [@lukicdarkoo](https://github.com/lukicdarkoo)         |                                                                           | `colcon_verylowmem.meta` |
| [Arduino Zero](https://store.arduino.cc/arduino-zero)                                    | -           | [@lukicdarkoo](https://github.com/lukicdarkoo)         |                                                                           | `colcon_verylowmem.meta` |
| [Kakute F7](http://www.holybro.com/product/kakute-f7-aio-v1-5/)                          | -           | [@amfern](https://github.com/amfern)                   |                                                                           | `colcon.meta`            |
| [STM32-E407](https://www.olimex.com/Products/ARM/ST/STM32-E407/resources/STM32-E407.pdf) | -           | [@dominikn](https://github.com/dominikn)               |                                                                           | `colcon.meta`            |
| [Wio Terminal](https://wiki.seeedstudio.com/Wio-Terminal-Getting-Started/)               | -           | [@maehara-keisuke](https://github.com/maehara-keisuke) |                                                                           | `colcon.meta`            |
| [Raspberry Pi Pico](https://www.raspberrypi.com/documentation/microcontrollers/)         | -           | [@maehara-keisuke](https://github.com/maehara-keisuke) | with [ESP-AT](https://www.espressif.com/en/products/sdks/esp-at/overview) | `colcon_verylowmem.meta` |
| [Seeed Studio XIAO SAMD21](https://wiki.seeedstudio.com/Seeeduino-XIAO/)                 | -           | [@maehara-keisuke](https://github.com/maehara-keisuke) | with [ESP-AT](https://www.espressif.com/en/products/sdks/esp-at/overview) | `colcon_verylowmem.meta` |
| [Seeed Studio XIAO RP2040](https://wiki.seeedstudio.com/XIAO-RP2040/)                    | -           | [@maehara-keisuke](https://github.com/maehara-keisuke) | with [ESP-AT](https://www.espressif.com/en/products/sdks/esp-at/overview) | `colcon_verylowmem.meta` |

You can find the available precompiled ROS 2 types for messages and services in [available_ros2_types](available_ros2_types).

## How to use the precompiled library

### Arduino IDE

Go to [link to release section](https://github.com/micro-ROS/micro_ros_arduino/releases) and download the last release of micro-ROS library for Arduino.

Include it in your project using `Sketch -> Include library -> Add .ZIP Library...`

You can test micro-ROS examples located in this repo examples folder.

Remember that is possible to use a micro-ROS Agent just with this docker command:

```bash
# Serial micro-ROS Agent
docker run -it --rm -v /dev:/dev --privileged --net=host microros/micro-ros-agent:humble serial --dev [YOUR BOARD PORT] -v6
```
### PlatformIO

PlatformIO support for this repository has been deprecated in favor of its own build system: [micro_ros_platformio](https://github.com/micro-ROS/micro_ros_platformio)

## How to build the precompiled library

If you need to add custom packages or types, or customize any internal parameter of the micro-ROS stack, you will need to recompile this library from source code:

```bash
docker pull microros/micro_ros_static_library_builder:humble
docker run -it --rm -v $(pwd):/project --env MICROROS_LIBRARY_FOLDER=extras microros/micro_ros_static_library_builder:humble
```

Optionally a specific single target can be built using the `-p <LIBRARY_TARGET>` argument like this:

```bash
docker run -it --rm -v $(pwd):/project --env MICROROS_LIBRARY_FOLDER=extras microros/micro_ros_static_library_builder:humble -p <LIBRARY_TARGET>
```

Available targets `LIBRARY_TARGETS` are available on the [top of the extras/library_generation/library_generation.sh file](https://github.com/micro-ROS/micro_ros_arduino/blob/main/extras/library_generation/library_generation.sh#L13-L24)

Folders added to `extras/library_generation/extra_packages` and entries added to `extras/library_generation/extra_packages/extra_packages.repos` will be taken into account by this build system.
This should be used for example when adding custom messages types or custom micro-ROS packages.

You can [configure many parameters](https://micro.ros.org/docs/tutorials/advanced/microxrcedds_rmw_configuration/) of the library by editing the respective `.meta` file in the `extras/library_generation/` directory.

## Patch Arduino board for support precompiled libraries
### Patch Teensyduino

Go inside your Arduino + Teensyduino installation and replace `platform.txt`:

```bash
export TEENSYDUINO_VERSION=[Your Teensyduino library version, e.g: 1.58.0]
export ARDUINO_PATH=[Your Arduino + Teensyduino path]
cd $ARDUINO_PATH/hardware/avr/$TEENSYDUINO_VERSION/
curl https://raw.githubusercontent.com/micro-ROS/micro_ros_arduino/main/extras/patching_boards/platform_teensy.txt > platform.txt
```

The patch applies the changes detailed on the first two sections of this post: [Solution for adding support for pre-compiled Libraries](https://forum.pjrc.com/threads/63256-Solution-for-adding-support-for-pre-compiled-Libraries)

### Patch SAM

Go inside your Arduino installation and replace `platform.txt`:

```bash
export ARDUINO_PATH=[Your Arduino path]
cd $ARDUINO_PATH/hardware/sam/1.6.12/
curl https://raw.githubusercontent.com/micro-ROS/micro_ros_arduino/main/extras/patching_boards/platform_arduinocore_sam.txt > platform.txt
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

- When using provided precompiled libraries, users should take into account the already configured static memory pools in middleware layers. [More info here](https://micro.ros.org/docs/tutorials/advanced/microxrcedds_rmw_configuration/).
- micro-ROS transports should be refactored in order to provide a pluggable mechanisms. Only USB serial transports are provided.
- Teensyduino support files have to be patched in order to use precompiled libraries.
- To solve Python errors on ESP32 compilation: `apt install python-is-python3 && pip3 install pyserial`
