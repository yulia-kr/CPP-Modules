/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:30:03 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/28 08:47:21 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phone;
	std::string	line;
	
	std::cout << "********************************" << std::endl;
	std::cout << "** WELCOME TO THE PHONEBOOK! ***" << std::endl;
	std::cout << "*****       YOU CAN       ******" << std::endl;
	std::cout << "***** ADD, SEARCH OR EXIT ******" << std::endl;
	std::cout << "**** ENTER YOUR COMMAND... *****" << std::endl;
	
	while (getline(std::cin, line))
	{
		if (!line.compare("EXIT"))
			break;
		if (!line.compare("ADD"))
			phone.add();
		if (!line.compare("SEARCH"))
			phone.search();
		std::cout << "ENTER ADD, SEARCH OR EXIT" << std::endl; 
	}
	return 0;
}