#include <gtest/gtest.h>

#include "stack.hpp"

TEST(StackTest,CreateStack)
{
    Stack stack;
    ASSERT_TRUE(stack.isEmpty());
}
