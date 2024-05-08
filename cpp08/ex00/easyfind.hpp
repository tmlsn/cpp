/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:12:43 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/08 14:32:43 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

# define EASYFIND_HPP

# include <vector>
# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T container, int toFind);

# include "easyfind.tpp"

#endif