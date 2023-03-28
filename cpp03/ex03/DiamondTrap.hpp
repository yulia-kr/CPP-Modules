/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:32:51 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/28 10:51:21 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



# pragma once
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	virtual ~DiamondTrap();
	DiamondTrap(const DiamondTrap &copy);

	DiamondTrap &operator=(const DiamondTrap &copy);
	void attack(const std::string &target);
	void whoAmI(void);
	void status() const;
	
	private:
	std::string	name;
	int	hit_points;
	int	energy_points;
	int	attack_damage;
};

