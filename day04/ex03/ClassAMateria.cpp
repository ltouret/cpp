/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAMateria.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 17:49:12 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassAMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "DEFAULT constructor of AMateria class called"<< std::endl;
	return ;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "Constructor of AMateria class called, type: "<< this->type << std::endl;
	return ;
}

AMateria::AMateria(AMateria const& to_cpy)
{
	std::cout << "COPY constructor of AMateria class called, type: " << to_cpy.type  << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria class destructor called, bye " << this->type << std::endl;
	return ;
}

AMateria			&AMateria::operator=(AMateria const &to_cpy)
{
	if (this != &to_cpy)
		this->type = to_cpy.type;
	std::cout << "ASSIGNATION constructor of AMateria class called, type: " << this->type << std::endl;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->type);
}

AMateria			*AMateria::clone(void) const
{
	std::cout << "this wont be printed..." << std::endl;
	return NULL;
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "this wont be printed..." << std::endl;
	return ;
}
