#include "stack.hpp"



bool Stack::isEmpty()
{
    return size == 0;
}

void Stack::push(int value)
{
    size ++;
};
int Stack::pop()
{
    if(size == 0)
    {
        throw UnderflowException("Stack is already empty");
    }
    size --;
    return 0;
}
int Stack::getSize()
{
    return size;
}
void Stack::clean(){
    size =0;
}