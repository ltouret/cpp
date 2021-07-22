/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:29:17 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/22 12:31:38 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	number_one;
	ClapTrap	number_two("rena");
	ClapTrap	number_three("Maca");
	ClapTrap	number_four(number_three);
	ClapTrap	number_five;

	number_one = number_two;
	number_one.attack("Bob");
	number_one.takeDamage(300);
	number_one.takeDamage(-10);
	number_one.beRepaired(300);
	number_one.beRepaired(-10);
	return (0);
}
