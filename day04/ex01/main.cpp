/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:29:17 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 14:11:39 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassCat.hpp"
#include "ClassDog.hpp"

int	main(void)
{
	Animal* array[10];
	for (int i = 0; i < 5; i++)
		array[i] = new Dog;
	for (int i = 5; i < 10; i++)
		array[i] = new Cat;
	for (int i = 0; i < 10; i++)
		delete array[i];

	std::cout << std::endl << "See what happens in a cat brain :"<<std::endl;
	Cat* test = new Cat;
	test->getBrain()->setIdea(0, "Eat");
	test->getBrain()->setIdea(1, "Poop");
	test->getBrain()->setIdea(2, "Sleep");
	test->getBrain()->setIdea(3, "Repeat");

	for (int i = 0; i < 4; i++)
		std::cout << test->getBrain()->getIdea(i) << std::endl;

	Cat* copy = new Cat(*test);
	delete test;

	std::cout << "the original is deleted, see the ideas of the copy :" << std::endl;

	for (int i = 0; i < 4; i++)
		std::cout << copy->getBrain()->getIdea(i) << std::endl;

	copy->getBrain()->setIdea(0, "Read");
	std::cout << copy->getBrain()->getIdea(0) << std::endl;

	delete copy;
	return (0);
}
