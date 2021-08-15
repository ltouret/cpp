/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/15 20:00:01 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	Array<int>	emptyArray;
	Array<char>	array(10);
	Array<char>	cpyArray(10);

	// Fill array
	for (unsigned int i = 0; i < array.size(); i++)
		array[i] = ('0' + i);

	// Show array
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i];
	std::cout << std::endl;

	// Copy array to cpyArray
	cpyArray = array;

	// Change array
	for (unsigned int i = 0; i < array.size(); i++)
		array[i] = ('a' + i);

	// Show cpyArray
	for (unsigned int i = 0; i < cpyArray.size(); i++)
		std::cout << cpyArray[i];
	std::cout << std::endl;

	// Show array
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i];
	std::cout << std::endl;

	// Show cpyArray
	for (unsigned int i = 0; i < cpyArray.size(); i++)
		std::cout << cpyArray[i];
	std::cout << std::endl;

	// try exceptions 
	try
	{
		std::cout << emptyArray[-1];
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << array[42];
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
