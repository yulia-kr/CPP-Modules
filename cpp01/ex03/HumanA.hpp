/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:58:44 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/26 18:20:43 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{
	public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack(void);
	void setWeapon(Weapon weapon);

	private:
	std::string name_;
	Weapon& weapon_;
};

#endif