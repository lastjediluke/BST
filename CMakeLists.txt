cmake_minimum_required(VERSION 3.8)

project(cmpe126f17_labs)


add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp)
add_executable(labs_main ${SOURCE_FILES})

include_directories(lib/lab06/inc)

add_subdirectory(lib/lab06 lab6_lib)
add_subdirectory(test)


target_link_libraries(labs_main lab6_lib)
