/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:52:38 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/30 20:34:27 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
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
	return *this;
}

void Cat::makeSound()const
{
	std::cout << "Cat said meoooow ∙⩊∙" << std::endl;
}
