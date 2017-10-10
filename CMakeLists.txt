cmake_minimum_required(VERSION 3.8)

project(Lab4_LinkedList)


add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp)
add_executable(Lab6_main ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)

target_link_libraries(Lab6_main Lab6_lib)
