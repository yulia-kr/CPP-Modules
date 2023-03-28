/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:50:43 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/27 09:27:47 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->guard = false;
	std::cout << "Constructor for ScavTrap called by " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy){
	std::cout << "Copy constructor for ScavTrap was called" << std::endl;
	this->guard = copy.guard;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->guard = false;
	std::cout << "Constructor for ScavTrap called by " << name << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "Destructor for ScavTrap " << name <<  " is called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy_points == 0)
        std::cout << "ScavTrap " << name << " has not enough energy to attack" << std::endl;
    else if (this->hit_points == 0)
        std::cout << "ScavTrap " << name << " is already dead" << std::endl;
    else
    {
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
    }
}

void ScavTrap::guardGate()
{
	if(this->guard == false)
	{
		this->guard = true;
		std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " is already in Gate keeper mode" << std::endl;
}
