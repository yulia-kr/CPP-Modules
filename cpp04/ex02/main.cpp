/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:37:53 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/04/05 10:07:32 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *j[100];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			j[i] = new Cat();
			if (j[i] == NULL)
			{
				std::cout << "CAT ERROR" << std::endl;
				exit(1);
			}
		}
		else
		{
			j[i] = new Dog();
			if (j[i] == NULL)
			{
				std::cout << "DOG ERROR" << std::endl;
				exit(1);
			}
		}
	}

	std::cout << "\nTESTING\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " it's a " << j[i]->getType() <<std::endl;
		j[i]->makeSound();
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "deleting j" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete j[i];
	}
	std::cout << std::endl;

	std::cout << "DEEP COPY TESTING\n" << std::endl;
	Dog *doggo = new Dog();
	if (doggo == NULL)
	{
		std::cout << "DOG ERROR" << std::endl;
				exit(1);
	}
	doggo->setIdea(0, "eat shoes");
	doggo->setIdea(1, "run around");
	doggo->setIdea(99, "sleep");

	Dog *puppy = new Dog(*doggo);
	if (puppy == NULL)
	{
		std::cout << "DOG ERROR" << std::endl;
				exit(1);
	}
	std::cout << "The 1st " << doggo->getType() << " has idea to: " << std::endl;
	doggo->getIdea();
	std::cout << std::endl;
	std::cout << "deleting doggo" << std::endl;
	delete(doggo);
	std::cout << std::endl;
	std::cout << "The 2d " << puppy->getType() << " has idea to: "  << std::endl;
	puppy->getIdea();
	std::cout << std::endl;
	std::cout << "deleting puppy" << std::endl;
	delete(puppy);
}
