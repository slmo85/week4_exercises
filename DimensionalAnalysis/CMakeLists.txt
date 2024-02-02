cmake_minimum_required(VERSION 3.16)
project(templates
  VERSION 0.0.1
  LANGUAGES CXX
)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-O2")  # turn optimisations on

add_executable(no_analysis physical_quantities.cpp)
add_executable(with_analysis physical_quantities_dimensional.cpp)