/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:00:46 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/26 14:26:33 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie {
	public:
		Zombie();
		~Zombie();
		void setName(std::string newName){
			this->name = newName;
		};
		void announce( void );
		
	private:
		std::string name;
};

Zombie *zombieHorde(int N, std::string name);

