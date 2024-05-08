/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:10:24 by tmalless          #+#    #+#             */
/*   Updated: 2024/05/08 13:15:58 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	_size = 0;
	tab = new T[0];	
}

template<typename T>
Array<T>::~Array()
{
	delete [] tab;	
}

template<typename T>
Array<T>::Array(unsigned int size)
{
	_size = size;
	tab = new T[size];

	for (size_t i = 0; i < size; i++)
	{
		tab[i] = 0;
	}
}

template<typename T>
Array<T>::Array(const Array &cpy)
{
	_size = cpy.size();
	tab = new T[_size];

	for (size_t i = 0; i < _size; i++)
	{
		tab[i] = cpy[i];
	}
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &obj)
{
	if (tab)
		delete [] tab;
	this->_size = obj.size();
	tab = new T[_size];

	for (size_t i = 0; i < _size; i++)
	{
		tab[i] = obj[i];
	}
	return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of bound.");
	return (tab[index]);
}

template<typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of bound.");
	return (tab[index]);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}