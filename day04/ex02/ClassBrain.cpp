/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBrain.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 13:06:26 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassBrain.hpp"

Brain::Brain(void)
{
	std::cout << "DEFAULT constructor of Brain class called"<< std::endl;
	return ;
}

Brain::Brain(Brain const& to_cpy)
{
	std::cout << "COPY constructor of Brain class called" << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain class destructor called, bye" << std::endl;
	return ;
}

Brain		&Brain::operator=(Brain const &to_cpy)
{
	if (this != &to_cpy)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = to_cpy.ideas[i];
	}
	std::cout << "ASSIGNATION constructor of Brain class called" << std::endl;
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	if (i > -1 && i < 100)
	{
		if (!this->ideas[i].empty())
			return (this->ideas[i]);
	}
	return ("None");
}

void		Brain::setIdea(int i, std::string idea)
{
	if (i > -1 && i < 100)
		this->ideas[i] = idea;
}
