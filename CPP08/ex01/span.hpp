#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <climits>
#include <sstream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define YELLOW  "\033[33m"

class Span
{
private:
    unsigned int        _maxSize;
    std::vector<int>    _numbers;

public:
    Span();
    ~Span();
    Span(unsigned int N);
    Span(const Span &copy);
    Span& operator=(const Span &copy);

    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;
    
    template<typename Iterator>
    void addNumbers(Iterator begin, Iterator end)
    {
        size_t distance = std::distance(begin, end);
        if (_numbers.size() + distance > _maxSize)
        {
            std::ostringstream oss;
            oss << "not enough space";
            throw std::runtime_error(oss.str());
        }
        _numbers.insert(_numbers.end(), begin, end);
    }

    class SpanFullException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("span is full");
        }
    };

    class NoSpanException : public std::exception
    {
    public:
        virtual const char* what() const throw()
        {
            return ("no span found");
        }
    };
};

#endif