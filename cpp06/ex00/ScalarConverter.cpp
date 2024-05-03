/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:41:55 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/02 18:48:21 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string toConvert)
{
	int		toInt;
	//double	toDouble;
	float	toFloat;
	
	std::string special[5] = {"-inff", "+inff", "-inf", "+inf", "nan"};
	if (toConvert.size() == 1)
	{
		if (toConvert.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "Char : '" << toConvert << "'" << std::endl;
			std::cout << "Int : " << static_cast<int>(toConvert[0]) << std::endl;
			std::cout << "Float : " << static_cast<float>(toConvert[0]) << std::endl;
			std::cout << "Double : " << static_cast<double>(toConvert[0]) << std::endl;
			return ;
		}
		else
		{
			toInt = static_cast<int>(toConvert[0]) - 48;
			std::cout << "Char : '" << static_cast<char>(toInt) << "'" << std::endl;
			std::cout << "Int : " << toInt << std::endl;
			std::cout << "Float : " << static_cast<float>(toInt) << std::endl;
			std::cout << "Double : " << static_cast<double>(toInt) << std::endl;
			return ;
		}
	}
	if (toConvert.find_first_not_of("0123456789") != std::string::npos)
	{
		if (toConvert.find_first_not_of("0123456789") == 0)
		{
			for (size_t i = 0; i < special->size(); i++)
			{
				if (toConvert == special[i])
				{
					std::cout << "special "<< special[i] << std::endl;
					return ;
				}
			}
		}
		if ((toConvert.find_first_not_of("0123456789") == toConvert.length() - 1 
			&& toConvert[toConvert.find_first_not_of("0123456789")] == 'f')
			|| (toConvert[toConvert.find_first_not_of("0123456789")] == '.'
				&& toConvert[toConvert.find_last_not_of("0123456789")] == 'f'))
		{
			toFloat = atof(toConvert.c_str());
			std::cout << "Char : '" << static_cast<char>(toFloat) << "'" << std::endl;
			std::cout << "Int : " << static_cast<int>(toFloat) << std::endl;
			std::cout << "Float : " << toFloat << std::endl;
			std::cout << "Double : " << static_cast<double>(toFloat) << std::endl;
			return ;
		}
		if (toConvert.find_first_not_of("0123456789") == toConvert.find_last_not_of("0123456789")
			&& toConvert[toConvert.find_first_not_of("0123456789")] == '.')
		{
			std::cout << "Double " << toConvert << std::endl;
			return ;
		}
	}
	else
	{
		toInt = atoi(toConvert.c_str());
		if (toInt > 31 && toInt < 127)
			std::cout << "Char : '" << static_cast<char>(toInt) << "'" << std::endl;
		else	
			std::cout << "Char : Impossible" << std::endl;
		std::cout << "Int : " << toInt << std::endl;
		std::cout << "Float : " << static_cast<float>(toInt) << std::endl;
		std::cout << "Double : " << static_cast<double>(toInt) << std::endl;
		return ;
	}
	std::cout << "Impossible " << toConvert << std::endl;
	return ;
}