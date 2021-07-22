/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/22 17:03:52 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->Name = "Unknown";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "DEFAULT ScavTrap" << this->Name << " is alive!" << std::endl;
}

ScavTrap::ScavTrap(std::string Name):
ClapTrap(Name)
{
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap " << this->Name << " is alive!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &to_cpy)
{
	std::cout << "COPY ScavTrap " << to_cpy.Name << " is alive!" << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->Name << " just died!" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &to_cpy)
{
	if (this != &to_cpy)
	{
		this->Name = to_cpy.Name;
		this->Hit_points = to_cpy.Hit_points;
		this->Energy_points = to_cpy.Energy_points;
		this->Attack_damage = to_cpy.Attack_damage;
	}
	std::cout << "ASSIGNATION ScavTrap " << this->Name << " is alive!" << std::endl;
	return (*this);
}

void		ScavTrap::attack(std::string const & target) const
{
	std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
	return ;
}

void		ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->Name << " activated gate keeper mode!" << std::endl;
	return ;
}
