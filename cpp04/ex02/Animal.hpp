/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:39:46 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/04/04 09:57:36 by ykruhlyk         ###   ########.fr       */
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
	
	virtual void makeSound() const = 0;
	virtual std::string getType() const; 
	
	protected:
	std::string type;
};

#endif