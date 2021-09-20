/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:15:12 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 19:35:15 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->name = "Unknown";
	std::cout << this->name << " is alive!" << std::endl;
	return ;
}
Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << " is alive!" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " died (again)!" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
	return ;
}
