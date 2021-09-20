/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:46:18 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 19:47:58 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int		main(void)
{
	int		N = 5;
	Zombie*	z = zombieHorde(N, "Michael Jackson");
	Zombie*	nope = zombieHorde(0, "Nope");
	Zombie*	moreNope = zombieHorde(-10, "Even more nope");
	(void) nope;
	(void) moreNope;

	std::cout << "Thriller!!!" << std::endl;
	for (int i = 0; i < N; ++i)
		z[i].announce();
	std::cout << "Cause this is thriller, thriller night..." << std::endl;

	delete [] z;
	return (0);
}
