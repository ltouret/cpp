/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/15 19:56:57 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	unsigned int		_size;
	T			*_array;

public:
	Array(void): _size(0), _array(new T[0]) {}
	Array(unsigned int size): _size(size), _array(new T[size]) {}

	Array(Array const &to_cpy)
	{
		*this = to_cpy;
		return ;
	}

	~Array(void)
	{
		if (this->_array)
			delete[] _array;
		return ;
	}

	Array			&operator=(Array const &to_cpy)
	{
		if (this != &to_cpy)
		{
			if (this->_array)
				delete[] _array;
			this->_size = to_cpy._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = to_cpy._array[i];
		}
		return (*this);
	}

	T			&operator[](unsigned int i)
	{
		if (i >= this->_size)
			throw Array::IndexOutRangeException();
		return (this->_array[i]);
	}

	unsigned int		size(void) const
	{
		return (this->_size);
	}

	class IndexOutRangeException : public std::exception
	{
		virtual const char* what() const throw()
		{
      			return ("Error: index out of range");
		}
	};
};

#endif
