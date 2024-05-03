/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 00:20:02 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/03 00:46:21 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data		*in = new Data;
	uintptr_t	between;

	in->str = "in";
	
	std::cout << "in address : " << &in << ", str in data : " << in->str << std::endl;

	between = Serializer::serialize(in);
	
	std::cout << "between address : " << &between << std::endl;

	Data *out = Serializer::deserialize(between);

	std::cout << "out address : " << &out << ", str in data : " << out->str << std::endl;

	out->str = "out";

	std::cout << "out address : " << &out << ", str in data : " << out->str << std::endl;
	std::cout << "in address : " << &in << ", str in data : " << in->str << std::endl;
	delete in;
	return (0);
};