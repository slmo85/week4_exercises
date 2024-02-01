add_executable(Templates Templates.cpp Polynomial.cpp Fraction.cpp)
target_include_directories(Templates PUBLIC ${CMAKE_SOURCE_DIR}/include)