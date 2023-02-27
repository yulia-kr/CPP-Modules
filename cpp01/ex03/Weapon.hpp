/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:58:28 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/26 15:40:46 by ykruhlyk         ###   ########.fr       */
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
	const std::string& getType(void) const{
		const std::string& refType = this->type;
		return(refType);
	};

	private:
	std::string type;
};

#endif