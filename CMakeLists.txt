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


message(STATUS "Is the C++ compiler loaded? ${CMAKE_CXX_COMPILER_LOADED}")
if (CMAKE_CXX_COMPILER_LOADED)
    message(STATUS "The C++ compiler ID is: ${CMAKE_CXX_COMPILER_ID}")
    message(STATUS "Is the C++ from GNU? ${CMAKE_COMPILER_IS_GNUCXX}")
    message(STATUS "The C++ compiler version is: ${CMAKE_CXX_COMPILER_VERSION}")
    message(STATUS "Build type is : ${CMAKE_BUILD_TYPE}")
    message(STATUS "C++ flags, Debug configuration: ${CMAKE_CXX_FLAGS_DEBUG}")
    message(STATUS "C++ flags, Release configuration: ${CMAKE_CXX_FLAGS_RELEASE}")
    message(STATUS "C++ flags, Release configuration with Debug info: ${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
    message(STATUS "C++ flags, minimal Release configuration: ${CMAKE_CXX_FLAGS_MINSIZEREL}")
else ()
    message(STATUS "C++ compiler is not loaded.")
endif ()

#set(ROOT_DIR "/w/hallb-scshelf2102/clas12/ouillon/ROOT/root_install/cmake/")
find_package(ROOT REQUIRED COMPONENTS RIO EG Net Hist Tree Matrix Physics MathCore Thread Foam GenVector)
include(${ROOT_USE_FILE})

add_executable(Analysis_RG-D source/main.cpp)

target_include_directories(Analysis_RG-D PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(Analysis_RG-D PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/extern)
target_link_libraries(Analysis_RG-D PRIVATE ${ROOT_LIBRARIES})
target_compile_features(Analysis_RG-D PRIVATE cxx_std_20)

message(STATUS "Configuration \n
System          ${CMAKE_SYSTEM}
Processor       ${PROCESSOR} (${CMAKE_SYSTEM_PROCESSOR})
Build type      ${CMAKE_BUILD_TYPE}
Install path    ${CMAKE_INSTALL_PREFIX}
Compiler        ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}
Compiler flags:
C               ${CMAKE_C_FLAGS} ${CMAKE_C_FLAGS_${_BUILD_TYPE_UPPER}}
C++             ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_${_BUILD_TYPE_UPPER}}
Linker flags:
Executable      ${CMAKE_EXE_LINKER_FLAGS}
Module          ${CMAKE_MODULE_LINKER_FLAGS}
Shared          ${CMAKE_SHARED_LINKER_FLAGS}\n")

