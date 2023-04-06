/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:52:38 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/04/05 10:02:38 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	if (this->brain == NULL)
	{
		std::cout << "Cat Brain Constructor failed";
		exit(1);
	}
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Assignation operator for Cat called" << std::endl;
	if (this == &copy)
		return *this;
	this->type = copy.type;
	this->brain = new Brain();
	if (this->brain == NULL)
	{
		std::cout << "Cat Brain Constructor failed";
		exit(1);
	}
	*this->brain = *copy.brain;
	return *this;
}

void Cat::makeSound()const
{
	std::cout << "Cat said meoooow ∙⩊∙" << std::endl;
}

void Cat::getIdea(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << "Cat's idea " << i << " is:	" << this->brain->getIdea(i) << std::endl; 
}

void Cat::setIdea(int id, std::string idea)
{
	this->brain->setIdea(id, idea);
}

