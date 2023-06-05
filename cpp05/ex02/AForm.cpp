/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:40:04 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/06/03 12:40:05 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("AForm"), grade_to_sign(1), grade_to_execute(1), isSigned(false){
    std::cout << "AForm			Default Constructor was called" << std::endl;
    if(grade_to_sign < MAX_GRADE || grade_to_execute < MAX_GRADE)
        throw AForm::GradeTooHighException();
    else if (grade_to_sign > MIN_GRADE || grade_to_execute > MIN_GRADE)
        throw AForm::GradeTooLowException();
}

AForm::AForm(std::string param_name, int param_grade_to_sign, int param_grade_to_execute)
    : name(param_name), grade_to_sign(param_grade_to_sign), grade_to_execute(param_grade_to_execute), isSigned(false){
        std::cout << "AForm			Constructor was called" << std::endl;

        if(grade_to_sign < MAX_GRADE || grade_to_execute < MAX_GRADE)
            throw AForm::GradeTooHighException();
        if (grade_to_sign > MIN_GRADE || grade_to_execute > MIN_GRADE)
            throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &Aform) : name(Aform.name), grade_to_sign(Aform.grade_to_sign), grade_to_execute(Aform.grade_to_execute), isSigned(Aform.isSigned){
	std::cout << "AForm			Copy constructor was called" << std::endl;
}

AForm &AForm::operator=(const AForm &Aform){
	if (this != &Aform) {
		this->isSigned = Aform.isSigned;
	}
	return *this;
}

AForm::~AForm() {
	std::cout << "AForm			Destructor was called" << std::endl;
} 

const std::string AForm::getName(void) const {
	return this->name;
}

int AForm::GetGradeToSign(void) const {
	return this->grade_to_sign;
}

int AForm::GetGradeToExecute(void) const {
	return this->grade_to_execute;
}

bool AForm::GetIsSigned(void) const {
	return this->isSigned;
}

void AForm::setIsSigned(bool sign) { 
	this->isSigned = sign; 
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("The AForm Grade is too HIGH");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("The AForm Grade is too LOW");
}

const char *AForm::BreakSignException::what() const throw() {
	return ("BREACH OF SIGN CONTRACT");
}

void AForm::beSigned(const Bureaucrat &bur) {
	if (bur.getGrade() > this->grade_to_sign)
		throw GradeTooLowException();
	this->setIsSigned(true);
	std::cout << "AFORM IS SIGNED ON" << std::endl;
}

std::ostream &operator<<(std::ostream &o, AForm &Aform) {
	o << "AFORM NAME :		" << Aform.getName() << std::endl;
	o << "AFORM STATUS :		" << (Aform.GetIsSigned() ? "SIGNED" : "UNSIGNED") << std::endl;
	o << "GRADE TO SIGN:		" << Aform.GetGradeToSign() << std::endl;
	o << "GRADE TO EXECUTE:	" << Aform.GetGradeToExecute() << std::endl;
	return o;
}