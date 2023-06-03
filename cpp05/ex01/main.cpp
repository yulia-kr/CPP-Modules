#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form doc("DOC", 98, 23);
	Form doc1(doc);

	try
	{
		Form doc2("LOW", 151, 23);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Form doc3("HIGH_GRADE", 15, 0);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat yulia("Yulia", 70);
	Bureaucrat tania("Tania", 71);
	std::cout << doc << std::endl;
	std::cout << doc1 << std::endl;
	yulia.signForm(doc);
	tania.signForm(doc1);
	doc1 = doc;
	std::cout << doc1 << std::endl;
}