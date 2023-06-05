/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:40:26 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/06/03 12:40:27 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(1){
	std::cout << "Bureaucrat		Default constructor was called" << std::endl;
	if(this->grade < MAX_GRADE)
		throw GradeTooHighException();
	else if(this->grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string param_name, int param_grade) : name(param_name), grade(param_grade) {
	std::cout << "Bureaucrat		Constructor was called" << std::endl;
	if(this->grade < MAX_GRADE)
		throw GradeTooHighException();
	else if(this->grade > MIN_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur) : name(bur.name), grade(bur.grade){
	std::cout << "Bureaucrat		Copy constructor was called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat		Destructor was called" << std::endl;
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
	if(this->grade == MIN_GRADE)
		throw GradeTooLowException();
	this->grade++;
	std::cout << "Bureaucrat's Grade was DECREMENTED to : " << this->getGrade() << std::endl;
}

void Bureaucrat::incrementGrade() {
	if(this->grade == MAX_GRADE)
		throw GradeTooHighException();
	this->grade--;
	std::cout << "Bureaucrat's grade was INCREMENTED to : " << this->getGrade() << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The grade is too LOW");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The grade is too HIGH");
}

void Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() << std::endl;

    } catch (const std::exception &e) {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const &form) {
	try {
		form.execute(*this);
		std::cout <<this->name << " executed " << form.getName() << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Execution by " << this->name << " was caught with message : " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &Bureaucrat) {
	o << "BUREAUCRAT NAME:	" << Bureaucrat.getName() << std::endl;
	o << "BUREAUCRAT GRADE:	" << Bureaucrat.getGrade() << std::endl;
	return o;
}