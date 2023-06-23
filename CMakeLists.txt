cmake_minimum_required(VERSION 3.13)

# Set the Pico SDK path (update it with your own path)
set(PICO_SDK_PATH ~/code/pico/pico-sdk)

# Include the Pico SDK
include(${PICO_SDK_PATH}/pico_sdk_init.cmake)

# Set the project name
project(pico_project C CXX ASM)

# Set the C/C++ standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the Pico SDK
pico_sdk_init()

# Add your source files here
add_executable(pico_project
    main.c
    # additional source files
)

# Link the Pico SDK libraries
target_link_libraries(pico_project
    pico_stdlib
    # additional Pico SDK libraries
)

# Enable UART output (optional)
# pico_enable_stdio_uart(pico_project 1)

# Create a UF2 output file for the project
pico_add_extra_outputs(pico_project)