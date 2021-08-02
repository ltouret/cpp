/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 12:19:52 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassAnimal.hpp"

Animal::Animal(void)
{
	std::cout << "DEFAULT constructor of Animal class called"<< std::endl;
	return ;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Constructor of Animal class called, type: "<< this->type << std::endl;
	return ;
}

Animal::Animal(Animal const& to_cpy)
{
	std::cout << "COPY constructor of Animal class called, type: " << to_cpy.type  << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal class destructor called, bye " << this->type << std::endl;
	return ;
}

Animal		&Animal::operator=(Animal const &to_cpy)
{
	if (this != &to_cpy)
		this->type = to_cpy.type;
	std::cout << "ASSIGNATION constructor of Animal class called, type: " << this->type << std::endl;
	return (*this);
}

void		Animal::makeSound(void) const
{
	std::cout << "*Bizarre animal sounds*" << std::endl;
	return;
}

std::string	Animal::getType() const
{
	return type;
}
