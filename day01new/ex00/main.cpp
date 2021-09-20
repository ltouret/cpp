/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:25:52 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 19:14:19 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int		main(void)
{

	Zombie*	ben;

	randomChump("Bob - stack zombie");

	ben = newZombie("Ben - heap zombie");
	ben->announce();
	delete ben;

	return (0);
}
