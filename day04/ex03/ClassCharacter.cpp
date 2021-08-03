/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/03 19:40:53 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassCharacter.hpp"

Character::Character(void):name("Random")
{
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
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Character::~Character(void)
{
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
		{
			if (to_cpy.inventory[i] != NULL)
				this->inventory[i] = to_cpy.inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return this->name;
}

void				Character::equip(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break ;
		}
	}
	return ;
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->inventory[idx] != NULL)
			this->inventory[idx] = NULL;
	}
	return ;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->inventory[idx] != NULL)
			this->inventory[idx]->use(target);
	}
	return ;
}
