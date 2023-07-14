#include "Span.hpp"

Span::Span(unsigned int N) : maxSize(N)
{
}

void Span::addNumber(int number)
{
    if (numbers.size() >= maxSize)
    {
        throw std::runtime_error("Span is already full");
    }
    numbers.push_back(number);
}

void Span::addRange(const std::vector<int>& range)
{
    if (numbers.size() + range.size() > maxSize)
    {
        throw std::runtime_error("Adding the range would exceed the Span's capacity");
    }
    numbers.insert(numbers.end(), range.begin(), range.end());
}

int Span::shortestSpan() const
{
    if (numbers.size() <= 1)
    {
        throw std::runtime_error("Cannot find a span with fewer than 2 numbers");
    }
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    int minSpan = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 2; i < sortedNumbers.size(); ++i)
    {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan)
        {
            minSpan = span;
        }
    }
    return minSpan;
}

int Span::longestSpan() const
{
    if (numbers.size() <= 1)
    {
        throw std::runtime_error("Cannot find a span with fewer than 2 numbers");
    }
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    return sortedNumbers.back() - sortedNumbers.front();
}
