/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 20:14:34 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/27 20:26:23 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "String    : " << &string << std::endl;
	std::cout << "Pointer   : " << stringPTR << std::endl;
	std::cout << "Reference : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "String    : " << string << std::endl;
	std::cout << "Pointer   : " << *stringPTR << std::endl;
	std::cout << "Reference : " << stringREF << std::endl;
	return (0);
}
