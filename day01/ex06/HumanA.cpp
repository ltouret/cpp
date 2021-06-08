/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:50:22 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/08 14:33:44 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap)
{
	this->weap = &weap;
	this->name = name;
	return;
}

void	HumanA::attack(void) const
{
	std::cout << this->name <<" attacks with his " << this->weap->getType() << std::endl;
	return;
}
