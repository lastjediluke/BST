project(Lab6_Test)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicTests
        doubly_test.cpp
)

add_subdirectory(lib/gtest-1.7.0)

target_link_libraries(runBasicTests gtest gtest_main)
target_link_libraries(runBasicTests Lab6_lib)


