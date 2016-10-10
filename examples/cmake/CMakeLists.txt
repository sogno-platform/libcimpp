cmake_minimum_required(VERSION 3.5)
find_package(CIMParser REQUIRED)
add_executable(example ${CMAKE_CURRENT_LIST_DIR}/../src/main.cpp)
target_link_libraries(example CIMParser)
