//header

#include <iostream>
#include <iomanip>
#include <ctype.h>
#include "phonebook.hpp"

contact::contact(void) // how to check if contact exists
{
	init = 0;
}

bool	contact::is_init(void)
{
	return (this->init);
}

void	contact::add(void)
{
	this->init = 1; // how to check if contact exists
	int	i;
	std::string field_name[11] = // send dis bs to class contact
	{"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email adress",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"};

	i = -1;
	while (++i < 11)
	{
		std::cout << "Please add the " << field_name[i] << " of the contact" << std::endl;
		std::getline(std::cin, this->fields[i]); // use dis or spaces
		//std::cin >> this->fields[i];
	}
	//std::cout << "You entered this contact info:" << std::endl; 
	//std::cout << this->fields[0] << std::endl;
}

/*
void	contact::search(void)
{

}
*/

void	contact::show_four(int index)
{
	int			i;
	std::string	field_name[3] = // send dis bs to class contact
	{"first name",
	"last name",
	"nickname"};

	i = -1;
	std::cout << std::setw(10) << index << "|";
	while (++i < 3)
	{
		if (this->fields[i].length() > 10)
			std::cout << std::setw(9) << this->fields[i].substr(0,9) << ".";
		else
			std::cout << std::setw(10) << this->fields[i]; 
		if (i < 2)
			std::cout << "|";
	}
	std::cout << std::endl;
}

void	contact::show_all(void)
{
	int	i;
	std::string field_name[11] = // send dis bs to class contact
	{"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email adress",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"};

	i = -1;
	while (++i < 11)
	{
		std::cout << field_name[i] << ": " << this->fields[i] << std::endl; 
	}
}
