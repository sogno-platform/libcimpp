cmake_minimum_required(VERSION 3.5)

project(libcimpp CXX)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(thirdparty)

set(libcimpp_MAJOR_VERSION 2)
set(libcimpp_MINOR_VERSION 1)
set(libcimpp_PATCH_VERSION 0)
set(libcimpp_VERSION ${libcimpp_MAJOR_VERSION}.${libcimpp_MINOR_VERSION}.${libcimpp_PATCH_VERSION})

# Options
option(BUILD_SHARED_LIBS "Build shared library" OFF)
set(USE_CIM_VERSION "IEC61970_17v23" CACHE STRING "Define CIM Version")
message(STATUS "Building ${PROJECT_NAME} with USE_CIM_VERSION=${USE_CIM_VERSION}")

file(GLOB_RECURSE SRC src/*.cpp)

add_library(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>)
target_link_libraries(${PROJECT_NAME} PRIVATE arabica)

if(USE_CIM_VERSION STREQUAL "IEC61970_17v07")
  set(CIM_FOLDER "17v07")
  set(CIM_NAME "IEC61970 17v07")
elseif(USE_CIM_VERSION STREQUAL "IEC61970_17v23")
  set(CIM_FOLDER "17v23")
  set(CIM_NAME "IEC61970 17v23")
elseif(USE_CIM_VERSION STREQUAL "IEC61970_16v29a")
  set(CIM_FOLDER "16v29a")
  set(CIM_NAME "IEC61970 16v29a")
elseif(USE_CIM_VERSION STREQUAL "IEC61970_16v29a_IEC61968_12v08")
  set(CIM_FOLDER "16v29a_12v08")
  set(CIM_NAME "IEC61970 16v29a - IEC61968 12v08")
elseif(USE_CIM_VERSION STREQUAL "IEC61970_16v29a_SINERGIEN")
  file(GLOB SIN_DIR_PATH_FILE ${CMAKE_CURRENT_SOURCE_DIR}/16v29a_SINERGIEN*/BaseClass.h)
  string(REGEX MATCH "16v29a_SINERGIEN_([^/])*" SIN_DIR_PATH "${SIN_DIR_PATH_FILE}")
  set(CIM_FOLDER ${SIN_DIR_PATH})
  set(CIM_NAME "16v29a SINERGIEN")
else()
  message(FATAL_ERROR "${USE_CIM_VERSION} is an invalid value for USE_CIM_VERSION")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/${CIM_FOLDER}>)
file(GLOB_RECURSE CIM_SRC ${CIM_FOLDER}/*.cpp)
target_sources(${PROJECT_NAME} PRIVATE ${CIM_SRC})

add_subdirectory(doc)
