/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/16 23:21:38 by ltouret          ###   ########.fr       */
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
	//this->_s = new std::set<int>;
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
	//delete [] this->_s;
	return ;
}

Span			&Span::operator=(Span const &to_cpy)
{
	if (this != &to_cpy)
		this->_N = to_cpy._N;
	return (*this);
}

int				Span::getSize(void)
{
	//std::cout << this->_s.max_size() << std::endl;
	return (this->_s.size());
}

void			Span::addNumber(int num)
{
	if (this->_s.size() >= this->_N)
		return ; // exception here!
	this->_s.insert(num);
	return ;
}

int				Span::shortestSpan(void)
{
	// What in case of N < 2
	//std::set<int>::iterator it;
	//it = this->_s.begin();
	int first = *this->_s.begin();
	//std::cout << *it << std::endl; 
	//advance(it, 1);
	int second = *it;
	//std::cout << *it << std::endl; 
	return (second - first);
}
