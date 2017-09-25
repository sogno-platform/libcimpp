cmake_minimum_required(VERSION 3.5)

project(CIMParser CXX)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(thirdparty)

set(CIMParser_MAJOR_VERSION 2)
set(CIMParser_MINOR_VERSION 1)
set(CIMParser_VERSION ${CIMParser_MAJOR_VERSION}.${CIMParser_MINOR_VERSION})

# Options
option(BUILD_SHARED_LIBS "Build shared library" OFF)
set(USE_CIM_VERSION "IEC61970_16v29a_IEC61968_12v08" CACHE STRING "Define CIM Version")
message(STATUS "Building ${PROJECT_NAME} with USE_CIM_VERSION=${USE_CIM_VERSION}")

file(GLOB_RECURSE SRC src/*.cpp)

add_library(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>)
target_link_libraries(${PROJECT_NAME} PRIVATE arabica)

if(USE_CIM_VERSION STREQUAL "IEC61970_17v07")
  target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/17v07>)
  file(GLOB_RECURSE CIM_SRC 17v07/*.cpp)
  target_sources(${PROJECT_NAME} PRIVATE ${CIM_SRC})
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/17v07/assignment_alias.csv ${CMAKE_BINARY_DIR}/assignment_alias.csv COPYONLY)
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/17v07/task_alias.csv ${CMAKE_BINARY_DIR}/task_alias.csv COPYONLY)
elseif(USE_CIM_VERSION STREQUAL "IEC61970_16v29a")
  target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/16v29a>)
  file(GLOB_RECURSE CIM_SRC 16v29a/*.cpp)
  target_sources(${PROJECT_NAME} PRIVATE ${CIM_SRC})
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/16v29a/assignment_alias.csv ${CMAKE_BINARY_DIR}/assignment_alias.csv COPYONLY)
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/16v29a/task_alias.csv ${CMAKE_BINARY_DIR}/task_alias.csv COPYONLY)
elseif(USE_CIM_VERSION STREQUAL "IEC61970_16v29a_IEC61968_12v08")
 target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/16v29a_12v08>)
  file(GLOB_RECURSE CIM_SRC 16v29a_12v08/*.cpp)
  target_sources(${PROJECT_NAME} PRIVATE ${CIM_SRC})
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/16v29a_12v08/assignment_alias.csv ${CMAKE_BINARY_DIR}/assignment_alias.csv COPYONLY)
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/16v29a_12v08/task_alias.csv ${CMAKE_BINARY_DIR}/task_alias.csv COPYONLY)
elseif(USE_CIM_VERSION STREQUAL "IEC61970_16v29a_SINERGIEN")
  message(FATAL_ERROR "${USE_CIM_VERSION} is an valid but currently unsupported option")
else()
  message(FATAL_ERROR "${USE_CIM_VERSION} is an invalid value for USE_CIM_VERSION")
endif()

# Configure Doxyfile
find_package(Doxygen)
if(DOXYGEN_FOUND)
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
  file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/README.md DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
  add_custom_target(doc ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR} COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif(DOXYGEN_FOUND)
