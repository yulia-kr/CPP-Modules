/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:58:45 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/26 12:05:43 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zomby;
	
	zomby = newZombie("Ivan");
	zomby->announce();
	randomChump("Vasyl");
	delete zomby;
	return (0);
}