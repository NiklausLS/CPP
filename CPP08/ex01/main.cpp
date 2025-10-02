#include "span.hpp"
#include <iostream>
#include <vector>

int main()
{
    Span sp(10);
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    sp.addNumbers(numbers.begin(), numbers.end());
    std::cout << GREEN << "short = " << sp.shortestSpan() << RESET << std::endl;
    std::cout << GREEN << "long = " << sp.longestSpan() << RESET << std::endl;
    
    std::cout << "-----------------" << std::endl;
    
    Span large(15000);
    std::vector<int> large_numbers;
    for (int i = 0; i < 15000; ++i)
        large_numbers.push_back(i);
    
    large.addNumbers(large_numbers.begin(), large_numbers.end());
    std::cout << GREEN << "short = " << large.shortestSpan() << RESET << std::endl;
    std::cout << GREEN << "long = " << large.longestSpan() << RESET << std::endl;
        
    std::cout << "-----------------" << std::endl;
    
    try
    {
        Span full(2);
        full.addNumber(1);
        full.addNumber(2);
        full.addNumber(3);
    }
    catch (const std::exception& e)
    {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }

    try
    {
        Span empty_span(5);
        empty_span.shortestSpan();
    }
    catch (const std::exception& e)
    {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    try
    {
        Span single(5);
        single.addNumber(42);
        single.longestSpan();
    }
    catch (const std::exception& e)
    {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    try
    {
        Span small_span(3);
        std::vector<int> too_many;
        too_many.push_back(1);
        too_many.push_back(2);
        too_many.push_back(3);
        too_many.push_back(4);
        too_many.push_back(5);
        small_span.addNumbers(too_many.begin(), too_many.end());
    }
    catch (const std::exception& e)
    {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    return (0);
}