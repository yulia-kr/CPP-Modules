#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
private:
    std::vector<int> numbers;
    unsigned int maxSize;

public:
    Span();
	Span(unsigned int size);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

    Span(unsigned int N);

    void addNumber(int number);
    void addRange(const std::vector<int>& range);

    int shortestSpan() const;
    int longestSpan() const;
};

#endif
