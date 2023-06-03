#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <fstream>
#include <stdexcept>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string name;
        const int grade_to_sign;
        const int grade_to_execute;
        bool isSigned;
        static const int MAX_GRADE = 1;
        static const int MIN_GRADE = 150;

    public:
    Form();
    Form(std::string param_name, int param_grade_to_sign, int param_grade_to_execute);
    Form(const Form &form);
    Form &operator=(const Form &form);
    ~Form();

    class GradeTooHighException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

    const std::string getName(void) const;
    int GetGradeToSign(void) const;
    int GetGradeToExecute(void) const;
    bool GetIsSigned(void) const; 

    void beSigned(const Bureaucrat &bur); 
};

std::ostream &operator<<(std::ostream &o, Form &form);

#endif