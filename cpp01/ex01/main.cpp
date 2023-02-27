/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:52:50 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/26 12:04:15 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	int N = 20;
	Zombie *horde = zombieHorde(N, "Ivan");

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
}