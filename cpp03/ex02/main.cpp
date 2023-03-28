/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:03:19 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/27 10:28:58 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap first = FragTrap("FIRST");
    FragTrap second;
    FragTrap third;
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
    std::cout << "checking fives guys" << std::endl;
    first.highFivesGuys();
    third.highFivesGuys();
    std::cout << std::endl;

    std::cout << std::endl;
    // std::cout << "checking energy points" << std::endl;
    // for (int i = 0; i < 101; i++)
    // {
    //     third.attack("TARGET");
    // }
	// std::cout << std::endl;
}