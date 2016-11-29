cmake_minimum_required(VERSION 3.5)

project(CIMParser CXX)

set(CIMParser_MAJOR_VERSION 0)
set(CIMParser_MINOR_VERSION 1)
set(CIMParser_VERSION ${CIMParser_MAJOR_VERSION}.${CIMParser_MINOR_VERSION})

# Find LibXML++
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_LIST_DIR}/cmake/Modules/")
find_package(LibXML++ REQUIRED)

# Add combile flag to aviod warnings with C++11
set(CMAKE_CXX_FLAGS_RELEASE  "${CMAKE_CXX_FLAGS_RELEASE} -Wno-inconsistent-missing-override")

#include_directories(src)
file(GLOB_RECURSE SRC src/*.cpp)

add_library(${PROJECT_NAME} SHARED ${SRC})
target_compile_features(${PROJECT_NAME} PUBLIC cxx_range_for cxx_nullptr)
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>)
target_include_directories(${PROJECT_NAME} PUBLIC $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_include_directories(${PROJECT_NAME} PUBLIC ${LibXML++_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${LibXML++_LIBRARIES})

# Install target
install(
  TARGETS ${PROJECT_NAME}
  DESTINATION lib
  EXPORT ${PROJECT_NAME}Targets)
install(
  DIRECTORY src/IEC61970
  DESTINATION include/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.h")
install(
  FILES src/BaseClass.h src/CIMParser.h src/IEC61970.h src/task.h
  DESTINATION include/${PROJECT_NAME})
install(
  EXPORT ${PROJECT_NAME}Targets
  DESTINATION lib/${PROJECT_NAME})
install(
  FILES cmake/CIMParserConfig.cmake
  DESTINATION lib/${PROJECT_NAME})

# Configure Doxyfile
find_package(Doxygen)
if(DOXYGEN_FOUND)
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
  add_custom_target(doc ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR} COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif(DOXYGEN_FOUND)
