#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template<typename T>
class Array
{
    private:
        T* _elements;
        unsigned int _size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        ~Array();
        
        Array& operator=(const Array& other);
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        
        unsigned int size() const;
};

template<typename T>
Array<T>::Array() : _elements(NULL), _size(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _elements(NULL), _size(n)
{
    if (n > 0)
        _elements = new T[n];
}

template<typename T>
Array<T>::Array(const Array& other) : _elements(NULL), _size(other._size)
{
    if (_size > 0)
    {
        _elements = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
        {
            _elements[i] = other._elements[i];
        }
    }
}

template<typename T>
Array<T>::~Array()
{
    delete[] (_elements);
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        delete[] (_elements);
        _size = other._size;
        _elements = NULL;
        if (_size > 0)
        {
            _elements = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
            {
                _elements[i] = other._elements[i];
            }
        }
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::exception();
    return (_elements[index]);
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::exception();
    return (_elements[index]);
}

template<typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}

#endif
