/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:55:01 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/23 13:59:04 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contacts::Contacts() :
	index(0),
	firstName(""),
	lastName(""),
	nickName(""),
	phoneNumber(""),
	darkestSecret("")
{
}

Contacts::~Contacts()
{
}

void Contacts::contactInput(int index)
{
	this->index = index + 1;
	std::cout << "First Name:" << std::endl;
	std::getline(std::cin, this->firstName);
	std::cout << "Last Name:" << std::endl;
	std::getline(std::cin, this->lastName);
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, this->nickName);
	std::cout << "Phone Number:" << std::endl;
	std::getline(std::cin, this->phoneNumber);
	std::cout << "The Darkest Secret:" << std::endl;
	std::getline(std::cin, this->darkestSecret);
}

void Contacts::limitedWide(std::string info)
{
	if(info.length() > 10)
	{
		info.resize(9);
		info.append(".");
	}
	std::cout << std::setfill(' ') << std::setw(10) << info << "|";
}

void Contacts::displayInfo()
{
	std::cout << "|" << std::endl;
	this->limitedWide(std::to_string(this->index));
	this->limitedWide(this->firstName);
	this->limitedWide(this->lastName);
	this->limitedWide(this->nickName);
	std::cout << std::endl;
}

void Contacts::displayContacts()
{
	std::cout << "First Name:\t" << this->firstName <<std::endl;
	std::cout << "Last Name:\t" << this->lastName <<std::endl;
	std::cout << "Nickame:\t" << this->nickName <<std::endl;
	std::cout << "Phone Number:\t" << this->phoneNumber <<std::endl;
	std::cout << "Darkest Secret:\t" << this->darkestSecret <<std::endl;
}