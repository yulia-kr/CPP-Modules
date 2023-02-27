/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:59:21 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/26 18:20:57 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
// : name(name), weapon(weapon)
HumanA::HumanA(std::string name, Weapon& weapon) : name_(name), weapon_(weapon)
{
	std::cout << name << " is HumanA" << std::endl;
}

HumanA::~HumanA(){
	std::cout << this->name << " isn't a HumanA anymore" << std::endl;
}

void HumanA::attack(void){
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
