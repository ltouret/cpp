/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:38:58 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/28 19:01:43 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./Karen-filter 'Arg'" << std::endl;
		return 0;
	}

	Karen		Karen;
	int			i = 0;
	std::string	level = argv[1];
	std::string	tab[4] ={"DEBUG","INFO","WARNING","ERROR"};

	while (i < 4)
	{
		if (level == tab[i])
			break;
		i++;
	}

	switch (i)
	{
		case 0 :
			Karen.complain("DEBUG");
		case 1 :
			Karen.complain("INFO");
		case 2 :
			Karen.complain("WARNING");
		case 3 :
			Karen.complain("ERROR");
			break;
		default:
			Karen.complain("UNKNOWN");
	}
	return 0;
}
