/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:40:19 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/06/03 12:40:20 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include <fstream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        const int grade_to_sign;
        const int grade_to_execute;
        bool isSigned;
        static const int MAX_GRADE = 1;
        static const int MIN_GRADE = 150;

    public:
    AForm();
    AForm(std::string param_name, int param_grade_to_sign, int param_grade_to_execute);
    AForm(const AForm &form);
    AForm &operator=(const AForm &form);
    virtual ~AForm();

    class GradeTooHighException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

    class BreakSignException : public std::exception {
        public:
            virtual const char *what() const throw();
    };

    const std::string getName(void) const;
    int GetGradeToSign(void) const;
    int GetGradeToExecute(void) const;
    bool GetIsSigned(void) const; 

    void setIsSigned(bool sign);

    void beSigned(const Bureaucrat &bur);
    virtual void execute(Bureaucrat const &exec) const = 0;
};

std::ostream &operator<<(std::ostream &o, AForm &form);

#endif