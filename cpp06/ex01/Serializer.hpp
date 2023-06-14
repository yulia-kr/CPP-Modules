#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <cstdlib>
# include <cstdint>
# include <iostream>

typedef struct  Data
{
   unsigned char c;
   uint8_t idx;
   uint16_t info;
} Data;

class Serializer {
    public:
    Serializer();
    Serializer(const Serializer &copy);
	~Serializer();
	Serializer &operator=(const Serializer &rhs);

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};

#endif