#include "stack.hpp"



bool Stack::isEmpty()
{
    return size == 0;
}

void Stack::push(int element)
{
    size ++;
}
int Stack::pop()
{
    if(size == 0)
    {
        throw UnderflowException("Stack is already empty");
    }
    size --;
    return -1;
}
int Stack::getSize()
{
    return size;
}
void Stack::clean(){
    size ==0;
}