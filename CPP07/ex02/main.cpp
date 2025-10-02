#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
#include <iostream>
#include "Array.hpp"

int main( void )
{
    std::cout << "=== Test constructeur vide ===" << std::endl;
    Array<int> empty;
    std::cout << "Taille tableau vide: " << empty.size() << std::endl;

    std::cout << "\n=== Test constructeur avec taille ===" << std::endl;
    Array<int> numbers(5);
    std::cout << "Taille tableau: " << numbers.size() << std::endl;

    std::cout << "\n=== Test modification elements ===" << std::endl;
    for (unsigned int i = 0; i < numbers.size(); i++)
    {
        numbers[i] = i * 10;
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }

    std::cout << "\n=== Test copie ===" << std::endl;
    Array<int> copy(numbers);
    std::cout << "Taille copie: " << copy.size() << std::endl;
    copy[0] = 999;
    std::cout << "Original[0]: " << numbers[0] << std::endl;
    std::cout << "Copie[0]: " << copy[0] << std::endl;

    std::cout << "\n=== Test assignation ===" << std::endl;
    Array<int> assigned;
    assigned = numbers;
    assigned[1] = 888;
    std::cout << "Original[1]: " << numbers[1] << std::endl;
    std::cout << "Assigned[1]: " << assigned[1] << std::endl;

    std::cout << "\n=== Test exception ===" << std::endl;
    try
    {
        std::cout << numbers[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "ERROR: invalid index" << std::endl;
    }

    return (0);
}
