#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {
	Intern trainee;
	Bureaucrat john("John", 1);

	try {
		AForm *doc1 = trainee.makeForm("shrubbery", "one");
		AForm *doc2 = trainee.makeForm("robotomy", "two");
		AForm *doc3 = trainee.makeForm("presidential", "three");
		std::cout << "Doc 1:\n" << *doc1 << std::endl;
		std::cout << "Doc 2:\n" << *doc2 << std::endl;
		std::cout << "Doc 3:\n" << *doc3 << std::endl;
		john.signForm(*doc1);
		john.signForm(*doc2);
		john.signForm(*doc3);
		std::cout << std::endl;
		john.executeForm(*doc1);
		std::cout << std::endl;
		john.executeForm(*doc2);
		std::cout << std::endl;
		john.executeForm(*doc3);
		std::cout << std::endl;

		delete doc1;
		delete doc2;
		delete doc3;
	} catch(const std::exception& e) {
		std::cout  << e.what() << std::endl;
	}

	try
	{
		AForm *doc4 = trainee.makeForm("myform", "four");
		std::cout << "Doc 4:\n" << *doc4 << std::endl;
		delete doc4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}