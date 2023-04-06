/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 09:45:21 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/04/05 10:02:54 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Assignation operator for Brain called" << std::endl;
	if (this == &copy)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		if (copy.idea[i].length() > 0)
			this->idea[i].assign(copy.idea[i]);
	}	
	return *this;
}

const std::string Brain::getIdea(int id) const
{
	if (id < 100)
		return (this->idea[id]);
	else
		return NULL;
}

void Brain::setIdea(int id, std::string idea)
{
	if (id < 100)
		this->idea[id] = idea;
	else
		return ;
}
