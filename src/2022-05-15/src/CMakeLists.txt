cmake_minimum_required(VERSION 3.20)

project("Symbolic")

find_package(SymEngine 0.9.0 CONFIG)
add_executable(main main.cc)
target_link_libraries(main ${SYMENGINE_LIBRARIES})

add_executable(example example.cc)
target_link_libraries(example ${SYMENGINE_LIBRARIES})

add_executable(matrices matrices.cc)
target_link_libraries(matrices ${SYMENGINE_LIBRARIES})

add_executable(helloautodiff helloautodiff.cc)
add_executable(secondautodiff secondautodiff.cc)
add_executable(multiautodiff multiautodiff.cc)