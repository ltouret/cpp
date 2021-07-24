/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/24 12:54:31 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassCat.hpp"

Cat::Cat(void):
Animal("Cat")
{
	std::cout << "DEFAULT constructor of Cat class called"<< std::endl;
	return ;
}

Cat::Cat(Cat const& to_cpy)
{
	std::cout << "COPY constructor of Cat class called" << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat class destructor called, bye" << std::endl;
	return ;
}

Cat		&Cat::operator=(Cat const &to_cpy)
{
	if (this != &to_cpy)
		this->type= to_cpy.type;
	std::cout << "ASSIGNATION constructor of Cat class called" << std::endl;
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << "*Miaouuuu!*" << std::endl;
	return;
}
