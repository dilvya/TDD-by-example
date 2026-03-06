#pragma once

#include <cstddef>
#include "exception/underflow.hpp"
class Stack{

    size_t size=0;
    int element;

    public: 
        Stack()=default;
        bool isEmpty();
        void push(int value);
        int pop();
        int getSize();
        void clean();
};