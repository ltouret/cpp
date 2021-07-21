/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/21 18:03:53 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
	this->Name = Name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	std::cout << "ClapTrap " << this->Name << " is alive!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->Name << " just died!" << std::endl;
	return ;
}

void	ClapTrap::attack(std::string const & target) const
{
	std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	hp_lost;

	hp_lost = amount;
	if (hp_lost < 0)
		hp_lost = 0;
	std::cout << "ClapTrap " << this->Name << " looses " << hp_lost << " hit points!" << std::endl;
	this->Hit_points -= hp_lost;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int	hp_rep;

	hp_rep = amount;
	if (this->Hit_points + hp_rep > 10 || hp_rep < 0)
		hp_rep = 0;
	std::cout << "ClapTrap " << this->Name << " repaired himself for " << hp_rep << " hit points!" << std::endl;
	this->Hit_points += hp_rep;
	return ;
}
