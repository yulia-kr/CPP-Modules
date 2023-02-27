/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 08:08:59 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/23 09:50:02 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int ac, char **av)
{
	if (ac < 2)
		std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; av[i]; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				char c = std::toupper(av[i][j]);
				std::cout << c;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
