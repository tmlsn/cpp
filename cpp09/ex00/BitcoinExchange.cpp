/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:48:37 by tmalless          #+#    #+#             */
/*   Updated: 2024/06/17 18:51:12 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::ifstream dbStreamFile;
	
	dbStreamFile.open("data.csv");
	if (dbStreamFile.is_open())
	{
		_exiting = 0;
		std::string buff;
		while (getline(dbStreamFile, buff))
		{
			if (!checkDatabase(buff))
			{
				int i = buff.find_first_of(",");
				std::string date = buff.substr(0, i);
				std::string value = buff.substr(i + 1, buff.length() - 1);
				_database.insert(std::make_pair(date, atof(value.c_str())));
			}
			else
			{
				std::cout << "Something went wrong with the database, Exiting now !" << std::endl;
				_exiting = 1;
				break ;
			}
		}
		dbStreamFile.close();
	}
}

int	checkDatabase(std::string buff)
{
	
}

BitcoinExchange::~BitcoinExchange()
{
}