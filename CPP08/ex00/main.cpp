#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

//TO DO LIST
//pas oublier vide

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    
    std::cout << BLUE << "Vector: " << RESET;
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    
    try
    {
        std::vector<int>::iterator it = easyfind(vec, 1);
        //std::vector<int>::iterator it = easyfind(vec, 2);
        //std::vector<int>::iterator it = easyfind(vec, 3);
        //std::vector<int>::iterator it = easyfind(vec, 4);
        std::cout << GREEN << "Found: " << *it << RESET << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    try
    {
        easyfind(vec, 42);
    }
    catch (const std::exception& e)
    {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    std::cout << "-----------------" << std::endl;
    
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    
    std::cout << BLUE << "List: " << RESET;
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    
    try
    {
        std::list<int>::iterator it = easyfind(lst, 1);
        //std::list<int>::iterator it = easyfind(lst, 2);
        //std::list<int>::iterator it = easyfind(lst, 3);
        //std::list<int>::iterator it = easyfind(lst, 4);
        std::cout << GREEN << "Found: " << *it << RESET << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    try
    {
        easyfind(lst, 42);
    }
    catch (const std::exception& e)
    {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    std::cout << "-----------------" << std::endl;

    std::deque<int> deq;
    deq.push_back(1);
    deq.push_back(1);
    deq.push_back(3);
    
    std::cout << BLUE << "Deque: " << RESET;
    for (size_t i = 0; i < deq.size(); ++i)
        std::cout << deq[i] << " ";
    std::cout << std::endl;
    
    try
    {
        std::deque<int>::iterator it = easyfind(deq, 1);
        //std::deque<int>::iterator it = easyfind(deq, 2);
        //std::deque<int>::iterator it = easyfind(deq, 3);
        std::cout << GREEN << "Found: " << *it << RESET << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }

    std::cout << "-----------------" << std::endl;

    std::vector<int> empty_vec;
    std::cout << BLUE << "Empty vector test:" << RESET << std::endl;
    try
    {
        easyfind(empty_vec, 1);
    }
    catch (const std::exception& e)
    {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    return (0);
}
