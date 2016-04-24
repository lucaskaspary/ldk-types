cmake_minimum_required (VERSION 2.6)

set(PROJECT_NAME LDK-Types)
project (${PROJECT_NAME})

include_directories( ./include)

# For include other modules
include_directories(../../host/include) 


# Tests
set(PROJECT_TEST_NAME ${PROJECT_NAME}_TEST)
set(PROJECT_TEST_SOURCES
        test/Types_test.cc)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

#Create a executable
add_executable(${PROJECT_TEST_NAME} ${PROJECT_TEST_SOURCES})

# Link module library
target_link_libraries(${PROJECT_TEST_NAME}
					  gtest
					  gtest_main
					  pthread)