cmake_minimum_required(VERSION 3.5)

project(CIMParser CXX)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(thirdparty)

set(CIMParser_MAJOR_VERSION 1)
set(CIMParser_MINOR_VERSION 0)
set(CIMParser_VERSION ${CIMParser_MAJOR_VERSION}.${CIMParser_MINOR_VERSION})

# Options
option(BUILD_SHARED_LIBS "Build shared library" OFF)

#include_directories(src)
file(GLOB_RECURSE SRC src/*.cpp)

add_library(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>)
target_link_libraries(${PROJECT_NAME} PRIVATE arabica)

# Configure Doxyfile
find_package(Doxygen)
if(DOXYGEN_FOUND)
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
  add_custom_target(doc ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR} COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif(DOXYGEN_FOUND)
