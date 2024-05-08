/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:46:22 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/07 18:19:36 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
T min(T &a, T &b)
{
	return (a < b) ? a : b;
}

template <typename T>
T max(T &a, T &b)
{
	return (a > b) ? a : b;
}