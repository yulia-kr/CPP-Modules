#ifndef ITER_HPP
# define ITER_HPP
# include <stdint.h>
# include <iostream>
# include <exception>

template <typename T>
void iter(T arrPtr[], uint32_t const &arrSize, void (*f)(T const &))
{
    uint32_t i = 0;

    if(arrPtr == NULL)
    {
        std::cout << "error:: invalid array address" << std::endl;
        return ;
    }

    for (; i < arrSize; i++)
        f(arrPtr[i]);
}

template <typename T>
void iterPrint(T const &item)
{
    std::cout << item << std::endl;
    return;
}

template <typename T>
void increment(T const &item)
{
    const_cast <T &>(item) = item + 1;
    return ;
}

#endif