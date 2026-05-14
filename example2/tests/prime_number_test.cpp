#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "prime_number.hpp"

TEST(PrimeNumberTest,findPrimeNumber)
{
    PrimeNumber computer = PrimeNumber();

    EXPECT_THAT(computer.findUntil(1), testing::IsEmpty());
    EXPECT_THAT(computer.findUntil(2), testing::ElementsAre(2));
};