#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat {
    private:
        const std::string name;
        int grade;
        static const int MIN_GRADE = 150;
        static const int MAX_GRADE = 1;

    public:
        Bureaucrat();
        Bureaucrat(std::string param_name, int param_grade);
        Bureaucrat(const Bureaucrat &bur);
        Bureaucrat &operator=(const Bureaucrat &bur);
        ~Bureaucrat();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
    
    const std::string getName(void) const;
    int getGrade(void) const;

    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &bur);

#endif