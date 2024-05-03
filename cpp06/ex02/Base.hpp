/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:47:14 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/03 12:10:14 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Base
{
public:
	virtual ~Base() = 0;
};

Base * generate(void);

void identify(Base* p);

void identify(Base& p);

Base* makeA(void);

Base* makeB(void);

Base* makeC(void);