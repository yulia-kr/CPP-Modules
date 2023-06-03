#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat  john("John", 50);
	std::cout << std::endl;

	try
	{
		Bureaucrat mathew("Mathew", 151);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat anton("Anton", 0);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		Bureaucrat amanda("Amanda", 1);
		Bureaucrat lola("Lola", 150);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "********" << std::endl;
	std::cout << std::endl;

	Bureaucrat amanda("Amanda", 1);
	Bureaucrat lola("Lola", 150);
	std::cout << "BUREAUCRATS :" << std::endl; 
	std::cout << amanda << std::endl;
	std::cout << lola << std::endl;

	try
	{
		amanda.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << amanda << std::endl;
	std::cout << std::endl;

	try
	{
		lola.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << lola << std::endl;
	std::cout << std::endl;
	
	try
	{
		amanda.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << amanda << std::endl;
}