/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAMateria.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/03 18:08:09 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassAMateria.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	return ;
}

AMateria::AMateria(AMateria const& to_cpy)
{
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria			&AMateria::operator=(AMateria const &to_cpy)
{
	if (this != &to_cpy)
		this->type = to_cpy.type;
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

void				AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << "this wont be printed..." << std::endl;
	return ;
}
