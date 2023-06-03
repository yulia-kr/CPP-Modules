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
	Bureaucrat  john("John", 50);
	Bureaucrat	mathew("Mathew", 150);
	Bureaucrat	daniel("Daniel", 25);
	Bureaucrat	paul("Paul", 1);
	std::cout << std::endl;

	std::cout << "BUREAUCRATS :" << std::endl;
	std::cout << john << std::endl;
	std::cout << mathew << std::endl;
	std::cout << daniel << std::endl;
	std::cout << paul << std::endl;
	std::cout << std::endl;

	ShrubberyCreationForm doc1("Shrubbery");
	ShrubberyCreationForm doc2(doc1);
	RobotomyRequestForm doc3("Roboty");
	RobotomyRequestForm doc4(doc3);
	PresidentialPardonForm doc5("Presidental");
	PresidentialPardonForm doc6(doc5);
	std::cout << std::endl;

	std::cout << "Forms :" << std::endl;
	std::cout << doc1 << std::endl;
	std::cout << doc2 << std::endl;
	std::cout << doc3 << std::endl;
	std::cout << doc4 << std::endl;
	std::cout << doc5 << std::endl;
	std::cout << doc6 << std::endl;
	std::cout << std::endl;

	john.signForm(doc1);
	john.signForm(doc3);
	john.signForm(doc5);
	std::cout << std::endl;

	mathew.signForm(doc1);
	mathew.signForm(doc3);
	mathew.signForm(doc5);
	std::cout << std::endl;

	daniel.signForm(doc1);
	daniel.signForm(doc3);
	daniel.signForm(doc5);
	std::cout << std::endl;

	paul.signForm(doc1);
	paul.signForm(doc3);
	paul.signForm(doc5);
	std::cout << std::endl;

	john.executeForm(doc1);
	john.executeForm(doc3);
	john.executeForm(doc5);
	std::cout << std::endl;

	mathew.signForm(doc2);
	mathew.signForm(doc4);
	mathew.signForm(doc6);
	std::cout << std::endl;

	daniel.signForm(doc2);
	daniel.signForm(doc4);
	std::cout << std::endl;
}