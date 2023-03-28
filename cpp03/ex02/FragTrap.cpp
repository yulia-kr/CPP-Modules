/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:30:06 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/27 10:30:36 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Constructor for FragTrap called by " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy){
	std::cout << "Copy constructor for FragTrap was called" << std::endl;
	*this = copy;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "Constructor for FragTrap called by " << name << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "Destructor for FragTrap " << name <<  " is called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
    this->name = copy.name;
    this->hit_points = copy.hit_points;
    this->energy_points = copy.energy_points;
    this->attack_damage = copy.attack_damage;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " wants a high fives" << std::endl;
}
