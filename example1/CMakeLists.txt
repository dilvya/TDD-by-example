cmake_minimum_required(VERSION 4.2)
project(example1 VERSION 1.0 LANGUAGES CXX)

option(BUILD_TESTS "Run test" ON)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Choix du mode: Debug Release RelWithDebInfo MinSizeRel" FORCE)
endif()



add_library(example1-dev STATIC)

target_sources(example1-dev
    PRIVATE 
        src/stack.cpp
    PUBLIC 
        include/stack.hpp
        include/exception/underflow.hpp
)

target_include_directories(example1-dev PUBLIC include)

target_compile_options(example1-dev PRIVATE
    $<$<CONFIG:Debug>:-O0 -g -Wall>         
    $<$<CONFIG:Release>:-O3 -march=native>  
)

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

    add_executable(example1-test 
        tests/stack_test.cpp
    )
    target_link_libraries(example1-test PRIVATE 
        example1-dev 
        gtest_main
    )

    gtest_discover_tests(example1-test)
endif()