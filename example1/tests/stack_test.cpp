#include <gtest/gtest.h>

#include "stack.hpp"
#include "exception/underflow.hpp"
class StackTest: public ::testing::Test
{
    protected: 
        Stack stack;

        void SetUp() override {
            stack.clean();
        }
    
};

TEST_F(StackTest,CreateStack)
{
    ASSERT_TRUE(stack.isEmpty());
    ASSERT_EQ(0, stack.getSize());
};

TEST_F(StackTest,PushInToStack)
{
    stack.push(0);
    ASSERT_FALSE(stack.isEmpty());
    ASSERT_EQ(1, stack.getSize());
    ASSERT_EQ(0, stack.pop());
};
TEST_F(StackTest,PopOutOfStack){
    stack.push(0);
    stack.pop();
    ASSERT_TRUE(stack.isEmpty());
    ASSERT_EQ(0,stack.getSize());
};
TEST_F(StackTest,PushTwice)
{
    stack.push(0);
    stack.push(1);
    ASSERT_EQ(2,stack.getSize());
    ASSERT_EQ(1,stack.pop());
};
TEST_F(StackTest, PopEmptyStack)
{
    ASSERT_THROW(stack.pop(), UnderflowException);
}; 
