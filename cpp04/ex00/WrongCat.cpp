/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:53:05 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/30 10:31:53 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "Assignation operator for WrongCat called" << std::endl;
	if (this == &copy)
		return *this;
	this->type = copy.type;
	return *this;
}

void WrongCat::makeSound()const
{
	std::cout << "WrongCat said Wrong meoooow ∙⩊∙" << std::endl;
}