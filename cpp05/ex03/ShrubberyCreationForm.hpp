#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string target;
		static const int GRADE_TO_SIGN = 145;
		static const int GRADE_TO_EXEC = 137;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string param_target);
		ShrubberyCreationForm(const ShrubberyCreationForm &scf);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &scf);
		~ShrubberyCreationForm();

		std::string getTarget(void) const;
		virtual void execute(Bureaucrat const &bur) const;
};

#endif