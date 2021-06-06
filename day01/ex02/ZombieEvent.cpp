/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:09:04 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/06 16:26:15 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->type = "walker";
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*z = new Zombie(name, this->type);

	return z;
}

Zombie	*ZombieEvent::randomChump(void)
{
	std::string	names[4] = {"Solomon", "Malachi", "Raphael", "David"};
	Zombie		*z;

	srand (time(NULL));
	z = new Zombie(names[rand() % 4], this->type);
	z->announce();
	return (z);
}

