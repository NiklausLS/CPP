#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define YELLOW  "\033[33m"

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack& copy);
    MutantStack& operator=(const MutantStack& copy);

    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;
    reverse_iterator rbegin();
    reverse_iterator rend();
    const_reverse_iterator rbegin() const;
    const_reverse_iterator rend() const;
};

template<typename T>
MutantStack<T>::MutantStack()
{
    std::cout << YELLOW << "--- CONSTRUCTOR ---" << RESET << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << YELLOW << "--- DESTRUCTOR ---" << RESET << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& copy) : std::stack<T>(copy)
{
    std::cout << YELLOW << "--- COPY CONSTRUCTOR ---" << RESET << std::endl;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& copy)
{
    std::cout << YELLOW << "--- ASSIGNMENT OPERATOR ---" << RESET << std::endl;
    if (this != &copy)
        std::stack<T>::operator=(copy);
    return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return (this->c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return (this->c.rend());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return (this->c.rbegin());
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return (this->c.rend());
}

#endif
