/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:59:17 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/03 16:55:13 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base::~Base(){};

Base* makeA(void)
{
	std::cout << "A created" << std::endl;
	return (new A());
}

Base* makeB(void)
{
	std::cout << "B created" << std::endl;
	return (new B());
}

Base* makeC(void)
{
	std::cout << "C created" << std::endl;
	return (new C());
}

Base* generate(void)
{
	Base* (*func[3])()= {makeA, makeB, makeC};
	return(func[rand() % 3]());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "It's a A !" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "It's a B !" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "It's a C !" << std::endl;
	else
		std::cout << "Houston we have a problem..." << std::endl;
};

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "It's a A !" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "It's a B !" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "It's a C !" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Houston we have a problem..." << std::endl;
			}
			
		}
		
	}
	
};