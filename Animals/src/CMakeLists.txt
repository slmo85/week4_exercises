add_library(Animals animalClasses.cpp)
target_include_directories(Animals PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(animalsSpeak animalsSpeak.cpp)
target_link_libraries(animalsSpeak Animals)