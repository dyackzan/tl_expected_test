cmake_minimum_required(VERSION 3.8)
project(tl_expected_test)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(tl_expected REQUIRED)

add_executable(tl_expected_executable tl_expected_test.cpp)

# target_include_directories(tl_expected_executable PRIVATE ${tl_expected_INCLUDE_DIRS})

target_link_libraries(tl_expected_executable tl_expected::tl_expected)
