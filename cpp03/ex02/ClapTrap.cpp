/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:03:03 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/26 10:39:36 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hit_points(10), energy_points(10), attack_damage(0){
    std::cout << "ClapTrap constructor is called, " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
        std::cout << "ClapTrap copy constructor is called" << std::endl;
        *this = copy;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0){
    std::cout << "ClapTrap constructor is called by name " <<  name << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor ClapTrap is called for " << name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy_points == 0)
        std::cout << "ClapTrap " << name << " has not enough energy to attack" << std::endl;
    else if (this->hit_points == 0)
        std::cout << "ClapTrap " << name << " is already dead" << std::endl;
    else
    {
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points == 0)
        std::cout << "ClapTrap " << this->name << " has not enough energy to be repaired" << std::endl;
    else if (this->hit_points == 0)
        std::cout  << "ClapTrap " << this->name << " is already dead" << std::endl;
    else
	{
        this->hit_points += amount;
		std::cout << "ClapTrap " << this->name << " received " << amount << " heals. HP is " << this->hit_points << std::endl;
		this->energy_points --;
		std::cout << "Claptrap " << this->name << " EP is now " << this->energy_points << std::endl;      
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points == 0)
        std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
    else if ((int)amount > this->hit_points)
        this->hit_points = 0;
    else
        this->hit_points -= amount;
    std::cout << "ClapTrap " << this->name << " get " << amount << " damage" << std::endl;
    std::cout << "ClapTrap " << this->name << " current hp is " << this->hit_points << std::endl;
    if (this->hit_points == 0)
    {
        std::cout << this->name << " has died" << std::endl;
        return;
    }
}
