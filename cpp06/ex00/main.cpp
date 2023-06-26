#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc > 2) 
		std::cout << "Too much arguments" << std::endl;
	else if (argc < 2)
		std::cout << "Please provide arguments" << std::endl;
	else {
		ScalarConverter::convert(argv[1]);
	}
}
