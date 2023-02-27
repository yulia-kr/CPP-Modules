/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:59:32 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/26 15:51:14 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(this->name), weapon(this->weapon)
{
	std::cout << name << " is a HumanB" << std::endl;
}

HumanB::~HumanB(void){
	std::cout << this->name << " isn't a HumanB anymore" << std::endl;
}

void HumanB.attack(void){
	if(this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " doesn't have any weapon and started running" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->weapon = *weapon;
}