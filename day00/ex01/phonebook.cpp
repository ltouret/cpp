//header

#include <iostream>
#include <iomanip>
#include <ctype.h>
#include "phonebook.hpp"

contact::contact(void)
{
	init = 0;
}

bool	contact::is_init(void)
{
	return (this->init);
}

void	contact::add(void)
{
	int	i;

	i = -1;
	this->init = 1;
	std::string field_name[11] =
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

	while (++i < 11)
	{
		std::cout << "Please add the " << field_name[i] << " of the contact" << std::endl;
		std::getline(std::cin, this->fields[i]);
	}
}

void	contact::show_four(int index)
{
	int			i;
	std::string	field_name[3] =
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
	std::string field_name[11] =
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
		std::cout << field_name[i] << ": " << this->fields[i] << std::endl; 
}
