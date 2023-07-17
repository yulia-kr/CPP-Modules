#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
private:
    unsigned int maxSize;
    std::vector<int> numbers;

public:
    Span(unsigned int size);
    Span(const Span &other);
    Span &operator=(const Span &other);

    void addNumber(int num);
    void addRange(const std::vector<int>& range);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;
};

#endif


