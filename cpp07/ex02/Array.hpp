/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:20:29 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/08 13:12:35 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

template <typename T>
class Array
{
	private:
		T 				*tab;
		unsigned int	_size;
		/* data */
	public:
		Array();
		Array(unsigned int size);
		Array(const Array &cpy);
		Array &operator=(const Array &obj);
		~Array();

		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;


		unsigned int size() const;
};

/* Array::Array()
{
}

Array::~Array()
{
} */

#include "Array.tpp"

#endif
