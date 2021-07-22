/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:29:17 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/22 17:30:39 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	*susan;
	ClapTrap	kton("num1");

	susan = new ClapTrap("num2");
	std::cout << std::endl;
	susan->attack("Mary");
	susan->takeDamage(300);
	susan->takeDamage(-10);
	delete(susan);
	std::cout << std::endl;

	kton.attack("Rannar");
	kton.beRepaired(300);
	kton.beRepaired(-10);
	std::cout << std::endl;

	ScavTrap	*number_one;
	ScavTrap	number_two("alpha");

	number_one = new ScavTrap("beta");
	std::cout << std::endl;
	number_one->attack("Bob");
	number_one->takeDamage(300);
	number_one->takeDamage(-10);
	number_one->guardGate();
	delete(number_one);
	std::cout << std::endl;

	number_two.attack("Bob");
	number_two.beRepaired(300);
	number_two.beRepaired(-10);
	number_two.guardGate();
	std::cout << std::endl;

	FragTrap	*heapFrag;
	FragTrap	stackFrag("Jose");

	heapFrag = new FragTrap("Mario");
	std::cout << std::endl;
	heapFrag->attack("Braun");
	heapFrag->takeDamage(300);
	heapFrag->takeDamage(-10);
	heapFrag->highFivesGuys();
	delete(heapFrag);
	std::cout << std::endl;

	stackFrag.attack("Rannar");
	stackFrag.beRepaired(300);
	stackFrag.beRepaired(-10);
	stackFrag.highFivesGuys();
	std::cout << std::endl;

	DiamondTrap	*heapDia;
	DiamondTrap	stackDia("Ocean");
	DiamondTrap	who;

	heapDia= new DiamondTrap("Sea");
	std::cout << std::endl;
	heapDia->attack("Sapo");
	heapDia->takeDamage(300);
	heapDia->takeDamage(-10);
	heapDia->guardGate();
	heapDia->highFivesGuys();
	heapDia->whoAmI();
	delete(heapDia);
	std::cout << std::endl;

	stackDia.attack("Rana");
	stackDia.beRepaired(300);
	stackDia.beRepaired(-10);
	stackDia.guardGate();
	stackDia.highFivesGuys();
	stackDia.whoAmI();
	who.whoAmI();
	std::cout << std::endl;
	return (0);
}
