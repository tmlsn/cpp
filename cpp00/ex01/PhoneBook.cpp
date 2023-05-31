/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:09:36 by tmalless          #+#    #+#             */
/*   Updated: 2023/05/04 17:53:49 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "New Phone Book created\n";
	this->c_number = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook deleted\n";
}

int	check_phoneNumber(std::string num)
{
	if (num.length() == 10 && num[0] - 48 == 0)
	{
		for (size_t i = 0; i < 10; i++)
		{
			if (num[i] - 48 < 0 || num[i] - 48 > 9)
				return (1);
		}
		return (0);
	}
	else
		return (1);
}

void PhoneBook::add()
{
	std::string info;
	if (this->c_number > 7)
	{
		rep[this->c_number % 8].~Contact();
/* 		Contact contact;
		rep[c_number % 8] = contact; */
	}
	std::cout << "First Name :\n";
	std::cin >> info;
	this->rep[this->c_number % 8].setFirstName(info);
	std::cout << "last Name :\n";
	std::cin >> info;
	this->rep[this->c_number  % 8].setLastName(info);
	std::cout << "Nick Name :\n";
	std::cin >> info;
	this->rep[this->c_number % 8].setNickName(info);
	std::cout << "Phone Number :\n";
	std::cin >> info;
	while (check_phoneNumber(info))
	{
		std::cout << "Wrong format, try again :\n";
		std::cin >> info;
	}
	this->rep[this->c_number % 8].setPhoneNumber(info);
	std::cout << "Darkest Secret :\n";
	std::cin >> info;
	this->rep[this->c_number % 8].setSecret(info);
	c_number++;
}

int	PhoneBook::check_index(std::string index)
{
	if (index.length() != 1)
		return (1);
	else if (index[0] - 48 == 0)
		return (1);
	else if (c_number < 8)
	{
		if (index[0] - 48 > c_number)
			return (1);
	}
	else
	{
		if (index[0] - 48 > 8)
			return (1);
	}
	return (0);
}

void PhoneBook::search()
{
	int i = 0;
	std::string index;

	if (c_number == 0)
	{
		std::cout << "There is no contact to display, create a contact first.\n";
		return ;
	}
	if (c_number < 8)
	{
		while (i < c_number)
		{
			this->rep[i].printInfo(i);
			i++;
		}
	}
	else
	{
		while (i < 8)
		{
			this->rep[i].printInfo(i);
			i++;
		}
	}
	std::cout << "Wich Contact do you want to see ?\n";
	std::cin >> index;
	while (check_index(index))
	{
		std::cout << "Sorry, wrong index, try again :\n";
		std::cin >> index;
	}
	this->rep[index[0] - 49].print_contact();
}

void PhoneBook::exit()
{
	for (size_t i = 0; i < 8; i++)
	{
		rep[i].~Contact();
	}
	this->~PhoneBook();
	::exit(EXIT_SUCCESS);
}