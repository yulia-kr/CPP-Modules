#include "Form.hpp"

Form::Form() : name("Form"), grade_to_sign(1), grade_to_execute(1), isSigned(false){
    std::cout << "Form   Default Constructor was called" << std::endl;
    if(grade_to_sign < MAX_GRADE || grade_to_execute < MAX_GRADE)
        throw Form::GradeTooHighException();
    else if (grade_to_sign > MIN_GRADE || grade_to_execute > MIN_GRADE)
        throw Form::GradeTooLowException();
}

Form::Form(std::string param_name, int param_grade_to_sign, int param_grade_to_execute)
    : name(param_name), grade_to_sign(param_grade_to_sign), grade_to_execute(param_grade_to_execute), isSigned(false){
        std::cout << "Form  Constructor was called" << std::endl;

        if(grade_to_sign < MAX_GRADE || grade_to_execute < MAX_GRADE)
            throw Form::GradeTooHighException();
        else if (grade_to_sign > MIN_GRADE || grade_to_execute > MIN_GRADE)
            throw Form::GradeTooLowException();
}

Form::Form(const Form &form) : name(form.name), grade_to_sign(form.grade_to_sign), grade_to_execute(form.grade_to_execute), isSigned(form.isSigned){
	std::cout << "Form	Copy constructor was called" << std::endl;
}

Form &Form::operator=(const Form &form){
	if (this != &form) {
		this->isSigned = form.isSigned;
	}
	return *this;
}

Form::~Form() {
	std::cout << "Form	destructor was called" << std::endl;
} 

const std::string Form::getName(void) const {
	return this->name;
}

int Form::GetGradeToSign(void) const {
	return this->grade_to_sign;
}

int Form::GetGradeToExecute(void) const {
	return this->grade_to_execute;
}

bool Form::GetIsSigned(void) const {
	return this->isSigned;
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("The Form Grade is too HIGH");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("The Form Grade is too LOW");
}

void Form::beSigned(const Bureaucrat &bur) {
	if (bur.getGrade() > this->grade_to_sign)
		throw GradeTooLowException();
	this->isSigned = true;
	std::cout << "Form 	is signed on" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Form &form) {
	o << "FORM NAME :		" << form.getName() << std::endl;
	o << "FORM STATUS :		" << (form.GetIsSigned() ? "SIGNED" : "UNSIGNED") << std::endl;
	o << "GRADE TO SIGN:		" << form.GetGradeToSign() << std::endl;
	o << "GRADE TO EXECUTE:	" << form.GetGradeToExecute() << std::endl;
	return o;
}