/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:53:43 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 15:59:16 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

Character::Character(){};

Character::Character(std::string name) : _name(name) {};

std::string Character::getName(void){ return (this->_name); };

Character::~Character(){};