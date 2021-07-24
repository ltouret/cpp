/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongCat.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/24 13:18:59 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassWrongCat.hpp"

WrongCat::WrongCat(void):
WrongAnimal("WrongCat")
{
	std::cout << "DEFAULT constructor of WrongCat class called"<< std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const& to_cpy)
{
	std::cout << "COPY constructor of WrongCat class called" << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat class destructor called, bye" << std::endl;
	return ;
}

WrongCat		&WrongCat::operator=(WrongCat const &to_cpy)
{
	if (this != &to_cpy)
		this->type= to_cpy.type;
	std::cout << "ASSIGNATION constructor of WrongCat class called" << std::endl;
	return (*this);
}

void		WrongCat::makeSound(void) const
{
	std::cout << "* Wrong hidden Miaouuuu!*" << std::endl;
	return;
}
