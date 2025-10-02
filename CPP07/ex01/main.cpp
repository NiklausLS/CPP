#include <iostream>
#include <string>
#include "iter.hpp"

int main(void)
{
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intSize = sizeof(intArray) / sizeof(intArray[0]);
    
    std::cout << "tab 1 = ";
    ::iter(intArray, intSize, printElement<int>);
    std::cout << std::endl;
    
    ::iter(intArray, intSize, incrementElement<int>);
    std::cout << "after = ";
    ::iter(intArray, intSize, printElement<int>);
    std::cout << std::endl;

    return (0);
}
