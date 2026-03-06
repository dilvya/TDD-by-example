#include <gtest/gtest.h>

#include "stack.hpp"

TEST(StackTest,CreateStack)
{
    Stack stack;
    ASSERT_TRUE(stack.isEmpty());
}
TEST(StackTest,PushInStack)
{
    Stack stack; 
    stack.push(0);
    ASSERT_FALSE(stack.isEmpty());
}
