/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:55:14 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/02/25 10:17:24 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contacts {
	public:
		Contacts();
		~Contacts();
		void	contactInput(int index);
		void	limitedWide(std::string info);
		void	displayInfo();
		void	displayContacts();
		int		getIndex(){
			return(this->index);
		};
	
	private:
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif