cmake_minimum_required(VERSION 2.8)
project(GLAAP)

set(CMAKE_CXX_FLAGS "-std=c++17 -Werror -Wall -O2 -I${CMAKE_SOURCE_DIR}/src")
set(CMAKE_EXE_LINKER_FLAGS "-lsfml-graphics -lsfml-window -lsfml-system -lsfml-network -lsfml-audio")

FILE(GLOB_RECURSE LOG_SOURCES  src/*.cpp)
set(EXECUTABLE_NAME "GLAAP")
add_executable(${EXECUTABLE_NAME} ${LOG_SOURCES})
install(TARGETS ${EXECUTABLE_NAME} DESTINATION .)

