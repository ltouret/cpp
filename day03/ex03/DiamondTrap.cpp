/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/22 00:34:45 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name):
ClapTrap(Name),
ScavTrap(Name),
FragTrap(Name)
{
	this->ClapTrap::Name += "_clap_name";
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
	std::cout << "DiamondTrap Name: " << this->Name << " and ClapTrap Name: " << ClapTrap::Name << std::endl;
	return ;
}
