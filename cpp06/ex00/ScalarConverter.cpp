/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:41:55 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/02 17:36:04 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string toConvert)
{
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
			int zboub = static_cast<int>(toConvert[0]) - 48;
			std::cout << "Char : '" << static_cast<char>(zboub) << "'" << std::endl;
			std::cout << "Int : " << zboub << std::endl;
			std::cout << "Float : " << static_cast<float>(zboub) << std::endl;
			std::cout << "Double : " << static_cast<double>(zboub) << std::endl;
			return ;
		}
	}
	if (toConvert.find_first_not_of("0123456789") != std::string::npos)
	{
		if (toConvert.find_first_not_of("0123456789") == 1)
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
			std::cout << "Float " << toConvert << std::endl;
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
		std::cout << "Int " << toConvert << std::endl;
		return ;
	}
	std::cout << "Impossible " << toConvert << std::endl;
	return ;
}