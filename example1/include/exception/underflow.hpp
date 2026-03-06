#pragma once

#include <exception>
#include <string>

class UnderflowException: public std::exception{
    std::string message;
    
    public: 
        UnderflowException(std::string msg) :message(msg) {}

        const char * what() const noexcept override{
            return message.c_str();
        }

};