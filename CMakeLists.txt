cmake_minimum_required(VERSION 3.13...3.27)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(PICO_BOARD pico2_w CACHE STRING "Board type")

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(blink)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project
add_executable( blink
	blink.c
)

target_link_libraries(blink pico_stdlib)

pico_add_extra_outputs(blink)
