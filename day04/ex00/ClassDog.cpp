/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/24 12:54:18 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassDog.hpp"

Dog::Dog(void):
Animal("Dog")
{
	std::cout << "DEFAULT constructor of Dog class called"<< std::endl;
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
	return ;
}

Dog		&Dog::operator=(Dog const &to_cpy)
{
	if (this != &to_cpy)
		this->type= to_cpy.type;
	std::cout << "ASSIGNATION constructor of Dog class called" << std::endl;
	return (*this);
}

void		Dog::makeSound(void) const
{
	std::cout << "*Wuf wuf!*" << std::endl;
	return;
}
