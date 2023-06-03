#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main {
	Intern trainee;
	Bureaucrat john("John", 1);

	AForm *doc1 = trainee.makeForm("shrubbery creation", "42");
	AForm *doc2 = trainee.makeForm("robotomy request", "Your mom");
	AForm *doc3 = trainee.makeForm("presidential pardon", "Your dad");
	AForm *doc4 = trainee.makeForm("world domination", "The world");

	std::cout << "Doc 1: " << *doc1 << std::endl;
	std::cout << "Doc 2: " << *doc2 << std::endl;
	std::cout << "Doc 3: " << *doc3 << std::endl;
	if (!doc4)
		std::cout << "Doc 4 doesn't exist!" << std::endl;

	john.signForm(*doc1);
	john.signForm(*doc2);
	john.signForm(*doc3);
	john.executeForm(*doc1);
	john.executeForm(*doc2);
	john.executeForm(*doc3);

	delete doc1;
	delete doc2;
	delete doc3;
}