/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:15:12 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/05 20:10:21 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->size = n;
	std::string	names[4] = {"Solomon", "Malachi", "Raphael", "David"};
	std::string	types[4] = {"walker", "floater", "lurker", "roamer"};

	srand (time(NULL));
	this->horde = new Zombie[n];
	for (int i = 0; i < this->size; i++)
		this->horde[i].init(names[rand() % 4], types[rand() % 4]);
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->horde;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->size; i++)
		this->horde[i].announce();
	return ;
}
