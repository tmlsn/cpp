/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:51:23 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/15 16:55:44 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stack>
# include <list>
# include <stdlib.h>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	MutantStack(){};
	~MutantStack(){};

	MutantStack(MutantStack &cpy)
	{
		*this = cpy;
	}

	MutantStack &operator=(MutantStack &obj)
	{
		if (this != obj)
		{
			std::stack<T>::operator=(obj);
		}
		return (*this);
	}

	iterator	begin(void)
	{
		return (this->c.begin());
	}
	
	iterator	end(void)
	{
		return (this->c.end());
	}
	
	const_iterator	begin(void) const
	{
		return (this->c.begin());
	}
	
	const_iterator	end(void) const
	{
		return (this->c.end());
	}
};
