/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:41:55 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/02 21:36:43 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string toConvert)
{
	std::string	toChar = "";
	int			toInt = 0;
	float		toFloat = 0;
	double		toDouble = 0;
	
	std::string special[6] = {"-inff", "+inff", "-inf", "+inf", "nan", "nanf"};
	for (size_t i = 0; i <= special->size(); i++)
	{
		if (toConvert == special[i])
		{
			std::cout <<"ZBOUB"<<std::endl;
			toChar = "impossible";
			toFloat = atof(toConvert.c_str());
			toDouble = static_cast<double>(toFloat);
		}
	}
	if ((toConvert.find_first_not_of("0123456789-.f") != std::string::npos
		|| toConvert.find_first_of("f") != toConvert.find_last_of("f")
		|| toConvert.find_first_of(".") != toConvert.find_last_of("."))
		&& toChar != "impossible") 
	{	
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : impossible" << std::endl;
		std::cout << "Double : impossible" << std::endl;
		return ;
	}
	if (toConvert.size() == 1)
	{
		if (toConvert.find_first_not_of("0123456789") != std::string::npos)
		{
			toChar = "'";
			toChar += toConvert[0];
			toChar += "'";
			std::cout << "Char" << std::endl;
			toInt = static_cast<int>(toConvert[0]);
			toFloat = static_cast<float>(toConvert[0]);
			toDouble = static_cast<double>(toConvert[0]);
		}
		else
		{
			toInt = static_cast<int>(toConvert[0]) - 48;
			toChar = "Non displayable";
			toFloat = static_cast<float>(toInt);
			toDouble = static_cast<double>(toInt);
		}
	}
	else if (toChar != "impossible"
		&& (toConvert.find_first_not_of("0123456789") != std::string::npos 
		&& (toConvert[toConvert.find_last_not_of("0123456789")] == '.'
		|| toConvert[toConvert.find_last_not_of("0123456789")] == 'f')))
	{
		if (toConvert[toConvert.find_last_not_of("0123456789")] == 'f')
		{
			toFloat = atof(toConvert.c_str());
			toDouble = static_cast<double>(toFloat);
			std::cout << "Double " << toConvert << std::endl;
		}
		else if (/* toConvert.find_first_not_of("0123456789") == toConvert.find_last_not_of("0123456789")
			&&  */toConvert[toConvert.find_last_not_of("0123456789")] == '.')
		{
			toDouble = atof(toConvert.c_str());
			toFloat = static_cast<float>(toDouble);
			std::cout << "Double " << toConvert << std::endl;
		}
		toInt = static_cast<int>(toDouble);
	}
	else if (toChar != "impossible")
	{
		toInt = atoi(toConvert.c_str());
		toFloat = static_cast<float>(toInt);
		toDouble = static_cast<double>(toInt);
		std::cout << "Int " << std::endl;
	}
	if ((toInt < 27 || toInt > 132) && toChar != "impossible")
		toChar = "Non displayable";
	std::cout << "Char : " << toChar << std::endl;
	if (toChar == "impossible")
		std::cout << "Int : impossible" << std::endl;
	else
		std::cout << "Int : " << toInt << std::endl;
	if (toFloat - static_cast<int>(toFloat) == 0)
	{
		std::cout << "Float : " << toFloat << ".0f" << std::endl;
		std::cout << "Double : " << toDouble << ".0" << std::endl;
	}
	else
	{
		std::cout << "Float : " << toFloat << "f" << std::endl;
		std::cout << "Double : " << toDouble << std::endl;		
	}
}