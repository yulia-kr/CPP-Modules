#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string target;
		static const int GRADE_TO_SIGN = 72;
		static const int GRADE_TO_EXEC = 45;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string param_target);
		RobotomyRequestForm(const RobotomyRequestForm &rrf);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rrf);
		~RobotomyRequestForm();

		std::string getTarget(void) const;
		virtual void execute(Bureaucrat const &bur) const;
};

#endif