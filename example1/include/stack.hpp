#pragma once

#include <cstddef>
#include "exception/underflow.hpp"
#include <vector>
class Stack{

    std::vector<int> elements;

    public: 
        Stack()=default;
        bool isEmpty();
        void push(int value);
        int pop();
        int getSize();
        void clean();
        int peek();
};