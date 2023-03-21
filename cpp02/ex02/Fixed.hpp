/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:15:34 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/20 11:06:22 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# define FIXED_POINT (1 << 8)

# include <iostream>
# include <string>
# include <ostream>
# include <cmath>

class Fixed {
	public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed(const Fixed &copy);
	
	Fixed&	operator=(const Fixed &copy);
	
	Fixed	operator+(const Fixed &copy);
	Fixed	operator-(const Fixed &copy);
	Fixed	operator*(const Fixed &copy);
	Fixed	operator/(const Fixed &copy);

	Fixed&	operator--();
	Fixed	operator--(int);
	Fixed&	operator++();
	Fixed	operator++(int);

	bool	operator>(const Fixed copy);
	bool	operator>=(const Fixed copy);
	bool	operator<(const Fixed copy);
	bool	operator<=(const Fixed copy);
	bool	operator==(const Fixed copy);
	bool	operator!=(const Fixed copy);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);

	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
			
	private:
	int					value;
	static int const	fract_bits = 8;
};

std::ostream &operator<<(std::ostream &output, Fixed const &value);

#endif