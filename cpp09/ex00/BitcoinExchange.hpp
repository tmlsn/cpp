/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:48:40 by tmalless          #+#    #+#             */
/*   Updated: 2024/06/17 18:48:49 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stdlib.h>
# include <iostream>
# include <map>
# include <fstream>

class BitcoinExchange
{
private:
	std::map<std::string, float>	_database;
	std::string						_inputFile;
	int								_exiting;
public:
	BitcoinExchange();
	~BitcoinExchange();

	void doTheExchange(std::string inputFile);

	int checkDatabase(std::string buff);
	int	checkInputFile(std::string fileName);

	std::map<std::string, float>	createDatabase;
};


