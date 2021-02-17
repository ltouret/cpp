//header

#include <iostream>
#include <ctype.h>
#include "phonebook.hpp"

contact::contact(void) // how to check if contact exists
{
	init = 0;
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
	std::cout << "You entered this contact info:" << std::endl; 
	i = -1;
	while (++i < 11)
	{
		std::cout << field_name[i] << ": " << fields[i] << std::endl; 
	}
	//std::cout << this->fields[0] << std::endl;
}

/*
void	contact::search(void)
{

}
*/
