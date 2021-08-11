/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/11 13:15:02 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl << "Usage: ./convert 'arg'" << std::endl;
		return (1);
	}

	Convert me(argv[1]);

	if (me.checkType() == false)
	{
		std::cout << "Wrong type of argument" << std::endl << "Usage: ./convert 'char, int, float, double arg'" << std::endl;
		return (1);
	}

	//double test = strtod(argv[1], NULL);
	//std::cout << isdigit('a') << std::endl;
	//std::cout << "str: " << argv[1] << " double: " << test << std::endl;
	return (0);
}
