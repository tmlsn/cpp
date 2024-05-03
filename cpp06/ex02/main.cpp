/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:19:56 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/03 16:55:21 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

int main(void)
{
	srand(time(NULL));
	Base *test1 = generate();
	Base *test2 = generate();
	Base *test3 = generate();
	Base *test4 = generate();
	Base *test5 = generate();

	std::cout << "test 1 : " << std::endl;

	std::cout << "With ptr : " << std::endl;
	identify(test1);

	std::cout << "With ref : " << std::endl;
	identify(*test1);

	std::cout << "test 2 : " << std::endl;

	std::cout << "With ptr : " << std::endl;
	identify(test2);

	std::cout << "With ref : " << std::endl;
	identify(*test2);

	std::cout << "test 3 : " << std::endl;

	std::cout << "With ptr : " << std::endl;
	identify(test3);

	std::cout << "With ref : " << std::endl;
	identify(*test3);

	std::cout << "test 4 : " << std::endl;

	std::cout << "With ptr : " << std::endl;
	identify(test4);

	std::cout << "With ref : " << std::endl;
	identify(*test4);

	std::cout << "test 5 : " << std::endl;

	std::cout << "With ptr : " << std::endl;
	identify(test5);

	std::cout << "With ref : " << std::endl;
	identify(*test5);

	return (0);
}