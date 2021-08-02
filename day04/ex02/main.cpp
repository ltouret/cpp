/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:29:17 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/02 14:30:08 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassCat.hpp"
#include "ClassDog.hpp"

int	main(void)
{
	//Animal *random = new Animal();
	Animal* cat = new Cat();

	std::cout << "Uncomment to break it" << std::endl;

	delete cat;
	return 0;
}
