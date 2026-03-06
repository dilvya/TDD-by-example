#pragma once

class Stack{

    bool empty; 
    public: 
        Stack();
        bool isEmpty();
        void push(int element);
        int pop();
};