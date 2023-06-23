#include "iter.hpp"

int main(void)
{
	std::cout << "INTEGERS TEST" << std::endl;
	int numbers[6] = {-1, 0, 1, 2, 3, 4};
	iter<int>(numbers, 6, increment);
	iter<int>(numbers, 6, iterPrint);
	iter<int>(NULL, 6, iterPrint);

	std::cout << "CHAR TEST" << std::endl;
    char letters[4] = {'a', 'b', 'c', 'd'};
    iter<char>(letters, 4, increment);
    iter<char>(letters, 4, iterPrint);

	std::cout << "FLOAT TEST" << std::endl;
    float floats[4] = {0.0f, 0.1f, 0.2f, 0.3f};
    iter<float>(floats, 4, increment);
    iter<float>(floats, 4, iterPrint);

	std::cout << "DOUBLE TEST" << std::endl;
    double doubles[4] = {0.0, 0.1, 0.2, 0.3};
    iter<double>(doubles, 4, increment);
    iter<double>(doubles, 4, iterPrint);

	std::cout << "STRINGS TEST" << std::endl;
    std::string strings[3] = {"This", "is", "string"};
    iter<std::string>(strings, 3, iterPrint);

	return 0;
}