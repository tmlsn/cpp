/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:32:01 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/08 16:16:31 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::deque<int> intDeq;
	std::deque<int>::iterator kt;

	for (int i = 0; i < 101; i++)
	{
		intDeq.push_back(i);
	}

	std::cout << "deque test :"<< std::endl;
	try
	{
		kt = ::easyfind(intDeq, 55);
		std::cout << "Here is the result : " << *kt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		kt = ::easyfind(intDeq, 17);
		std::cout << "Here is the result : " << *kt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		kt = ::easyfind(intDeq, 43);
		std::cout << "Here is the result : " << *kt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		kt = ::easyfind(intDeq, 110);
		std::cout << "Here is the result : " << *kt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		kt = ::easyfind(intDeq, -12);
		std::cout << "Here is the result : " << *kt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::vector<int> intBox;
	std::vector<int>::iterator it;

	std::cout << "vector test :"<< std::endl;

	for (int i = 0; i < 101; i++)
	{
		intBox.push_back(i);
	}
	
	std::vector<char> charBox;
	std::vector<char>::iterator jt;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			charBox.push_back('a');
		else
			charBox.push_back('b');
			
	}
	
	try
	{
		it = ::easyfind(intBox, 55);
		std::cout << "Here is the result : " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		it = ::easyfind(intBox, 17);
		std::cout << "Here is the result : " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		it = ::easyfind(intBox, 43);
		std::cout << "Here is the result : " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		it = ::easyfind(intBox, 110);
		std::cout << "Here is the result : " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		it = ::easyfind(intBox, -12);
		std::cout << "Here is the result : " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		jt = ::easyfind(charBox, 'a');
		std::cout << "Here is the result : " << *jt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		jt = ::easyfind(charBox, 'b');
		std::cout << "Here is the result : " << *jt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		jt = ::easyfind(charBox, 61);
		std::cout << "Here is the result : " << *jt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		jt = ::easyfind(charBox, 62);
		std::cout << "Here is the result : " << *jt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		jt = ::easyfind(charBox, 0);
		std::cout << "Here is the result : " << *jt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		jt = ::easyfind(charBox, -1);
		std::cout << "Here is the result : " << *jt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		jt = ::easyfind(charBox, 10);
		std::cout << "Here is the result : " << *jt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		jt = ::easyfind(charBox, 3);
		std::cout << "Here is the result : " << *jt << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}