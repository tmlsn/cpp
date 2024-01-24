/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:26:48 by tmalless          #+#    #+#             */
/*   Updated: 2023/11/24 11:56:34 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	
	std::cout << std::endl;
	std::cout << std::endl;

	// Proof of deep copy
	Dog medor;
	Cat fifi;

	std::string ar1[] = {"A","B", "C", "D", "E", "F", "G", "H"};
	std::string ar2[] = {"z","y", "x", "w", "v", "u", "t", "s"};

	for (size_t i = 0; i < 8; i++)
	{
		medor.getBrain()->setIdeas(ar1[i]);
	}

	std::cout << std::endl << "creating copies" << std::endl;
	Dog medor_copy(medor);

	std::cout << std::endl << "comparing" << std::endl;
	medor.compareTo(medor_copy);
	
	std::cout << std::endl;

    for (size_t i = 0; i < 8; i++)
	{
		medor_copy.getBrain()->setIdeas(ar2[i]);
	}

	std::cout << std::endl << "comparing" << std::endl;
	medor.compareTo(medor_copy);
	
	std::cout << std::endl;

	// Array of animals
	const Animal	*(animal_array[4]);
	std::cout << std::endl;
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

	
	return(0);
}