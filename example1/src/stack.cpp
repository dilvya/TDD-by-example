#include "stack.hpp"



bool Stack::isEmpty()
{
    return empty;
}

void Stack::push(int element)
{
    size ++;
    empty=false;
}
int Stack::pop()
{
    empty=true;
    size --;
    return -1;
}
int Stack::getSize()
{
    return size;
}
void Stack::clean(){
    empty= true;
    size ==0;
}