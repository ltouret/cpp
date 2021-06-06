/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:36:35 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/06 15:55:43 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

int		main()
{
	contact		foo[8];
	std::string	command;
	int			i;

	i = 0;
	std::cout << "Welcome to my awesome phonebook." << std::endl;
	while (command != "EXIT")
	{
		std::cout << "Please enter ADD to add a contact, SEARCH to search a contact and EXIT to exit." << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			if (i > 7)
				std::cout << "Already have 8 contacts" << std::endl;
			else
			{
				foo[i++].add();
				std::cout << "Contact added" << std::endl;
			}
		}
		else if (command == "SEARCH")
		{
			int	j;

			j = -1;
			std::string field_name[3] =
			{"first name",
			"last name",
			"nickname"};

			std::cout << std::setw(10) << "index" << "|";
			while (++j < 3)
			{
				std::cout << std::setw(10) << field_name[j];
				if (j < 2)
					std::cout << "|";
			}
			std::cout << std::endl;
			j = -1;
			while (foo[++j].is_init() && j < 8)
			{
				foo[j].show_four(j);
			}
			while (true)
			{
				int			num;

				num = -1;
				while (foo[++num].is_init() == 0);
				if (num == 8)
					{
						std::cout << "No contacts added, please add some before searching." << std::endl;
						break;
					}
				std::cout << "Please enter an index to show, from 0 - 7" << std::endl;
				std::getline(std::cin, command);
				if (command != "0" && command != "1" && command != "2" &&
						command != "3" && command != "4" && command != "5" &&
						command != "6" && command != "7")
				{
					std::cout << "Please enter a correct index" << std::endl;
					continue;
				}
				num = std::stoi(command);
				if (foo[num].is_init() == 0)
				{
					std::cout << "Please enter a correct index" << std::endl;
					continue;
				}
				foo[num].show_all();
				break;
			}
		}
	}
	return 0;
}
