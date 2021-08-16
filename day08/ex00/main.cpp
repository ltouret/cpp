/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/16 11:50:03 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int		main(void)
{
	std::cout << "** Int Vector **" << std::endl;

	std::vector<int> intVector;
	for (int i = 0; i <= 40; i++)
		intVector.push_back(i);

	try
	{
		std::cout << easyfind(intVector, 25) << std::endl;
		std::cout << easyfind(intVector, 40) << std::endl;
		std::cout << easyfind(intVector, 50) << std::endl;
	}
	catch (std::exception & exception)
	{
		std::cout << exception.what() << std::endl;
	}

	std::cout << "** Int List **" << std::endl;

	std::list<int> intList;
	for (int i = 0; i <= 40; i++)
		intList.push_back(i);

	try
	{
		std::cout << easyfind(intList, 25) << std::endl;
		std::cout << easyfind(intList, 40) << std::endl;
		std::cout << easyfind(intList, 50) << std::endl;
	}
	catch (std::exception & exception)
	{
		std::cout << exception.what() << std::endl;
	}
	return (0);
}
