/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/10 00:03:04 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl << "Usage: ./convert value" << std::endl;
		return (1);
	}
	double test = strtod(argv[1], NULL);
	std::cout << isdigit('a') << std::endl;
	std::cout << "str: " << argv[1] << " double: " << test << std::endl;
	return (0);
}
