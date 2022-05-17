cmake_minimum_required(VERSION 3.16)

project("plot")

find_package(Matplot++ REQUIRED)

add_executable(main main.cc)
target_link_libraries(main PUBLIC Matplot++::matplot)

add_executable(demo demo.cc)

find_package(Python3 COMPONENTS Interpreter Development NumPy REQUIRED)
find_package(PythonLibs 3.0 REQUIRED)

add_executable(plot plot.cc)
target_link_libraries(plot
    PRIVATE
        ${PYTHON_LIBRARIES}
        Python3::NumPy
)

find_package(fmt)

# add_executable("dune-test-vector" dune-test-vector.cc)
# target_link_libraries("dune-test-vector" fmt::fmt)
# target_link_dune_default_libraries("dune-test-vector")