/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:51:25 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/21 12:58:53 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>

void ft_replace(std::string *line, std::string to_r, std::string r_with)
{
	size_t start_pos;

	while((start_pos = line->find(to_r)) != std::string::npos)
	{
		line->erase(start_pos, to_r.length());
		line->insert(start_pos, r_with);
	}
}

int	main(int ac, char **av)
{
	if (ac != 4 || !av[2][0] )
	{
		std::cout << "Wrong arguments, need : FILE, STR_TO_REPLACE, STR_TO_REPLACE_WITH" << std::endl;
		return (1);
	}

	std::ifstream ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "Something went wrong opening the origin file." << std::endl;
		return (1);
	}
	std::string	ofile_name = (std::string)av[1] + ".replace";
	std::ofstream ofs;
	ofs.open(ofile_name.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Something went wrong creating the destination file." << std::endl;
		return (1);
	}
	std::string line;
	std::string	file;
	std::string to_r = av[2];
	std::string r_with = av[3];
	while (getline(ifs, line))
	{
		/* if (!std::cin.eof())
		{ */
			file.append(line);
			file.append("\n");
		/* } */
	}
	ft_replace(&file, to_r, r_with);
	ofs << file;
	ofs.close();
	ifs.close();
	return (0);
}