/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:59:17 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/03 12:13:07 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

Base* makeA(void)
{
	return (new A);
}

Base* makeB(void)
{
	return (new B);
}

Base* makeC(void)
{
	return (new C);
}

Base* generate(void)
{
	Base* (*func[3])()= {makeA, makeB, makeC};
	srand(time(NULL));
	return(func[rand() % 3]());
}