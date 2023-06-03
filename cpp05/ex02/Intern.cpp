#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern	default constructor was called" << std::endl;
}

Intern::Intern(const Intern &intern) { 
	*this = intern; 
}

Intern Intern::operator=(const Intern &intern) {
	if (this != &intern) {
		(void)intern;
	}
	return *this;
}

Intern::~Intern() {
	std::cout << "Intern	destructor was called" << std::endl;
}

const char *Intern::NonExistingFormException::what() const throw() {
	return ("EXCEPTION : GIVEN FORM DOESN'T EXIST");
}

AForm *Intern(std::string const &form_name, std::string const &form_target) const {
	std::string const forms_arr[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int ch_form = -1;
	AForm *newForm = NULL;

	for (int i = 2; i >= 0; i--) {
		if(form_name == form_arr[i]) {
			ch_form = i;
			break;
		}
	}

	switch (ch_form) {
		case Intern::SHRUB_REQUEST:
			newForm = new ShrubberyCreationForm(form_target);
			std::cout << "Intern creates " << forms_arr[ch_form] << std::endl;
			break;
		case Intern::ROB_REQUEST:
			newForm = new RobotomyRequestForm(form_target);
			std::cout << "Intern creates " << forms_arr[ch_form] << std::endl;
			break;
		case Intern::PR_PARDON:
			newForm = new PresidentialPardonForm(form_target);
			std::cout << "Intern creates " << forms_arr[ch_form] << std::endl;
			break;
		default:
			std::cout << "FORM " << form_name << " DOESN'T EXIST" << std::endl;
			throw Intern::NonExistingFormException();
			break;
	}
	return(newForm);
}