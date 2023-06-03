#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
    : AForm("RobotomyRequestForm", GRADE_TO_SIGN, GRADE_TO_EXEC), target("Robotomy") {
        std::cout << "RobotomyRequestForm    DEFAULT constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string param_target) 
    : AForm(param_target, GRADE_TO_SIGN, GRADE_TO_EXEC), target(param_target) {
        std::cout << "RobotomyRequestForm    constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf) : AForm() {
    *this = rrf;
    std::cout << "RobotomyRequestForm     COPY constructor was called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm     destructor was called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rrf) {
    if (this != &rrf) {
        this->target = rrf.target;
        this->setIsSigned(this->GetIsSigned());
    }
    std::cout << "RobotomyRequestForm     Assigment operator was called" << std::endl;
    return *this;
}

std::string RobotomyRequestForm::getTarget(void) const {
    return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const &bur) const {
    if (this->GetIsSigned() == false)
        throw AForm::BreakSignException();
    else if (bur.getGrade() > this->GetGradeToExecute())
        throw AForm::GradeTooLowException();
    else
        std::cout << this->getName() << " makes some drilling noises..." << std::endl;
    time_t curr_time;
    std::srand(time(&curr_time));

    int random = std::rand() % 2;
    if(random) {
        std::cout << this->getName() << " has been robotomized successfully 50% of the time" << std::endl;
    } else {
        std::cout << "Robotomy has failed" << std::endl;
    }
}