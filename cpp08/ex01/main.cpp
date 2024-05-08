/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:13:45 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/08 18:23:32 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	srand(time(0));
	Span sp = Span(110000);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		for (int i = 0; i < 100000; i++)
		{
			int l = rand();
			sp.addNumber(l % 100000);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try {
        Span ranged = Span(210000);
        std::vector<int> vector;
        
        for (int i = 0; i <= 200000; i++)
        {
            vector.push_back(i);
        }
        
        std::vector<int>::iterator s = vector.begin();
        std::vector<int>::iterator e = vector.end() - 1;
        std::advance(s, 0);
        //std::advance(e, 200000); 
        ranged.addRange(s, e);
        std::cout << ranged.shortestSpan() << std::endl;
        std::cout << ranged.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
	return 0;
}