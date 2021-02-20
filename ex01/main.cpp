//header

#include <iostream>
#include <string.h>
#include <iomanip>
#include "phonebook.hpp"

int		main()
{
	contact		foo[8];
	std::string	command;
	int			i;

	i = 0;
	//while (foo[++i].init) // dis bs works when creating contacts, just prints if exists
	//	std::cout << "yooo" << std:endl;
	std::cout << "Welcome to my awesome phonebook." << std::endl;

	while (command != "EXIT")
	{
	std::cout << "Please enter ADD to add a contact, search to search a contact and EXIT to exit." << std::endl;
	std::getline(std::cin, command);
		if (command == "ADD") // add
		{
			if (i > 6)
				std::cout << "Already have 8 contacts" << std::endl;
			else
			{
				foo[i++].add();
				std::cout << "Contact added" << std::endl;
			}
		}
		else if (command == "SEARCH") // search
		{
			int	j;

			j = -1;
			std::string field_name[3] = // send dis bs to class contact
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
			while (foo[++j].is_init()) // dis bs works when creating contacts, just prints if exists
			{
				//std::cout << std::setw(10) << "index" << j << std::endl;
				foo[j].show_four(j);
			}
			// add here to ask what index and then show all of that index
			while (strchr("12345678", command[0]) == 0) //use some bs with string command[0] will break if a4
			{
				int	num;

				std::cout << "Please enter an index to show" << std::endl;
				std::getline(std::cin, command);
				num = std::stoi(command);
				//std::cout << "got it " << j << std::endl;
				foo[num].show_all(); // add protection if doenst exist and more than 8
			}
		}
		else if (command == "EXIT") // exit
			return 0;
	}
	return 0;
}
