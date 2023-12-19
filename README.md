# Pi Pico Minimal Build

This is a minimal build template for a Raspberry Pi Pico project using the Pico SDK and CMake.

## Prerequisites

- CMake 3.13 or higher
- Pico SDK

## Setup

1. Update the `PICO_SDK_PATH` in the `CMakeLists.txt` file with your own Pico SDK path.
2. Set the `PICO_BOARD` in the `CMakeLists.txt` file to your specific Pico board model.
3. Set the `PROJECT_NAME` in the `CMakeLists.txt` file with your project name.

## Build

To build the project, navigate to the project directory and run the following commands:

```bash
mkdir build
cd build
cmake ..
make
```

This will generate the necessary executable and other output files for your project.

## Flashing the Build to Pi Pico

After building the project, you can flash the generated binary to your Pi Pico using picotool. Here are the steps:

1. Install picotool by following the instructions on the [picotool GitHub page](https://github.com/raspberrypi/picotool).
2. Connect your Pi Pico to your computer. Hold the BOOTSEL button while connecting to enable the UF2 bootloader mode.
3. Use the following command to upload the binary to your Pi Pico:

```bash
cd build
picotool load <your_project_name>.uf2
```

## Usage

The main entry point of the project is `src/main.c`. Add your source files to the `add_executable` function in the `CMakeLists.txt` file and link any additional Pico SDK libraries to the `target_link_libraries` function.

You can enable UART output or USB output by uncommenting the respective lines in the `CMakeLists.txt` file.