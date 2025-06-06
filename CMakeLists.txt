cmake_minimum_required(VERSION 3.13)

# Set the Pico SDK path (update it with your own path)
set(PICO_SDK_PATH ${CMAKE_CURRENT_LIST_DIR}/lib/pico-sdk)

# Set the Pico board
set(PICO_BOARD pico_w)

# Set the project name
set(PROJECT_NAME project_name)

# Include the Pico SDK. Must be before project()
include(${PICO_SDK_PATH}/pico_sdk_init.cmake)

# Set the project name
project(${PROJECT_NAME} C CXX ASM)

# Set the C/C++ standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the Pico SDK
pico_sdk_init()

# Add the project source files
add_executable(${PROJECT_NAME}
    src/main.c
)

# Link the Pico SDK libraries
target_link_libraries(${PROJECT_NAME}
    pico_stdlib
)

# Enable UART output (optional)
# pico_enable_stdio_uart(${PROJECT_NAME} 1)

# Enable USB output (optional)
pico_enable_stdio_usb(${PROJECT_NAME} 1)

# Create map/bin/hex/uf2 files
pico_add_extra_outputs(${PROJECT_NAME})
