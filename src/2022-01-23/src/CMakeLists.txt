# src/CMakeLists.txt
find_package(Eigen3) # 3.4 REQUIRED NO_MODULE

add_executable(main main.cc)
add_executable(sample sample.cc)
target_link_libraries(sample Eigen3::Eigen)