cmake_minimum_required(VERSION 3.15)

project(my_project)

set(CMAKE_CXX_STANDARD 11)

# Add include directories
include_directories(include)

# Add source files
file(GLOB SOURCES "src/*.cpp")

# Create executable
add_executable(my_project ${SOURCES})

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INLCUDE_DIRS})

target_link_libraries(my_project ${OpenCV_LIBS})

include(CTest)

set(CTEST_PROJECT_NAME "toya_project")
set(CTEST_NIGHTLY_START_TIME "01:00:00 UTC")
set(CTEST_DROP_METHOD "https")
set(CTEST_DROP_SITE "my.cdash.org")
set(CTEST_DROP_LOCATION "/submit.php?project=toya_project")
set(CTEST_SITE "my_project")
set(CTEST_BUILD_NAME "Linux-Debug")
set(CTEST_BUILD_COMMAND "cmake --build .")
set(CTEST_CMAKE_GENERATOR "Unix Makefiles")
include(CTest)