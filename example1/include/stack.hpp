#pragma once

#include <cstddef>

class Stack{

    bool empty=true; 
    size_t size=0;
    public: 
        Stack()=default;
        bool isEmpty();
        void push(int element);
        int pop();
        int getSize();
        void clean();
};