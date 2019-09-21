cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
set(PROJECT_NAME magspoof)
project(${PROJECT_NAME})

set(${CMAKE_PROJECT_NAME}_BOARD nano328)
set(${CMAKE_PROJECT_NAME}_PORT /dev/ttyUSB3)

#nano
#set(${CMAKE_PROJECT_NAME}_BOARD nano328)
#set(${CMAKE_PROJECT_NAME}_PORT /dev/ttyUSB0)

#mega
#set(${CMAKE_PROJECT_NAME}_BOARD mega2560)
#set(${CMAKE_PROJECT_NAME}_PORT /dev/ttyACM0)

# /usr/share/arduino/hardware/arduino/boards.txt


enable_language(ASM)
set(${CMAKE_PROJECT_NAME}_ALL_SRCS main.ino MagSpoof.cpp)
set(${CMAKE_PROJECT_NAME}_SKETCH main.ino)
generate_arduino_firmware(${CMAKE_PROJECT_NAME})
