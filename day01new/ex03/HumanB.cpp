/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:50:22 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 21:10:42 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weap(NULL)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::setWeapon(Weapon &weap)
{
	this->weap = &weap;
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << this->name <<" attacks with his ";
	if (this->weap != NULL)
		std::cout << this->weap->getType() << std::endl;
	else
		std::cout << "bare hands" << std::endl;
	return;
}
