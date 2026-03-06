#include "stack.hpp"

Stack::Stack():empty(true){};

bool Stack::isEmpty()
{
    return empty;
}

void Stack::push(int element)
{
    empty=false;
}
int Stack::pop()
{
    empty=true;
    return 0;
}