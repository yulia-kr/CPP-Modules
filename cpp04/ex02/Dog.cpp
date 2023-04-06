/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:52:17 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/04/05 10:03:58 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	if (this->brain == NULL)
	{
		std::cout << "Dog Brain Constructor failed";
		exit(1);
	}
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Assignation operator for Dog called" << std::endl;
	if (this == &copy)
		return *this;
	this->type = copy.type;
	this->brain = new Brain();
	if (this->brain == NULL)
	{
		std::cout << "Dog Brain Constructor failed";
		exit(1);
	}
	*this->brain = *copy.brain;
	return *this;
}

void Dog::makeSound()const
{
	std::cout << "Dog said woof woof ∘⩋∘" << std::endl;
}

void Dog::getIdea(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << "Dog's idea " << i << " is:	" << this->brain->getIdea(i) << std::endl; 
}

void Dog::setIdea(int id, std::string idea)
{
	this->brain->setIdea(id, idea);
}
