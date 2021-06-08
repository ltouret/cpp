/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:50:22 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/08 14:33:21 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	return;
}

void	HumanB::setWeapon(Weapon &weap)
{
	this->weap = &weap;
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << this->name <<" attacks with his " << this->weap->getType() << std::endl;
	return;
}
