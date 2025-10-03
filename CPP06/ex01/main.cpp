#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data* test = new Data;
    test->name = "test";
    test->value = 1;
    
    std::cout << "--- DATA ---" << std::endl;
    std::cout << test << std::endl;
    std::cout << "data->name = " << test->name << std::endl;
    std::cout << "data->value = " << test->value << std::endl;

    std::cout << "-------" << std::endl;
    
    uintptr_t serialized = Serializer::serialize(test);
    std::cout << "--- SERIALIZER ---" << std::endl;
    std::cout << serialized << std::endl;

    std::cout << "-------" << std::endl;
    
    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "--- DESERIALIZE ---" << std::endl;
    std::cout << deserialized << std::endl;
    std::cout << "data->name " << deserialized->name << std::endl;
    std::cout << "data->value " << deserialized->value << std::endl;

    std::cout << "-------" << std::endl;
    
    if (test == deserialized)
        std::cout << "OK" << std::endl;
    else
        std::cout << "Error" << std::endl;
    delete (test);
    return (0);
}