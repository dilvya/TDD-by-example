#pragma once

#include <cstddef>
#include "exception/underflow.hpp"
class Stack{

    size_t size=0;
    public: 
        Stack()=default;
        bool isEmpty();
        void push(int element);
        int pop();
        int getSize();
        void clean();
};