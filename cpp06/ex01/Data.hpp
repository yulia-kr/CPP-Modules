#ifndef DATA_HPP
# define DATA_HPP

# include <cstdlib>
# include <cstdint>
# include <iostream>

typedef struct  Data
{
   unsigned char c;
   uint8_t idx;
   uint16_t info;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif 