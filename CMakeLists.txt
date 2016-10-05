cmake_minimum_required(VERSION 3.5)

project(CIMParser CXX)

set(CIMParser_MAJOR_VERSION 0)
set(CIMParser_MINOR_VERSION 1)
set(CIMParser_PATCH_VERSION 0)
set(CIMParser_VERSION ${CIMParser_MAJOR_VERSION}.${CIMParser_MINOR_VERSION}.${CIMParser_PATCH_VERSION})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

include_directories(src)
file(GLOB_RECURSE SRC src/*.cpp)

# Find LibXML++
find_package(LibXML++ REQUIRED)
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  list(REMOVE_ITEM LibXML++_LIBRARIES intl)
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
include_directories(${LibXML++_INCLUDE_DIRS})
link_directories(${LibXML++_LIBRARY_DIRS})

# Add combile flag to aviod warnings with C++11
set(CMAKE_CXX_FLAGS_RELEASE  "${CMAKE_CXX_FLAGS_RELEASE} -Wno-inconsistent-missing-override")

SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
#add_library(${PROJECT_NAME} STATIC ${SRC})
add_library(${PROJECT_NAME} SHARED ${SRC})
target_link_libraries(${PROJECT_NAME} ${LibXML++_LIBRARIES})

# Install target
install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(DIRECTORY src/IEC61970 DESTINATION include/${PROJECT_NAME} FILES_MATCHING PATTERN "*.h")
install(FILES src/BaseClass.h src/CIMParser.h src/IEC61970.h src/task.h DESTINATION include/${PROJECT_NAME})

# Configure Doxyfile
find_package(Doxygen)
if(DOXYGEN_FOUND)
  configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
  add_custom_target(doc ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR} COMMENT "Generating API documentation with Doxygen" VERBATIM)
endif(DOXYGEN_FOUND)
