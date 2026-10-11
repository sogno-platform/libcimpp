cmake_minimum_required(VERSION 3.12...3.28)

project(libcimpp CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
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

set(${PROJECT_NAME}_MAJOR_VERSION 2)
set(${PROJECT_NAME}_MINOR_VERSION 3)
set(${PROJECT_NAME}_PATCH_VERSION 1)
set(${PROJECT_NAME}_VERSION ${${PROJECT_NAME}_MAJOR_VERSION}.${${PROJECT_NAME}_MINOR_VERSION}.${${PROJECT_NAME}_PATCH_VERSION})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/src/version.hpp.in ${CMAKE_CURRENT_SOURCE_DIR}/src/version.hpp)

# Options
option(CIMPP_BUILD_EXAMPLES "Build examples" OFF)
option(CIMPP_BUILD_DOC "Build documentation" ON)

# Set a default build type if none was specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(STATUS "Setting build type to 'Release' as none was specified.")
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build." FORCE)
    # Set the possible values for tools like cmake-gui
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")
endif()

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

set(CIMPP_BUILD_INCLUDE_DIRS
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${USE_CIM_VERSION}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/static>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
)

# Object library: Compile all CIMpp source files once (-fPIC is globally active)
add_library(${PROJECT_NAME}_obj OBJECT ${SRC} ${CIM_STATIC} ${CIM_SRC})
target_include_directories(${PROJECT_NAME}_obj PUBLIC ${CIMPP_BUILD_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME}_obj PUBLIC arabica)

# Dynamic/Shared library (.so): Inherits objects, includes, and dependencies from ${PROJECT_NAME}_obj and arabica
add_library(${PROJECT_NAME} SHARED $<TARGET_OBJECTS:${PROJECT_NAME}_obj>)
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "cimpp${USE_CIM_VERSION}")
target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}_obj arabica)
target_link_options(${PROJECT_NAME} PRIVATE -Wl,--no-warn-search-mismatch)

# Static library (.a): Inherits objects, includes, and dependencies from ${PROJECT_NAME}_obj and arabica
add_library(${PROJECT_NAME}_static STATIC $<TARGET_OBJECTS:${PROJECT_NAME}_obj>)
set_target_properties(${PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "cimpp${USE_CIM_VERSION}")
target_link_libraries(${PROJECT_NAME}_static PUBLIC ${PROJECT_NAME}_obj arabica)

include(GNUInstallDirs)

install(TARGETS ${PROJECT_NAME} ${PROJECT_NAME}_static
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

install(FILES README.md package/copyright
    DESTINATION ${CMAKE_INSTALL_DOCDIR}
    COMPONENT runtime
)

# Settings for packaging
include(CIMppPackaging)

if(CIMPP_BUILD_EXAMPLES)
  message(STATUS "Building examples")
  add_executable(example examples/src/main.cpp)
  add_executable(readwrite examples/src/readwrite.cpp)
  target_link_libraries(example ${PROJECT_NAME})
  target_link_libraries(readwrite ${PROJECT_NAME})
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
