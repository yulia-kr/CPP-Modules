/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:14:55 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/20 11:06:22 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = copy.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const 
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed::Fixed(const int value)
{
	this->value = (value << fract_bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	this->value = (std::roundf)(value * FIXED_POINT);
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const {
    return ((float)this->value / FIXED_POINT);
}

int Fixed::toInt( void ) const {
    return (this->value >> fract_bits);
}

std::ostream &operator<<(std::ostream &output, const Fixed &value){
    output << value.toFloat();
    return(output);
}