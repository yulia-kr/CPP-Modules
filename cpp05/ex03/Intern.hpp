#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	private:
	 enum Type { PR_PARDON, ROB_REQUEST, SHRUB_REQUEST };

	public:
		Intern();
		~Intern();
		Intern(const Intern &rhs);
		Intern &operator=(const Intern &intern);

		AForm *makeForm(std::string const &form_name,
						 std::string const &form_target) const;

		class NonExistingFormException : public std::exception {
			public:
			virtual const char *what() const throw();
	 	};
};

#endif