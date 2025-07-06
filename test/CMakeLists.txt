cmake_minimum_required(VERSION 3.5)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ".")
set(PROJECT_TEST_NAME ${PROJECT_NAME}${USE_CIM_VERSION}_unit_tests)

find_package(Boost COMPONENTS filesystem system unit_test_framework REQUIRED)

file(GLOB_RECURSE TEST_SRC_FILES *.cpp)

include_directories(${Boost_INCLUDE_DIRS})
include_directories(../${USE_CIM_VERSION})
include_directories(../static)
include_directories(../src)

# Build unit tests
add_definitions(-DBOOST_TEST_DYN_LINK)
add_executable(${PROJECT_TEST_NAME} ${TEST_SRC_FILES})
target_link_libraries(${PROJECT_TEST_NAME} ${Boost_LIBRARIES})
target_link_libraries(${PROJECT_TEST_NAME} libcimpp)

foreach(TEST_SRC_FILE ${TEST_SRC_FILES})
  get_filename_component(TEST_NAME ${TEST_SRC_FILE} NAME_WE)
  if(TEST_NAME STREQUAL "test_main")
    continue()
  endif()
  add_test(NAME ${TEST_NAME} COMMAND ${PROJECT_TEST_NAME} --run_test=${TEST_NAME})
endforeach()
