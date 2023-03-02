/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 08:40:12 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/02 09:01:05 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	is_empty(std::string str1, std::string str2)
{
	if (str1.empty() && str2.empty())
	{
		std::cout << "Strings are empty" << std::endl;
		return (1);
	}
	else if (str1.empty() || str2.empty())
	{
		if (str1.empty())
			std::cout << "String 1 is empty" << std::endl;
		else
			std::cout << "String 2 is empty" << std::endl;
		return (1);
	}
	return (0);
}

int	replace(std::string filename, std::string str1, std::string str2)
{
	std::string	buff;
	size_t		pos;
	size_t		offset;

	if (is_empty(str1, str2))
		return (1);
	std::ifstream	ifs(filename);
	if (ifs.good())
	{
		if (ifs.peek() == std::ifstream::traits_type::eof())
		{
			std::cout << "Error : " << filename << " is empty" << std::endl;
			return (1);
		}
		std::ofstream	ofs(filename.append(".replace"));
		if (ofs.good())
		{
			while(getline(ifs, buff))
			{
				offset = 0;
				pos = buff.find(str1, offset);
				while (pos != std::string::npos)
				{
					offset = pos;
					buff.erase(pos, str1.length());
					buff.insert(pos, str2);
					pos = buff.find(str1, offset + 1);
				}
				ofs << buff;
				if (ifs.eof())
					break;
				ofs << std::endl;
			}
		}
		ifs.close();
		ofs.close();
	}
	else
	{
		std::cout << "Error: " << strerror(errno) << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char	**argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::string	filename(argv[1]);
	std::string	str1(argv[2]);
	std::string	str2(argv[3]);
	return (replace(filename, str1, str2));
}