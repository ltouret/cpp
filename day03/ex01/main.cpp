/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:29:17 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/21 18:04:42 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	*susan;
	ClapTrap	kton("num1");

	susan = new ClapTrap("num2");
	susan->attack("Mary");
	susan->takeDamage(300);
	susan->takeDamage(-10);
	delete(susan);

	kton.attack("Rannar");
	kton.beRepaired(300);
	kton.beRepaired(-10);

	ScavTrap	*number_one;
	ScavTrap	number_two("beta");

	number_one = new ScavTrap("alpha");
	number_one->attack("Bob");
	number_one->takeDamage(300);
	number_one->takeDamage(-10);
	delete(number_one);

	number_two.guardGate();
	number_two.attack("Bob");
	number_two.beRepaired(300);
	number_two.beRepaired(-10);
	return (0);
}
