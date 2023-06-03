/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:41:15 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/06/03 12:41:16 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string target;
		static const int GRADE_TO_SIGN = 25;
		static const int GRADE_TO_EXEC = 5;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string param_target);
		PresidentialPardonForm(const PresidentialPardonForm &ppf);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &ppf);
		~PresidentialPardonForm();

		std::string getTarget(void) const;
		virtual void execute(Bureaucrat const &bur) const;
};

#endif