/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:20:05 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/08 14:40:25 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T container, int toFind)
{
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw std::invalid_argument("Not in container.");
	return (it);
}