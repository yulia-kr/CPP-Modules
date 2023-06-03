#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
    : AForm("PresidentialPardonForm", GRADE_TO_SIGN, GRADE_TO_EXEC), target("Presidental") {
        std::cout << "PresidentialPardonForm    DEFAULT constructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string param_target) 
    : AForm(param_target, GRADE_TO_SIGN, GRADE_TO_EXEC), target(param_target) {
        std::cout << "PresidentialPardonForm    constructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf) : AForm() {
    *this = ppf;
    std::cout << "PresidentialPardonForm     COPY constructor was called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm     destructor was called" << std::endl;
}

PresidentialPardonForm PresidentialPardonForm::operator=(const PresidentialPardonForm &ppf) {
    if (this != &ppf) {
        this->target = ppf.target;
        this->setIsSigned(this->GetIsSigned());
    }
    std::cout << "PresidentialPardonForm     Assigment operator was called" << std::endl;
    return *this;
}

std::string PresidentialPardonForm::getTarget(void) const {
    return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const &bur) const {
    if (this->GetIsSigned() == false)
        throw AForm::BreakSignException();
    else if (bur.getGrade() > this->GetGradeToExecute())
        throw AForm::GradeTooLowException();
    else
        std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}