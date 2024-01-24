/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:51:15 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 11:45:41 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 0; i++)
	{
		this->_ideas[i] = "";
	}
	std::cout << "Brain default constructore called." << std::endl; \
};

Brain::~Brain(){ std::cout << "Brain default destructore called." << std::endl; };

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain copy constructore called." << std::endl;
	*this = cpy;
};

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Brain copy assignement called." << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = obj._ideas[i];
		}
	}
	return (*this);
};

void Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i] == "")
		{
			this->_ideas[i] = idea;
			break ;
		}
		if (i == 99)
			std::cout << "Brain is full, try ncdu or smthng" << std::endl;
	}
}

std::string Brain::getIdeas(int index)
{
	return (this->_ideas[index]);
}