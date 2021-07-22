/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/22 15:52:39 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->Name = "Unknown";
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	std::cout << "DEFAULT ClapTrap " << this->Name << " is alive!" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	this->Name = Name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	std::cout << "ClapTrap " << this->Name << " is alive!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& to_cpy)
{
	std::cout << "COPY ClapTrap " << to_cpy.Name << " is alive!" << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->Name << " just died!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &to_cpy)
{
	if (this != &to_cpy)
	{
		this->Name = to_cpy.Name;
		this->Hit_points = to_cpy.Hit_points;
		this->Energy_points = to_cpy.Energy_points;
		this->Attack_damage = to_cpy.Attack_damage;
	}
	std::cout << "ASSIGNATION ClapTrap " << this->Name << " is alive!" << std::endl;
	return (*this);
}

void		ClapTrap::attack(std::string const & target) const
{
	std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int	hp_lost;

	hp_lost = amount;
	if (hp_lost < 0)
		hp_lost = 0;
	std::cout << "ClapTrap " << this->Name << " looses " << hp_lost << " hit points!" << std::endl;
	this->Hit_points -= hp_lost;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	int	hp_rep;

	hp_rep = amount;
	if (this->Hit_points + hp_rep > 10 || hp_rep < 0)
		hp_rep = 0;
	std::cout << "ClapTrap " << this->Name << " repaired himself for " << hp_rep << " hit points!" << std::endl;
	this->Hit_points += hp_rep;
}
