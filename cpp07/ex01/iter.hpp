/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:49:55 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/07 19:05:52 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

template <typename T>
void iter(T *array, size_t size, void(*func)(const T&))
{
	if (array)
	{
		for (size_t i = 0; i < size; i++)
		{
			func(array[i]);
		}
	}
}

template <typename T>
void print(const T &elem)
{
	std::cout << elem << std::endl;
}