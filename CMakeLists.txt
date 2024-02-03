cmake_minimum_required(VERSION 3.10)

project(wizards)

file(GLOB SOURCES "*.cpp")

set(CMAKE_CXX_FLAGS "-Wall -g")

add_executable(wizards ${SOURCES})

target_include_directories(wizards PUBLIC .)

OPTION(WITH_DEBUG_MODE "Build with debug mode" ON)