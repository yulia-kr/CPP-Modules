/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:52:07 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/04/04 09:26:46 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
	public:
	Dog();
	~Dog();
	Dog(const Dog &copy);
	Dog &operator=(const Dog &copy);

	void makeSound() const;
	void getIdea() const;
	void setIdea(int id, std::string idea);

	private:
	Brain *brain;
};

#endif