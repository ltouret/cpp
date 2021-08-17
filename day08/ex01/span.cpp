/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/17 18:03:57 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span(unsigned int N):
_N(N)
{
	return ;
}

Span::Span(Span const& to_cpy)
{
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span			&Span::operator=(Span const &to_cpy)
{
	if (this != &to_cpy)
	{
		this->_V = to_cpy._V;
		this->_N = to_cpy._N;
	}
	return (*this);
}

void			Span::addNumber(int num)
{
	if (this->_V.size() >= this->_N)
		throw (tooManyNumbers());
	this->_V.push_back(num);
	return ;
}

int				Span::shortestSpan(void)
{
	if (this->_V.size() < 2)
		throw (noSpanFound());

	std::sort(this->_V.begin(), this->_V.end());
	int		min = this->_V[0];
	int		max = this->_V[1];
	return (max - min);
}

int				Span::longestSpan(void)
{
	if (this->_V.size() < 2)
		throw (noSpanFound());

	int		min = *std::min_element(this->_V.begin(), this->_V.end());
	int		max = *std::max_element(this->_V.begin(), this->_V.end());
	return (max - min);
}

void			Span::rangeV(unsigned int N)
{
	srand(time(NULL));

	for (unsigned int i = 0; i < N; i++)
		this->addNumber(rand() % 50);
	return ;
}

void			Span::show(void)
{
	for (std::vector<int>::const_iterator i = this->_V.begin(); i != this->_V.end(); ++i)
		std::cout << *i << " ";
	std::cout << std::endl;
	return ;
}
