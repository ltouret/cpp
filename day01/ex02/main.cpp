/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:25:52 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/05 19:08:09 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent	event;
	Zombie		*heap;
	Zombie		stack("Florida man", "roamer");

	std::cout << "Asking zombie on the stack to introduce himself ..." << std::endl;
	stack.announce();

	std::cout << std::endl << "Creating new zombie of type lurker with newZombie" << std::endl;
	event.setZombieType("lurker");
	heap = event.newZombie("Allen");
	std::cout << "Asking zombie on the heap to introduce himself ..." << std::endl;
	heap->announce();
	std::cout << "Killing zombie on the heap ..." << std::endl;
	delete(heap);

	std::cout << std::endl << "Creating new zombie of type floater with randomChump" << std::endl;
	event.setZombieType("floater");
	heap = event.randomChump();
	std::cout << "Killing zombie on the heap ..." << std::endl;
	delete(heap);

	std::cout << std::endl << "Bye zombie on the stack ..." << std::endl;
	return 0;
}
