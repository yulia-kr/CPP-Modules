#include <iostream>
#include <vector>
#include <algorithm>
#include "Span.hpp"

int main()
{
    try
    {
        Span span(20000); // Increase the capacity to 20,000

        // Adding individual numbers using addNumber
        span.addNumber(10);
        span.addNumber(3);
        span.addNumber(12);
        span.addNumber(7);
        span.addNumber(5);

        // Adding a range of numbers using addRange
        int numbersToAddArr[] = {3, 9, 15, 2, 8};
        std::vector<int> numbersToAdd(numbersToAddArr, numbersToAddArr + sizeof(numbersToAddArr) / sizeof(int));
        span.addRange(numbersToAdd);

        // Generate 10,000 numbers and add them to the Span using addRange
        std::vector<int> largeNumbers;
        for (int i = 0; i < 10000; ++i)
        {
            largeNumbers.push_back(i);
        }
        span.addRange(largeNumbers);

        // Testing shortestSpan and longestSpan
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}

