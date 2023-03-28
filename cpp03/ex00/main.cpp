/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:03:19 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/26 10:33:53 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap first = ClapTrap("FIRST");
    ClapTrap second;
    ClapTrap third;
    third = second;

    std::cout << std::endl;
    first.attack("TARGET");
	std::cout << std::endl;

	std::cout << std::endl;
    std::cout << "checking death" << std::endl;
    first.takeDamage(5);
    first.beRepaired(4);
    first.takeDamage(9);
    first.beRepaired(4);
    first.attack("TARGET");
	std::cout << std::endl;

	std::cout << std::endl;
    std::cout << "checking repairing" << std::endl;
    third.beRepaired(6);
    third.takeDamage(3);
    third.beRepaired(4);
	std::cout << std::endl;

	std::cout << std::endl;
    std::cout << "checking energy points" << std::endl;
    for (int i = 0; i < 11; i++)
    {
        third.attack("TARGET");
    }
	std::cout << std::endl;
}