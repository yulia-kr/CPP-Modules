/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:58:25 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/02 08:46:15 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->type = name;
	return ;
}

Weapon::Weapon(void)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string		Weapon::getType() const
{
	return this->type;
}

void			Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}
