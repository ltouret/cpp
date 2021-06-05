/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 20:14:34 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/05 23:15:54 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr = &str;
	std::string		&ref = str;

	std::cout << "String    : " << str << std::endl;
	std::cout << "Pointer   : " << *ptr << std::endl;
	std::cout << "Reference : " << ref << std::endl;
	return (0);
}
