# Almost working on Focal Fossa
# https://packages.ubuntu.com/focal/cmake
cmake_minimum_required(VERSION 3.16)

project(session1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(fmt)

add_executable(exercise1 exercise1.cc)
target_link_libraries(exercise1 fmt::fmt)

add_executable(exercise2 exercise2.cc)
target_link_libraries(exercise2 fmt::fmt)

add_executable(exercise3 exercise3.cc)
target_link_libraries(exercise3 fmt::fmt)

add_executable(session1 session1.cc)
add_executable(complex complex.cc)

find_package(Catch2 2 REQUIRED)
add_executable(test test.cc)
target_link_libraries(test Catch2::Catch2)
