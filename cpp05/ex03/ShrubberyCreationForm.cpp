#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
    : AForm("ShrubberyCreationForm", GRADE_TO_SIGN, GRADE_TO_EXEC), target("Shrubbery") {
        std::cout << "ShrubberyCreationForm    DEFAULT constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string param_target) 
    : AForm(param_target, GRADE_TO_SIGN, GRADE_TO_EXEC), target(param_target) {
        std::cout << "ShrubberyCreationForm    constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf) : AForm() {
    *this = scf;
    std::cout << "ShrubberyCreationForm     COPY constructor was called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm     destructor was called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf) {
    if (this != &scf) {
        this->target = scf.target;
        this->setIsSigned(this->GetIsSigned());
    }
    std::cout << "ShrubberyCreationForm     Assigment operator was called" << std::endl;
    return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const {
    return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &bur) const {
    if (this->GetIsSigned() == false)
        throw AForm::BreakSignException();
    else if (bur.getGrade() > this->GetGradeToExecute())
        throw AForm::GradeTooLowException();
    else {
        std::string file_name = this->target + "_shrubbery";
        std::ofstream outfile;
        outfile.open(file_name);
        if (outfile.is_open()) {
            outfile << std::endl;
            outfile <<"                       # #### ####                         "<< std::endl;
            outfile <<"                    ### */#|### |/####                     "<< std::endl;
            outfile <<"                   ##*/#/ *||/##/_/##/_#                   "<< std::endl;
            outfile <<"                 ###  */###|/ */ # ###                     "<< std::endl;
            outfile <<"               ##_*_#*_*## | #/###_/_####                  "<< std::endl;
            outfile <<"              ## #### # * #| /  #### ##/##                 "<< std::endl;
            outfile <<"               __#_--###`  |{,###---###-~                  "<< std::endl;
            outfile <<"                         * }{                              "<< std::endl;
            outfile <<"                          }}{                              "<< std::endl;
            outfile <<"                          }}{                              "<< std::endl;
            outfile <<"                  yuliia  {{}                              "<< std::endl;
            outfile <<"                    , -=-~{ .-^-                           "<< std::endl;
            outfile <<"                          `}                               "<< std::endl;
            outfile <<"                           {                               "<< std::endl;
            outfile << std::endl;
            std::cout << this->getName() << " creates a file " << this->target << "_shrubbery" << std::endl; 
        } else {
            std::cout << "Cannot open the file" << std::endl;
        }
    }
}