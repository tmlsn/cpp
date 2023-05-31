/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:09:21 by tmalless          #+#    #+#             */
/*   Updated: 2023/05/04 17:50:25 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "New Contact created\n";
	this->isempty = 0;
}

Contact::~Contact()
{
	std::cout << "Contact deleted\n";
}

void Contact::setFirstName(std::string info)
{
	this->FirstName = info;
	this->isempty = 1;
}

void Contact::setLastName(std::string info)
{
	this->LastName = info;
}

void Contact::setNickName(std::string info)
{
	this->NickName = info;
}

void Contact::setPhoneNumber(std::string info)
{
	this->PhoneNumber = info;
}

void Contact::setSecret(std::string info)
{
	this->DarkestSecret = info;
}

void printStr(std::string info)
{
	if (info.length() > 9)
	{
		for (size_t i = 0; i < 9; i++)
		{
			std::cout << info[i];
		}
		std::cout << ".|";
	}
	else
	{
		for (size_t i = 9; i >= info.length(); i--)
		{
			std::cout << " ";
		}
		std::cout << info << "|";
	}
}

void Contact::printInfo(int index)
{

	std::cout << "         " << index + 1<< "|";
	printStr(this->FirstName);
	printStr(this->LastName);
	printStr(this->NickName);
	std::cout << "\n";
}

void Contact::print_contact()
{
	std::cout << this->FirstName << "\n";
	std::cout << this->LastName << "\n";
	std::cout << this->NickName << "\n";
	std::cout << this->PhoneNumber << "\n";
	std::cout << this->DarkestSecret << "\n";
}