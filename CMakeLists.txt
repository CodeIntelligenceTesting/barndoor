cmake_minimum_required(VERSION 3.16)
project(barndoor)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(lib lib.c)
target_sources(lib PUBLIC lib.h)
add_executable(barndoor main.c)
target_link_libraries(barndoor PRIVATE lib)

