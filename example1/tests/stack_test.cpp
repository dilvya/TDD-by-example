#include <gtest/gtest.h>

#include "stack.hpp"

class StackTest: public ::testing::Test
{
    protected: 
        Stack stack;
    
};

TEST_F(StackTest,CreateStack)
{
    ASSERT_TRUE(stack.isEmpty());
};

TEST_F(StackTest,PushInStack)
{
    stack.push(0);
    ASSERT_FALSE(stack.isEmpty());
};
