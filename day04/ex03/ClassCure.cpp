/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCure.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 23:01:05 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassCure.hpp"

Cure::Cure(void):AMateria("cure")
{
	std::cout << "DEFAULT constructor of Cure class called"<< std::endl;
	return ;
}

Cure::Cure(Cure const& to_cpy)
{
	std::cout << "COPY constructor of Cure class called, type: " << to_cpy.type  << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure class destructor called, bye " << this->type << std::endl;
	return ;
}

Cure			&Cure::operator=(Cure const &to_cpy)
{
	if (this != &to_cpy)
		this->type = to_cpy.type;
	std::cout << "ASSIGNATION constructor of Cure class called, type: " << this->type << std::endl;
	return (*this);
}

Cure			*Cure::clone(void) const
{
	Cure*	new_cure = new Cure();

	return (new_cure);
}

void				Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
