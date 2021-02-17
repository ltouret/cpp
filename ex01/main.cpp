//header

#include <iostream>
#include "phonebook.hpp"

int		main()
{
	contact foo[8];
	int i;

	i = -1;
	foo[0].add();
	foo[1].add();
	while (foo[++i].init) // dis bs works when creating contacts, just prints if exists
		std::cout << "yooo" << std:endl;

	return 0;
}
