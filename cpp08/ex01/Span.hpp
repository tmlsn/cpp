/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:21:35 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/08 18:19:01 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdlib.h>

class Span
{
private:
	unsigned int		_limit;
	std::vector<int>	_span;
	Span();
public:
	Span(unsigned int N);
	Span(const Span &cpy);
	Span &operator=(const Span &obj);
	~Span();

	void addNumber(int N);
	int	shortestSpan();
	int	longestSpan();

	void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);

	class TooBigException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};
	
	class TooSmallException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};
};
