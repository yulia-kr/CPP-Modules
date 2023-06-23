#include "Array.hpp"

int main(void)
{
	Array<int> numbers(4);

	for (int x = 0; x < 4; x++)
	{	 numbers[x] = 0;}

	numbers[1] = 1;
	std::cout << "Number 1: " << numbers[1] << std::endl;
	std::cout << "Size: " << numbers.size() << std::endl;

	Array<int> copyNumbers = numbers;
	std::cout << "Array : " << std::endl;
	numbers.arrayPrint();
	std::cout << std::endl;
	std::cout << "Copy array : " << std::endl;
	copyNumbers.arrayPrint();
	std::cout << std::endl;
 
	numbers[2] = 2;
	std::cout << "Array : " << std::endl;
	numbers.arrayPrint();
	std::cout << std::endl;
	std::cout << "Copy array : " << std::endl;
	copyNumbers.arrayPrint();
	std::cout << std::endl;

	Array<int> empty;
	std::cout << empty.size() << std::endl;
	std::cout << "Empty array printing : " << std::endl;
	empty.arrayPrint();
	try
	{
		std::cout << empty[1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	} 

	return 0;

}