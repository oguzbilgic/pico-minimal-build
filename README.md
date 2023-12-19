# Pi Pico Minimal Build

This is a minimal build template for a Raspberry Pi Pico project using the Pico SDK and CMake.

## Prerequisites

- CMake 3.13 or higher
- Pico SDK

## Setup

1. Update the `PICO_SDK_PATH` in the `CMakeLists.txt` file with your own Pico SDK path.
2. Set the `PICO_BOARD` in the `CMakeLists.txt` file to your specific Pico board model.

## Build

To build the project, navigate to the project directory and run the following commands:

```bash
mkdir build
cd build
cmake ..
make
```

This will generate the necessary executable and other output files for your project.

## Usage

The main entry point of the project is `src/main.c`. Add your source files to the `add_executable` function in the `CMakeLists.txt` file and link any additional Pico SDK libraries to the `target_link_libraries` function.

You can enable UART output or USB output by uncommenting the respective lines in the `CMakeLists.txt` file.