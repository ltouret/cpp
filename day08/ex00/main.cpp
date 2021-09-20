/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/09/06 12:55:08 by ltouret          ###   ########.fr       */
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

	std::list<int> intLst;
	for (int i = 0; i <= 40; i++)
		intLst.push_back(i);

	try
	{
		std::cout << easyfind(intLst, 25) << std::endl;
		std::cout << easyfind(intLst, 40) << std::endl;
		std::cout << easyfind(intLst, 50) << std::endl;
	}
	catch (std::exception & exception)
	{
		std::cout << exception.what() << std::endl;
	}

	std::cout << "** Char List **" << std::endl;

	std::list<char> charLst;
	for (int i = 0; i <= 40; i++)
		charLst.push_back('0' + i);

	try
	{
		std::cout << (char) easyfind(charLst, '0') << std::endl;
		std::cout << (char) easyfind(charLst, '5') << std::endl;
		std::cout << (char) easyfind(charLst, '~') << std::endl;
	}
	catch (std::exception & exception)
	{
		std::cout << exception.what() << std::endl;
	}
	return (0);
}
