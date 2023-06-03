#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150){
	std::cout << "Bureaucrat	Default constructor was called" << std::endl;
	if(this->grade < MAX_GRADE)
		throw GradeTooHighException();
	else if(this->grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string param_name, int param_grade) : name(param_name), grade(param_grade) {
	std::cout << "Bureaucrat	Constructor was called" << std::endl;
	if(this->grade < MAX_GRADE)
		throw GradeTooHighException();
	else if(this->grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur) : name(bur.name), grade(bur.grade){
	std::cout << "Bureaucrat	Copy constructor was called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat	destructor was called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bur){
	if(this != &bur)
		this->grade = bur.grade;
	return *this;
} 

const std::string Bureaucrat::getName(void) const {
	return this->name;
}

int Bureaucrat::getGrade(void) const {
	return this->grade;
}

void Bureaucrat::decrementGrade() {
	try {
		if(this->grade == MIN_GRADE)
			throw GradeTooLowException();
		else {
			this->grade++;
			std::cout << "Bureaucrat	Grade was DECREMENTED to : " << this->getGrade() << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "Exception Caught:	" << e.what() << std::endl;
	}
}

void Bureaucrat::incrementGrade() {
	try {
		if(this->grade == MAX_GRADE)
			throw GradeTooHighException();
		else {
			this->grade--;
			std::cout << "Bureaucrat	Grade was INCREMENTED to : " << this->getGrade() << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "Exception Caught:	" << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The grade is too LOW");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The grade is too HIGH");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &Bureaucrat) {
	o << "BUREAUCRAT NAME:	" << Bureaucrat.getName() << std::endl;
	o << "BUREAUCRAT GRADE:	" << Bureaucrat.getGrade() << std::endl;
	return o;
}