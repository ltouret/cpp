/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 13:56:21 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassDog.hpp"

Dog::Dog(void):
Animal("Dog")
{
	std::cout << "DEFAULT constructor of Dog class called"<< std::endl;
	this->brain = new Brain();
	return ;
}

Dog::Dog(Dog const& to_cpy)
{
	std::cout << "COPY constructor of Dog class called" << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog class destructor called, bye" << std::endl;
	delete (this->brain);
	return ;
}

Dog		&Dog::operator=(Dog const &to_cpy)
{
	if (this != &to_cpy)
	{
		this->type= to_cpy.type;
		this->brain =  new Brain(*to_cpy.brain);
	}
	std::cout << "ASSIGNATION constructor of Dog class called" << std::endl;
	return (*this);
}

void		Dog::makeSound(void) const
{
	std::cout << "*Wuf wuf!*" << std::endl;
	return;
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}
