add_library(example1-dev STATIC)

target_sources(example1-dev
    PRIVATE 
        src/stack.cpp
    PUBLIC 
        include/stack.hpp
        include/exception/underflow.hpp
)

target_include_directories(example1-dev PUBLIC include)

add_executable(example1-test 
    tests/stack_test.cpp
)
target_link_libraries(example1-test PRIVATE 
    example1-dev 
    gtest_main
)
gtest_discover_tests(example1-test)
