/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:46:18 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/05 20:11:34 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde horde(8);
	std::cout << "Asking the horde to introduce itself..." << std::endl;
	horde.announce();
	std::cout << std::endl << "Bye zombies ..." << std::endl;
	return (0);
}
