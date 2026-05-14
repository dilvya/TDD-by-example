#include "prime_number.hpp"

std::vector<int> PrimeNumber::findUntil(int limit){
    std::vector<int> primesNumbers; 

    if(limit==2)
    {
        primesNumbers.push_back(2);
    }

    return primesNumbers;
}