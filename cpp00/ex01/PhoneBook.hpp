/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:42:26 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/23 13:52:38 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contacts.hpp"

class PhoneBook {
	public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	
	private:
	static int	index;
	Contacts	contact[8];
};

#endif