cmake_minimum_required(VERSION 3.5)

project(libcimpp CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake/" "${CMAKE_CURRENT_SOURCE_DIR}/../../cmake")

if(NOT USE_CIM_VERSION)
  set(USE_CIM_VERSION "CGMES_2.4.15_27JAN2020" CACHE STRING "Define CIM Version")
endif()

message(STATUS "Building ${PROJECT_NAME} with USE_CIM_VERSION=${USE_CIM_VERSION}")

if(USE_CIM_VERSION STREQUAL "CGMES_2.4.15_27JAN2020")
  set(CGMES_BUILD ON)
  set(CIM_NAME "CGMES 2_4_15 27_01_2020")
elseif(USE_CIM_VERSION STREQUAL "CGMES_2.4.15_16FEB2016")
  set(CGMES_BUILD ON)
  set(CIM_NAME "CGMES 2_4_15 16_02_2016")
elseif(USE_CIM_VERSION STREQUAL "CGMES_2.4.13_18DEC2013")
  set(CGMES_BUILD ON)
  set(CIM_NAME "CGMES_2_4_13 18_12_2013")
elseif(USE_CIM_VERSION STREQUAL "CGMES_3.0.0")
  set(CGMES_BUILD ON)
  set(CIM_NAME "CGMES_3_0_0")
else()
  message(FATAL_ERROR "${USE_CIM_VERSION} is an invalid value for USE_CIM_VERSION")
endif()

set(libcimpp_MAJOR_VERSION 2)
set(libcimpp_MINOR_VERSION 2)
set(libcimpp_PATCH_VERSION 0)
set(libcimpp_VERSION ${libcimpp_MAJOR_VERSION}.${libcimpp_MINOR_VERSION}.${libcimpp_PATCH_VERSION})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/src/version.hpp.in ${CMAKE_CURRENT_SOURCE_DIR}/src/version.hpp)

# Options
option(BUILD_SHARED_LIBS "Build shared library" OFF)
option(CIMPP_BUILD_EXAMPLES "Build examples" OFF)
option(CIMPP_BUILD_DOC "Build documentation" ON)

if(CIMPP_BUILD_DOC)
  message(STATUS "Building doc")
  add_subdirectory(doc)
endif()

add_subdirectory(arabica)

# Uncomment this if you are developing on CIMgen and want to generate CIM c++
#if(CGMES_BUILD)
#  set(CGMES_OUTPUT_FOLDER ${CMAKE_CURRENT_SOURCE_DIR}/${CIM_FOLDER})
#  add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/CGMES_2.4.15/generate)
#endif()

file(GLOB_RECURSE SRC src/*.cpp)
file(GLOB_RECURSE CIM_STATIC static/*.cpp)
file(GLOB_RECURSE CIM_SRC ${USE_CIM_VERSION}/*.cpp)
add_library(${PROJECT_NAME} ${SRC} ${CIM_STATIC} ${CIM_SRC})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "cimpp${USE_CIM_VERSION}")
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${USE_CIM_VERSION}>)
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/static>)
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>)
target_link_libraries(${PROJECT_NAME} PUBLIC arabica)
set_property(TARGET arabica PROPERTY POSITION_INDEPENDENT_CODE ON)

include(GNUInstallDirs)

install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(DIRECTORY ${USE_CIM_VERSION} static src
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/cimpp
    COMPONENT devel
    FILES_MATCHING
        PATTERN "*.h"
        PATTERN "*.hpp"
)

# Settings for packaging
include(CIMppPackaging)

if(CIMPP_BUILD_EXAMPLES)
  message(STATUS "Building examples")
  add_executable(example examples/src/main.cpp)
  add_executable(readwrite examples/src/readwrite.cpp)
  target_link_libraries(example libcimpp)
  target_link_libraries(readwrite libcimpp)
  target_compile_features(example PUBLIC cxx_range_for)
endif()

# Unit tests
enable_testing()
add_subdirectory(test)

# Show feature summary
include(FeatureSummary)
feature_summary(WHAT ALL VAR enabledFeaturesText)
message(STATUS "${enabledFeaturesText}")
message(STATUS "Building ${PROJECT_NAME} with USE_CIM_VERSION=${USE_CIM_VERSION}")
