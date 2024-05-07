/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 00:20:02 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/03 18:58:51 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	{
		Data		*in = new Data;
		uintptr_t	between;

		in->str = "in";
		
		std::cout << "in address : " << reinterpret_cast<void*>(in) << ", str in data : " << in->str << std::endl;

		between = Serializer::serialize(in);
		
		std::cout << "between address : " << reinterpret_cast<void*>(between) << std::endl;

		Data *out = Serializer::deserialize(between);

		std::cout << "out address : " << reinterpret_cast<void*>(out) << ", str in data : " << out->str << std::endl;

		out->str = "out";

		std::cout << "out address : " << reinterpret_cast<void*>(out) << ", str in data : " << out->str << std::endl;
		std::cout << "in address : " << reinterpret_cast<void*>(in) << ", str in data : " << in->str << std::endl;
		delete in;
	}
	{
		Data		*in = new Data;
		uintptr_t	between;

		in->str = "in";
		
		std::cout << "in address : " << in << ", str in data : " << in->str << std::endl;

		between = Serializer::serialize(in);
		
		std::cout << "between address : " << std::hex << between << std::endl;

		Data *out = Serializer::deserialize(between);

		std::cout << "out address : " << out << ", str in data : " << out->str << std::endl;

		out->str = "out";

		std::cout << "out address : " << out << ", str in data : " << out->str << std::endl;
		std::cout << "in address : " << in << ", str in data : " << in->str << std::endl;
		delete in;
	}
	return (0);
};

/* #include "Serializer.hpp"

int main(void)
{
    Data* salut = new Data;
    salut->str = "SALUUUUUUT";
    
    std::cout << "Printons la data du pointeur de base : " << salut->str << std::endl;
    std::cout << "Adresse de cette data : " << salut << std::endl;

    uintptr_t rawSalut = Serializer::serialize(salut);
    
    std::cout << "Adresse de la var uintptr suite a un serialize : " << rawSalut << std::endl;
    std::cout << "Maintenant, recuperons le pointeur d'origine grace a deserialize" << std::endl;

    Data* aurevoir = Serializer::deserialize(rawSalut);
    std::cout << "Printons la data du deserialized ptr : " << aurevoir->str << std::endl;
    std::cout << "Adresse de cette data : " << aurevoir << std::endl;
    
    delete salut;
    return (0);
} */