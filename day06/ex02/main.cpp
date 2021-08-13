/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/13 21:40:56 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base		*generate(void)
{
	srand(time(NULL));
	int rdm = rand() % 3;
	if (rdm == 0)
		return static_cast<Base *>(new A());
	else if (rdm == 1)
		return static_cast<Base *>(new B());
	else
		return static_cast<Base *>(new C());
}

void		identify(Base * p)
{
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Can not identify this type" << std::endl;
	return ;
}


void		identify(Base & p)
{
	try
	{
//		A & a = dynamic_cast<A &>(p);
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		//B & b = dynamic_cast<B &>(p);
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		//C & c = dynamic_cast<C &>(p);
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e){}
	return ;
}

int		main(void)
{
	Base*	first = generate();
	Base*	second = generate();

	identify(first);
	identify(*first);

	identify(second);
	identify(*second);
	return (0);
}
