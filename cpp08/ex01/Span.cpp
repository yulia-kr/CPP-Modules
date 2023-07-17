#include "Span.hpp"

Span::Span(unsigned int size) : maxSize(size) {}

Span::Span(const Span &other) : maxSize(other.maxSize), numbers(other.numbers) {}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        maxSize = other.maxSize;
        numbers = other.numbers;
    }
    return *this;
}

void Span::addNumber(int num)
{
    if (numbers.size() >= maxSize)
        throw std::runtime_error("Span is already full");
    numbers.push_back(num);
}

void Span::addRange(const std::vector<int>& range)
{
    if (numbers.size() + range.size() > maxSize)
        throw std::runtime_error("Adding range exceeds the capacity of the Span");
    numbers.insert(numbers.end(), range.begin(), range.end());
}

unsigned int Span::shortestSpan() const
{
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough elements to find the shortest span");
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    unsigned int minSpan = static_cast<unsigned int>(sortedNumbers[1]) - static_cast<unsigned int>(sortedNumbers[0]);
    for (size_t i = 1; i < sortedNumbers.size() - 1; ++i)
    {
        unsigned int span = static_cast<unsigned int>(sortedNumbers[i + 1]) - static_cast<unsigned int>(sortedNumbers[i]);
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

unsigned int Span::longestSpan() const
{
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough elements to find the longest span");
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    return static_cast<unsigned int>(sortedNumbers[sortedNumbers.size() - 1]) - static_cast<unsigned int>(sortedNumbers[0]);
}

