cmake_minimum_required(VERSION 3.8)
project(untitled1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp doubly_linked_list.cpp doubly_linked_list.h node.h deck.cpp deck.h)
add_executable(untitled1 ${SOURCE_FILES})