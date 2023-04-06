/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 09:45:27 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/04/05 10:00:26 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"
# include <iostream>

class Brain
{
	public:
	Brain();
	virtual ~Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &copy);
	
	const std::string getIdea (int id) const;
	void setIdea (int id, std::string idea);

	private:
	std::string idea[100];
};

#endif