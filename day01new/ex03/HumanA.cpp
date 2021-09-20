/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:50:22 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 20:50:35 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap) : name(name), weap(weap)
{
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::attack(void) const
{
	std::cout << this->name <<" attacks with his " << this->weap.getType() << std::endl;
	return;
}
