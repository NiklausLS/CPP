#include "span.hpp"

Span::Span() : _maxSize(0)
{
    std::cout << YELLOW << "--- DESTRUCTOR ---" << RESET << std::endl;
}

Span::~Span()
{
    std::cout << YELLOW << "--- DESTRUCTOR ---" << RESET << std::endl;
}

Span::Span(unsigned int N) : _maxSize(N)
{
    std::cout << YELLOW << "--- CONSTRUCTOR size = " << N << RESET << std::endl;
    _numbers.reserve(N);
}

Span::Span(const Span& other) : _maxSize(other._maxSize), _numbers(other._numbers)
{
    std::cout << YELLOW << "--- COPY CONSTRUCTOR ---" << RESET << std::endl;
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        _maxSize = other._maxSize;
        _numbers = other._numbers;
    }
    return (*this);
}

void Span::addNumber(int number)
{
    if (_numbers.size() >= _maxSize)
        throw SpanFullException();
    _numbers.push_back(number);
}

int Span::shortestSpan() const
{
    if (_numbers.size() < 2)
        throw NoSpanException();
    
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    
    int min_span = INT_MAX;
    for (size_t i = 1; i < sorted.size(); ++i)
    {
        int span = sorted[i] - sorted[i-1];
        if (span < min_span)
            min_span = span;
    }
    return (min_span);
}

int Span::longestSpan() const
{
    if (_numbers.size() < 2)
        throw NoSpanException();
    
    int min_val = *std::min_element(_numbers.begin(), _numbers.end());
    int max_val = *std::max_element(_numbers.begin(), _numbers.end());
    return (max_val - min_val);
}
