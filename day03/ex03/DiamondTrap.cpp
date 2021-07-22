/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/22 17:39:16 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->ClapTrap::Name = "unknown_clap_name";
	this->Name = "unknown";
	this->Hit_points = this->FragTrap::Hit_points;
	this->Energy_points = this->ScavTrap::Energy_points;
	this->Attack_damage = this->FragTrap::Attack_damage;
	std::cout << "DEFAULT DiamondTrap " << this->Name << " is alive!" << std::endl;
	return ;
}

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

DiamondTrap::DiamondTrap(DiamondTrap const &to_cpy)
{
	std::cout << "COPY DiamondTrap " << to_cpy.Name << " is alive!" << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->Name << " just died!" << std::endl;
	return ;
}

DiamondTrap		&DiamondTrap::operator=(DiamondTrap const &to_cpy)
{
	if (this != &to_cpy)
	{
		this->Name = to_cpy.Name;
		this->Hit_points = to_cpy.Hit_points;
		this->Energy_points = to_cpy.Energy_points;
		this->Attack_damage = to_cpy.Attack_damage;
	}
	std::cout << "ASSIGNATION DiamondTrap " << this->Name << " is alive!" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap Name: " << this->Name << " and ClapTrap Name: " << ClapTrap::Name << std::endl;
	return ;
}
