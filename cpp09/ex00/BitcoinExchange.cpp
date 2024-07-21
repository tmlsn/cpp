/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:48:37 by tmalless          #+#    #+#             */
/*   Updated: 2024/07/21 15:30:40 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::ifstream dbStreamFile;
	std::ifstream inputStreamFile;
	
	dbStreamFile.open("data.csv");
	if (dbStreamFile.is_open())
	{
		std::string buff;
		getline(dbStreamFile, buff);
		while (getline(dbStreamFile, buff))
		{
			if (!checkDatabase(buff, ','))
			{
				int i = buff.find_first_of(",");
				std::string date = buff.substr(0, i);
				std::string value = buff.substr(i + 1, buff.length() - 1);
				_database.insert(std::make_pair(date, atof(value.c_str())));
			}
			else
			{
				std::cout << "Something went wrong with the database, Exiting now !" << std::endl;
				break ;
			}
		}
		dbStreamFile.close();
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy)
{
	*this = cpy;
};

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if (this != &obj)
	{
		this->_database = obj._database;
	}
	return (*this);
};

int	BitcoinExchange::checkDatabase(std::string buff, char del)
{
/* 	if(type == 1 && buff.find_first_not_of("0123456789-,.") != std::string::npos
	|| buff.find_last_of(",") != buff.find_first_of(",")
	|| buff.find_last_of(".") != buff.find_first_of("."))
		return 1; */
	
	std::istringstream ss(buff);
	int year, month, day;
	double value;

	ss >> year;
	if (ss.peek() != '-')
		return 1;
	ss.ignore(1);
	ss >> month;
	if (ss.peek() != '-')
		return 1;
	ss.ignore(1);
	ss >> day;
	if (ss.peek() == ' ')
		ss.ignore(1);
	if (ss.peek() != del)
		return 1;
	if (ss.peek() == ' ')
		ss.ignore(1);
	ss.ignore(1);
	ss >> value;
	//ss.ignore(1);

	//std::cout << year << std::endl << month << std::endl << day << std::endl << value << std::endl;

	if (!ss.eof() || year <= 0 || month <= 0 || day <= 0 || value < 0)
		return (1);

	if (year < 2009 || year > 2022)
		return (1);
	
	if (month > 12)
		return (1);
		
	switch (month)
	{
	case 2 :
		if ((year % 4 != 0 && day > 28) || day > 29)
			return (1);
	case 4:
	case 6:
	case 9:
	case 11:
		if (day > 30)
			return 1;
	default:
		if (day > 31)
			return 1;
	}
	
	return(0);
	// if (isdigit(buff[0]) && )
}

void BitcoinExchange::doTheExchange(std::string inputFile)
{
	std::ifstream inputStreamFile;
	
	inputStreamFile.open(inputFile.c_str());
	if (inputStreamFile.is_open())
	{
		std::string buff;
		getline(inputStreamFile, buff);
		while (getline(inputStreamFile, buff))
		{
			/* remove(buff.begin(), buff.end(), ' ');
			if (buff.size() == 14)
				buff.erase(buff.end() - 2, buff.end()); */
			int i = buff.find_first_of("|");
			std::string date = buff.substr(0, i);
			if (*(date.end() - 1) == ' ')
				date.erase(date.end() - 1);
			std::string amount = buff.substr(i + 1, buff.length() - 1);
			if (*(amount.begin()) == ' ')
				amount.erase(amount.begin());
			if (std::atof(amount.c_str()) < 0)
				std::cerr << "Error: not a positive number." << std::endl;
			else if (!checkDatabase(buff, '|'))
			{
				if (std::atof(amount.c_str()) > 1000)
					std::cerr << "Error: too large a number." << std::endl;
				else
				{
					std::map<std::string, float>::iterator it = _database.lower_bound(date);
					if (it->first != date)
						it--;
					std::cout << date << " => " << amount << " = " << (it->second) * std::atof(amount.c_str()) << std::endl;
				}
			}
			else
			{
				std::cerr << "Error: input => " << date << std::endl;
				//_exiting = 1;
				//break ;
			}
		}
		inputStreamFile.close();
	}
};

/* int	BitcoinExchange::checkInputFile(std::string fileName)
{
	if(buff.find_first_not_of("0123456789-,.") != std::string::npos
	|| buff.find_last_of(",") != buff.find_first_of(",")
	|| buff.find_last_of(".") != buff.find_first_of("."))
		return 1;
	
	std::istringstream ss(buff);
	int year, month, day;
	double value;

	ss >> year;
	ss.ignore(1);
	ss >> month;
	ss.ignore(1);
	ss >> day;
	ss.ignore(1);
	ss >> value;
	//ss.ignore(1);

	std::cout << year << std::endl << month << std::endl << day << std::endl << value << std::endl;

	if (!ss.eof() || year <= 0 || month <= 0 || day <= 0 || value < 0)
		return (1);

	if (year < 2009 || year > 2022)
		return (1);
	
	if (month > 12)
		return (1);
		
	switch (month)
	{
	case 2 :
		if ((year % 4 != 0 && day > 28) || day > 29)
			return (1);
	case 4:
	case 6:
	case 9:
	case 11:
		if (day > 30)
			return 1;
	default:
		if (day > 31)
			return 1;
	}
	
	return(0);
} */

BitcoinExchange::~BitcoinExchange()
{
}