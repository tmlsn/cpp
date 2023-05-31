/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:58:34 by tmalless          #+#    #+#             */
/*   Updated: 2023/05/04 18:16:24 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac == 1)
		return 0;
	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			std::cout << toupper(av[i][j]);
		}
	}
	return (1);
}