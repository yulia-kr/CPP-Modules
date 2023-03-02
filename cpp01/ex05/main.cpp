/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykruhlyk <ykruhlyk@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:15:04 by ykruhlyk          #+#    #+#             */
/*   Updated: 2023/03/02 10:22:27 by ykruhlyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harly;
	harly.complain("DEBUG");
	harly.complain("INFO");
	harly.complain("WARNING");
	harly.complain("ERROR");
	harly.complain(" ");
	harly.complain("LEVEL");
}