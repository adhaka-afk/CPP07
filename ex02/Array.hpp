/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:37:20 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/05 03:51:39 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>
#include <cstddef>

template <typename T> class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array() : _array(NULL), _size(0) {}
		Array(unsigned int n) : _array(new T[n]), _size(n) {}
		Array(const Array &src) : _array(NULL), _size(0) { *this = src; }
		~Array() { delete[] _array; }

		Array &operator=(const Array &src)
		{
			if (this != &src)
			{
				delete[] _array;
				_size = src._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = src._array[i];
			}
			return *this;
		}

		T &operator[](unsigned int i)
		{
			if (i >= _size)
				throw std::out_of_range("Index out of range");
			return _array[i];
		}

		const T &operator[](unsigned int i) const
		{
			if (i >= _size)
				throw std::out_of_range("Index out of range");
			return _array[i];
		}

		void setValue(std::size_t index, const T& value);

		std::size_t size() const { return _size; }
};

template <typename T>
void Array<T>::setValue(std::size_t index, const T& value)
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	_array[index] = value;
}

#endif
