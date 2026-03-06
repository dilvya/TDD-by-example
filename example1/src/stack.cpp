#include "stack.hpp"



bool Stack::isEmpty()
{
    return elements.size() ==0;
}

void Stack::push(int value)
{
    elements.push_back(value);
};
int Stack::pop()
{
    if(elements.size()==0)
    {
        throw UnderflowException("Stack is already empty");
    }
    int result = elements[elements.size()-1];
    elements.erase(elements.end());
    return result;
}
int Stack::getSize()
{
    return elements.size();
}
void Stack::clean(){
    elements.clear();
}
int Stack::peek(){
    if(elements.size()==0)
    {
        throw UnderflowException("Stack is already empty ");        
    }
    return 0;
}