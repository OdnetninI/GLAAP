cmake_minimum_required(VERSION 2.8)
project(GLAAP)

set(CMAKE_CXX_FLAGS "-std=c++17 -Werror -Wall -O2 -I${CMAKE_SOURCE_DIR}/src")

FILE(GLOB_RECURSE LOG_SOURCES  src/*.cpp)
set(EXECUTABLE_NAME "GLAAP")
add_executable(${EXECUTABLE_NAME} ${LOG_SOURCES})
install(TARGETS ${EXECUTABLE_NAME} DESTINATION .)

