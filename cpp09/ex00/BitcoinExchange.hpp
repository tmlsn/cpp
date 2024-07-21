/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:48:40 by tmalless          #+#    #+#             */
/*   Updated: 2024/07/21 15:29:47 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stdlib.h>
# include <iostream>
# include <algorithm>
# include <map>
# include <fstream>
# include <sstream>
# include <string>


class BitcoinExchange
{
private:
	std::map<std::string, float>	_database;
/* 	std::string						_inputFile;
	int								_exiting; */
public:
	BitcoinExchange();
	~BitcoinExchange();

	BitcoinExchange(const BitcoinExchange &cpy);
	BitcoinExchange &operator=(const BitcoinExchange &obj);

	void doTheExchange(std::string inputFile);

	int checkDatabase(std::string buff, char del);
	//int	checkInputFile(std::string fileName);

	std::map<std::string, float>	createDatabase;
};


