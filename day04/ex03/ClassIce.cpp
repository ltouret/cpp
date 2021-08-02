/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassIce.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 23:01:33 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassIce.hpp"

Ice::Ice(void):AMateria("ice")
{
	std::cout << "DEFAULT constructor of Ice class called"<< std::endl;
	return ;
}

Ice::Ice(Ice const& to_cpy)
{
	std::cout << "COPY constructor of Ice class called, type: " << to_cpy.type  << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Ice class destructor called, bye " << this->type << std::endl;
	return ;
}

Ice			&Ice::operator=(Ice const &to_cpy)
{
	if (this != &to_cpy)
		this->type = to_cpy.type;
	std::cout << "ASSIGNATION constructor of Ice class called, type: " << this->type << std::endl;
	return (*this);
}

Ice			*Ice::clone(void) const
{
	Ice*	new_cure = new Ice();

	return (new_cure);
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
