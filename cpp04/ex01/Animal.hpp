/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:39:46 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/30 09:47:56 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# pragma once
# include <iostream>

class Animal{
	public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &copy);
	Animal &operator=(const Animal &copy);
	
	virtual void makeSound() const;
	std::string getType() const; 
	
	protected:
	std::string type;
};

#endif