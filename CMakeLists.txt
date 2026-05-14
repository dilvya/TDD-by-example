cmake_minimum_required(VERSION 4.2)
project(TDD_by_example)


option(BUILD_TESTS "Run test" ON)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choix du mode: Debug Release RelWithDebInfo MinSizeRel" FORCE)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(-O0 -g -Wall --coverage)
    add_link_options(--coverage) 
    message(STATUS "Flags Debug & Coverage activés globalement")
else()
    add_compile_options(-O3 -march=native)
endif()

if(BUILD_TESTS)
    message(STATUS "Mode test activé : Download gtest.")
    include(FetchContent)
    FetchContent_Declare(
      googletest
      URL https://github.com/google/googletest/archive/refs/heads/main.zip
    )
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)

    enable_testing()
    include(GoogleTest)
endif()

add_subdirectory(example1)
add_subdirectory(example2)