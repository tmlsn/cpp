/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:17:46 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 15:47:05 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

AMateria::AMateria(){};

AMateria::~AMateria(){};

AMateria::AMateria(std::string const & name) : _type(name){};

std::string const & AMateria::getType(void) const
{
	return (this->_type);
};

