/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:58:28 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/28 17:03:52 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon{
	public:
	Weapon(std::string type);
	~Weapon(void);
	void setType(std::string newType){
		type = newType;
	};
	const std::string& getType(void) const{;
		return(type);
	};

	private:
	std::string type;
};

#endif