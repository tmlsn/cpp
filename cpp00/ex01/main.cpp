/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:20:39 by tmalless          #+#    #+#             */
/*   Updated: 2023/05/02 18:23:31 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook phoneBook;

	while (1)
	{
		std::cout << "Type your Command :\n";
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
			phoneBook.add();
		else if (cmd.compare("SEARCH") == 0)
			phoneBook.search();
		else if (cmd.compare("EXIT") == 0)
			phoneBook.exit();
		else
			std::cout << "Unrecognized cmd. Type \"ADD\" \"SEARCH\" or \"EXIT\"\n";
	}
	return (1);
}