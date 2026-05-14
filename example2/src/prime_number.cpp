#include "prime_number.hpp"

std::vector<int> PrimeNumber::findUntil(int limit){
    std::vector<int> primesNumbers; 

    for(int i=2; i <= limit && limit > 1; i++)
    {
        primesNumbers.push_back(i);
    }
    return primesNumbers;
}