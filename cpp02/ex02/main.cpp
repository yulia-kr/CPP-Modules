/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:15:38 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/20 11:04:35 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// Fixed const g( Fixed( 5.05f ) + Fixed( 2 ) );
// Fixed const h( Fixed( 5.05f ) - Fixed( 2 ) );
// Fixed const j( Fixed( 5.05f ) / Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
// std::cout << "g = " << g << std::endl;
// std::cout << Fixed ( Fixed( 5.05f ) + Fixed( 2 ) ) << std::endl;
// std::cout << "h = " << h << std::endl;
// std::cout << Fixed ( Fixed( 5.05f ) - Fixed( 2 ) )  << std::endl;
// std::cout << "j = " << j << std::endl;
// std::cout << Fixed ( Fixed( 5.05f ) / Fixed( 2 ) )  << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
// std::cout << Fixed::min(g , h) << std::endl;
}
