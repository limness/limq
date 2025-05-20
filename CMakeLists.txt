cmake_minimum_required(VERSION 3.10.0)
project(LiMQ VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

file(GLOB_RECURSE SOURCES 
    ${PROJECT_SOURCE_DIR}/src/*.cpp
    ${PROJECT_SOURCE_DIR}/src/*.hpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

message(STATUS "LiMQ configured: Build type is ${CMAKE_BUILD_TYPE}")
