/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:34:46 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 21:06:52 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string	&Weapon::getType(void) const
{
	return (this->type);
}

void				Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}
