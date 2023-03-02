/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:40:02 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/02 09:11:32 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::index = 0;

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add()
{
	this->contact[this->index].contactInput(this->index);
	this->index++;
	if (this->index > 7)
		this->index = 0;
}

void PhoneBook::search()
{
	std::string	line;
	
	std::cout << std::setfill('_') << std::setw(45) << "" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for(int i = 0; i < 8; i++)
	{
		if(this->contact[i].getIndex())
			this->contact[i].displayInfo();
	}
	std::cout << std::setfill('_') << std::setw(45) << "" << std::endl;
	std::cout << "ENTER AN INDEX OF CONTACT OR CANCEL" << std::endl;
	while (getline(std::cin, line))
	{
		if (!line.compare("CANCEL"))
			break;
		if (line.length() == 1 && std::isdigit(line[0]) && std::atoi(line.c_str()) > 0 && std::atoi(line.c_str()) < 9)
		{
			if (this->contact[std::atoi(line.c_str()) - 1].getIndex())
			{
				this->contact[std::atoi(line.c_str()) - 1].displayContacts();
				break;
			}
		}
		std::cout << "WRONG INDEX. TRY AGAIN OR CANCEL" << std::endl;
	}
}