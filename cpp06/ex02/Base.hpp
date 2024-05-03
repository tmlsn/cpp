/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:47:14 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/03 16:52:30 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP

# define BASE_HPP

# include <iostream>
# include <stdlib.h>

class Base
{
	public:
		virtual ~Base();
};

#endif

Base * generate(void);

void identify(Base* p);

void identify(Base& p);

Base* makeA(void);

Base* makeB(void);

Base* makeC(void);
