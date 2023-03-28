/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:03:19 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/28 10:58:42 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	DiamondTrap first = DiamondTrap("FIRST");
    DiamondTrap second;
    DiamondTrap third;
    third = second;

    std::cout << std::endl;
    first.attack("TARGET");
	std::cout << std::endl;

	std::cout << std::endl;
    std::cout << "checking death" << std::endl;
    first.takeDamage(50);
    first.beRepaired(40);
    first.takeDamage(90);
    first.beRepaired(40);
    first.attack("TARGET");
	std::cout << std::endl;

	std::cout << std::endl;
    std::cout << "checking repairing" << std::endl;
    third.beRepaired(60);
    third.takeDamage(30);
    third.beRepaired(40);
    
    std::cout << std::endl;
    std::cout << "who am i" << std::endl;
    first.whoAmI();
    third.whoAmI();
    first.status();
    third.status();
    std::cout << std::endl;

    // std::cout << "checking energy points" << std::endl;
    // for (int i = 0; i < 101; i++)
    // {
    //     third.attack("TARGET");
    // }
	// std::cout << std::endl;
}