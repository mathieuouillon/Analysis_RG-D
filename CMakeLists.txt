cmake_minimum_required(VERSION 3.19)
if (${CMAKE_VERSION} VERSION_LESS 3.19)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif ()

project(Analysis_RG-D
        VERSION 1.0
        DESCRIPTION "Analysis run group D"
        LANGUAGES CXX)

file(TO_CMAKE_PATH "${PROJECT_BINARY_DIR}/CMakeLists.txt" LOC_PATH)
if (EXISTS "${LOC_PATH}")
    message(FATAL_ERROR "You cannot build in a source directory (or any directory with a CMakeLists.txt file).
     Please make a build subdirectory. Feel free to remove CMakeCache.txt and CMakeFiles.")
endif ()

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_RELEASE_FLAGS "-Ofast")
set(CMAKE_CXX_DEBUG_FLAGS "-O0 -ggdb3")

#set(ROOT_DIR "/w/hallb-scshelf2102/clas12/ouillon/ROOT/root_install/cmake/")
find_package(ROOT REQUIRED COMPONENTS RIO EG Net Hist Tree Matrix Physics MathCore Thread Foam GenVector)
include(${ROOT_USE_FILE})

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    source/main.cpp
)


add_executable(Analysis_RG-D  ${SOURCES})

target_include_directories(Analysis_RG-D PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(Analysis_RG-D PRIVATE ${PROJECT_SOURCE_DIR}/extern)
target_link_libraries(Analysis_RG-D PRIVATE ${ROOT_LIBRARIES})
target_compile_features(Analysis_RG-D PRIVATE cxx_std_20)


