/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:15:04 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/02 10:46:10 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harly;
	std::string level;
	std::cout << "ENTER A LEVEL: [DEBUG] [INFO] [WARNING] or [ERROR]" << std::endl;
	if (!std::cin.eof()) getline(std::cin, level);
	harly.complain(level.c_str());
}