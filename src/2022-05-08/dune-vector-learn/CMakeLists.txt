cmake_minimum_required(VERSION 3.13)
project(dune-vector-learn CXX)

#find dune-common and set the module path
find_package(dune-common REQUIRED)
list(APPEND CMAKE_MODULE_PATH ${dune-common_MODULE_PATH})

#include the dune macros
include(DuneMacros)

# start a dune project with information from dune.module
dune_project()

dune_enable_all_packages()

add_executable("dune-vector-learn" dune-vector-learn.cc)
target_link_dune_default_libraries("dune-vector-learn")

# finalize the dune project, e.g. generating config.h etc.
finalize_dune_project(GENERATE_CONFIG_H_CMAKE)
