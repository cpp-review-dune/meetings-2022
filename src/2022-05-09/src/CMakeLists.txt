cmake_minimum_required(VERSION 3.13)

project("Second list of exercises" VERSION 2022 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_SYSTEM_NAME Linux)
# set(CMAKE_CXX_COMPILER clang)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall")

find_package(fmt)

add_executable(exercise1 exercise1.cc)
target_link_libraries(exercise1 fmt::fmt)

add_executable(exercise2 exercise2.cc)
target_link_libraries(exercise2 fmt::fmt)

add_executable(exercise3 exercise3.cc)
target_link_libraries(exercise3 fmt::fmt)

add_executable(exercise4 exercise4.cc)
target_link_libraries(exercise4 fmt::fmt)

add_executable(exercise5 exercise5.cc)
target_link_libraries(exercise5 fmt::fmt)

add_executable(expression expression.cc)
target_link_libraries(expression ${SYMENGINE_LIBRARIES})
# add_executable(test3 test3.cc)
# set_property(TARGET test3 PROPERTY CXX_STANDARD 20)