/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:41:55 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/07 15:37:43 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string toConvert)
{
	std::string	toChar = "";
	long long	toInt = 0;
	float		toFloat = 0;
	double		toDouble = 0;
	
	std::string special[6] = {"-inff", "+inff", "-inf", "+inf", "nan", "nanf"};
	for (size_t i = 0; i <= special->size(); i++)
	{
		if (toConvert == special[i])
		{
			toChar = "impossible";
			toFloat = atof(toConvert.c_str());
			toDouble = static_cast<double>(toFloat);
		}
	}
	if ((toConvert.find_first_not_of("0123456789-.f") != std::string::npos
		|| (toConvert.find_first_of("f") != toConvert.size() - 1
		&& toConvert.find_first_of("f") != std::string::npos)
		|| toConvert.find_first_of(".") != toConvert.find_last_of(".")
		|| (toConvert.find_first_of("-") != toConvert.find_last_of("-")
		|| (toConvert.find_first_of("-") != std::string::npos
		&& toConvert.find_first_of("-") != 0)))
		&& toChar != "impossible"
		&& toConvert.size() != 1) 
	{	
		std::cout << "Not handled" << std::endl;
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
			toInt = static_cast<int>(toConvert[0]);
			toFloat = static_cast<float>(toConvert[0]);
			toDouble = static_cast<double>(toConvert[0]);
			std::cout << "Char" << std::endl;
		}
		else
		{
			toInt = static_cast<int>(toConvert[0]) - 48;
			toChar = "Non displayable";
			toFloat = static_cast<float>(toInt);
			toDouble = static_cast<double>(toInt);
			std::cout << "Int " << std::endl;
		}
	}
	else if (toChar != "impossible"
		&& toConvert.find_first_not_of("-0123456789") != std::string::npos )
	{
		if (toConvert[toConvert.find_last_not_of("-0123456789")] == 'f')
		{
			toFloat = atof(toConvert.c_str());
			toDouble = static_cast<double>(toFloat);
			std::cout << "Float " << std::endl;
		}
		else if (toConvert[toConvert.find_last_not_of("-0123456789")] == '.')
		{
			toDouble = atof(toConvert.c_str());
			toFloat = static_cast<float>(toDouble);
			std::cout << "Double " << std::endl;
		}
		toInt = static_cast<int>(toDouble);
	}
	else if (toChar != "impossible")
	{
		toInt = atoll(toConvert.c_str());
		toFloat = static_cast<float>(toInt);
		toDouble = static_cast<double>(toInt);
		std::cout << "Int " << std::endl;
	}
	if ((toInt < 27 || toInt > 132) && toChar != "impossible")
		toChar = "Non displayable";
	else if (toChar != "impossible")
	{
		toChar = "'";	
		toChar += static_cast<char>(toInt);
		toChar += "'";	
	}
	std::cout << "Char : " << toChar << std::endl;
	if (toChar == "impossible" || (toInt < INT_MIN || toInt > INT_MAX))
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