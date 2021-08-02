/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 23:03:29 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassCharacter.hpp"

Character::Character(void):name("Random")
{
	std::cout << "default constructor of Character class called"<< std::endl;
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character(std::string const &name):name(name)
{
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character(Character const& to_cpy)
{
	std::cout << "COPY constructor of Character class called, name: " << to_cpy.name << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Character::~Character(void)
{
	std::cout << "Character class destructor called, bye " << this->name << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete (this->inventory[i]);
	}
	return ;
}

Character			&Character::operator=(Character const &to_cpy)
{
	if (this != &to_cpy)
	{
		this->name = to_cpy.name;
		for (size_t i = 0; i < 4; i++)
			if (this->inventory[i] != NULL)
				this->inventory[i] = to_cpy.inventory[i]->clone();
	}
	std::cout << "ASSIGNATION constructor of Character class called, name: " << this->name << std::endl;
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return this->name;
}

void				Character::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
