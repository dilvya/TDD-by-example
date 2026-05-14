add_library(example2-dev STATIC)

target_sources(example2-dev
    PRIVATE 
        src/prime_number.cpp
    PUBLIC 
        include/prime_number.hpp
)

target_include_directories(example2-dev PUBLIC include)

add_executable(example2-test 
    tests/prime_number_test.cpp
)
target_link_libraries(example2-test PRIVATE 
    example2-dev 
    gtest_main
    GTest::gmock
)
gtest_discover_tests(example2-test)
