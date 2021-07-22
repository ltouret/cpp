/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/22 17:00:03 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->Name = "Unknown";
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "DEFAULT FragTrap " << this->Name << " is alive!" << std::endl;
}

FragTrap::FragTrap(std::string Name):
ClapTrap(Name)
{
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap " << this->Name << " is alive!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &to_cpy)
{
	std::cout << "COPY FragTrap " << to_cpy.Name << " is alive!" << std::endl;
	if (this != &to_cpy)
		*this = to_cpy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->Name << " just died!" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &to_cpy)
{
	if (this != &to_cpy)
	{
		this->Name = to_cpy.Name;
		this->Hit_points = to_cpy.Hit_points;
		this->Energy_points = to_cpy.Energy_points;
		this->Attack_damage = to_cpy.Attack_damage;
	}
	std::cout << "ASSIGNATION FragTrap " << this->Name << " is alive!" << std::endl;
	return (*this);
}

void		FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->Name << " requested the highest of fives!" << std::endl;
	return ;
}
