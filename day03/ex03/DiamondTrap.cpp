/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/21 23:53:45 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name):
ClapTrap(Name + "_clap_name"),
ScavTrap(Name),
FragTrap(Name)
{
	this->Name = Name;
	this->Hit_points = this->FragTrap::Hit_points;
	this->Energy_points = this->ScavTrap::Energy_points;
	this->Attack_damage = this->FragTrap::Attack_damage;
	std::cout << "DiamondTrap " << this->Name << " is alive!" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->Name << " just died!" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "Is this DiamondTrap " << this->Name << " or is it " << ClapTrap::Name << " ?" << std::endl;
	return ;
}

/*
void	ScavTrap::attack(std::string const & target) const
{
	std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->Name << " activated gate keeper mode!" << std::endl;
	return ;
}
*/
