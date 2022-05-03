# cmake -S cmake-tutorial -B build
cmake_minimum_required(VERSION 3.5)

project(hello-matplotlib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Python3 COMPONENTS Interpreter Development NumPy REQUIRED)
find_package(PythonLibs 3.0 REQUIRED)

add_executable(hello-matplotlib hello-matplotlib.cc)
target_link_libraries(hello-matplotlib
    PRIVATE
        ${PYTHON_LIBRARIES}
        Python3::NumPy
)