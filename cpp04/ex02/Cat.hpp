/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:52:30 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/31 10:04:04 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
	public:
	Cat();
	~Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &copy);
	
	void makeSound() const;
	void getIdea() const;
	void setIdea(int id, std::string idea);

	private:
	Brain *brain;
};

#endif