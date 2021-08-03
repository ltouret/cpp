/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassMateriaSource.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/03 18:19:51 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassMateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
		this->materias[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const& to_cpy)
{
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->materias[i] != NULL)
			delete (this->materias[i]);
	}
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &to_cpy)
{
	if (this != &to_cpy)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (to_cpy.materias[i] != NULL)
				this->materias[i] = to_cpy.materias[i]->clone();
		}
	}
	return (*this);
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->materias[i] != NULL && this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	}
	return (0);
}

void			MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = materia;
			break;
		}
	}
	return ;
}
