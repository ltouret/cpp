/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:29:17 by ltouret           #+#    #+#             */
/*   Updated: 2021/07/21 11:11:52 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap *number_one;

	number_one = new ClapTrap("num1");
	number_one->attack("Bob");
	number_one->takeDamage(300);
	number_one->takeDamage(-10);
	number_one->beRepaired(300);
	number_one->beRepaired(-10);
	delete(number_one);
	return (0);
}
