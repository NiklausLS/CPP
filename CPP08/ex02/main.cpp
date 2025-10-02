#include <iostream>
#include <list>
#include "mutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(1);
    mstack.push(42);
    
    std::cout << "top = " << mstack.top() << std::endl;
    
    mstack.pop();
    
    std::cout << "size = " << mstack.size() << std::endl;
    
    mstack.push(1);
    mstack.push(42);
    mstack.push(666);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    
    while (it != ite)
    {
        std::cout << GREEN << *it << RESET << std::endl;
        ++it;
    }
    
    std::stack<int> s(mstack);
    
    std::cout << "-----------------" << std::endl;
    
    std::list<int> lst;
    
    lst.push_back(1);
    lst.push_back(42);
    
    std::cout << "back = " << lst.back() << std::endl;
    
    lst.pop_back();
    
    std::cout << "size = " << lst.size() << std::endl;
    
    lst.push_back(1);
    lst.push_back(42);
    lst.push_back(666);
    lst.push_back(0);
    
    std::list<int>::iterator it2 = lst.begin();
    std::list<int>::iterator ite2 = lst.end();
    
    ++it2;
    --it2;
    
    while (it2 != ite2)
    {
        std::cout << GREEN << *it2 << RESET << std::endl;
        ++it2;
    }
    
    std::cout << "-----------------" << std::endl;
    
    MutantStack<int> copy_stack(mstack);
    
    for (MutantStack<int>::iterator copy_it = copy_stack.begin(); copy_it != copy_stack.end(); ++copy_it)
        std::cout << GREEN << *copy_it << RESET << std::endl;
    
    return (0);
}