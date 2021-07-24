/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongAnimal.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/24 13:13:25 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassWrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "DEFAULT constructor of WrongAnimal class called"<< std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "Constructor of WrongAnimal class called, type: "<< this->type << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const& to_cpy)
{
	std::cout << "COPY constructor of WrongAnimal class called, type: " << to_cpy.type  << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal class destructor called, bye " << this->type << std::endl;
	return ;
}

WrongAnimal		&WrongAnimal::operator=(WrongAnimal const &to_cpy)
{
	if (this != &to_cpy)
	{
		this->type= to_cpy.type;
	}
	std::cout << "ASSIGNATION constructor of WrongAnimal class called, type: " << this->type << std::endl;
	return (*this);
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "*Strange wrong animal sounds*" << std::endl;
	return;
}

std::string	WrongAnimal::getType() const
{
	return type;
}
