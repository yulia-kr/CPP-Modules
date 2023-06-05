/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:41:02 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/06/03 12:43:46 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat  john("John", 50);
		std::cout << "\n BUREAUCRAT :\n" << john << std::endl;
		ShrubberyCreationForm doc1("Shrubbery");
		std::cout << "\n FORM :" << std::endl;
		std::cout << doc1 << std::endl;
		john.signForm(doc1);
		doc1.execute(john);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout  << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat	mathew("Mathew", 40);
		std::cout << "\n BUREAUCRAT :\n" << mathew << std::endl;
		RobotomyRequestForm doc3("Roboty");
		std::cout << "\n FORM :" << std::endl;
		std::cout << doc3 << std::endl;
		doc3.beSigned(mathew);
		doc3.execute(mathew);
		std::cout << std::endl;
		Bureaucrat	karl("Karl", 70);
		std::cout << "\n BUREAUCRAT :\n" << karl << std::endl;
		RobotomyRequestForm doc8("Robotyk");
		doc3.beSigned(karl);
		doc8.execute(karl);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout  << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	daniel("Daniel", 25);
		std::cout << "\n BUREAUCRAT :\n" << daniel << std::endl;
		PresidentialPardonForm doc5("Presidental");
		std::cout << "\n FORM :" << std::endl;
		std::cout << doc5 << std::endl;
		doc5.beSigned(daniel);
		doc5.execute(daniel);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout  << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	paul("Paul", 1);
		std::cout << "\n BUREAUCRAT :\n" << paul << std::endl;
		PresidentialPardonForm doc6("Presidental");
		std::cout << "\n FORM :" << std::endl;
		std::cout << doc6 << std::endl;
		paul.signForm(doc6);
		doc6.execute(paul);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout  << e.what() << std::endl;
	}
}