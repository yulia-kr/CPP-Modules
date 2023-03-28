/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:03:19 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/27 09:28:45 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap first = ScavTrap("FIRST");
    ScavTrap second;
    ScavTrap third;
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
    std::cout << "checking gate mode" << std::endl;
    first.guardGate();
    first.guardGate();
    third.guardGate();
    std::cout << std::endl;
}