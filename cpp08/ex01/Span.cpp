/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:21:45 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/08 18:16:28 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_limit = 0;
}

Span::Span(unsigned int N) : _limit(N) {}

Span::Span(const Span &cpy)
{
	*this = cpy;	
}

Span &Span::operator=(const Span &obj)
{
	if (this == &obj)
		return (*this);
	_span = obj._span;
	_limit = obj._limit;
	return (*this);
};

Span::~Span()
{
	
};

void Span::addNumber(int N)
{
	if (_span.size() == _limit)
		throw 0;
	_span.push_back(N);
};

int	Span::shortestSpan()
{
	if (_span.size() < 2)
		throw TooSmallException();

	std::vector<int> tmp(_span);
	int span = _limit;
	std::vector<int>::iterator it;
	
	std::sort(tmp.begin(), tmp.end());
	
	for (it = tmp.begin(); it + 1 != tmp.end(); it++)
	{
		if (*(it + 1) - *it < span)
			span = *(it + 1) - *it;
	}
	return (span);
};

int	Span::longestSpan()
{
	if (_span.size() < 2)
		throw TooSmallException();
		
	std::vector<int> tmp(_span);
	
	std::sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *(tmp.begin()));
};

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (_span.size() + std::distance(start, end) > _limit)
		throw TooBigException();
	_span.insert(_span.end(), start, end);
};

const char *Span::TooBigException::what() const throw()
{
	return ("This span is already full.");
}

const char *Span::TooSmallException::what() const throw()
{
	return ("There is not enough elements in this span to give you this info.");
}