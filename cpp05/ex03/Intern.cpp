#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern			Default constructor was called" << std::endl;
}

Intern::Intern(const Intern &intern) { 
	*this = intern; 
}

Intern &Intern::operator=(const Intern &intern) {
	if (this != &intern) {
		(void)intern;
	}
	return *this;
}

Intern::~Intern() {
	std::cout << "Intern			Destructor was called" << std::endl;
}

const char *Intern::NonExistingFormException::what() const throw() {
	return ("EXCEPTION : GIVEN FORM DOESN'T EXIST");
}

AForm *Intern::makeForm(std::string const &form_name, std::string const &form_target) const {
	std::string const forms_arr[3] = {"shrubbery", "robotomy", "presidential"};

	int ch_form = -1;
	AForm *newForm = NULL;

	for (int i = 2; i >= 0; i--) {
		if(form_name == forms_arr[i]) {
			ch_form = i;
			break;
		}
	}

	switch (ch_form) {
		case Intern::SHRUB_REQUEST:
			newForm = new ShrubberyCreationForm(form_target);
			std::cout << "\nINTERN CREATES " << forms_arr[ch_form] << "\n" << std::endl;
			break;
		case Intern::ROB_REQUEST:
			newForm = new RobotomyRequestForm(form_target);
			std::cout << "\nINTERN CREATES " << forms_arr[ch_form] << "\n" << std::endl;
			break;
		case Intern::PR_PARDON:
			newForm = new PresidentialPardonForm(form_target);
			std::cout << "\nINTERN CREATES " << forms_arr[ch_form] << "\n" << std::endl;
			break;
		default:
			std::cout << "\nFORM " << form_name << " DOESN'T EXIST\n" << std::endl;
			throw Intern::NonExistingFormException();
			break;
	}
	return(newForm);
}