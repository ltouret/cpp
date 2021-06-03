/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:51:01 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/03 19:25:56 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void		ponyOnTheStack(void)
{
	Pony	pony;

	pony.set_name("Stack");
	pony.set_color("White");
	pony.show();
	pony.trot();
}

void		ponyOnTheHeap(void)
{
	Pony	*pony;

	pony = new Pony;
	pony->set_name("Heap");
	pony->set_color("Red");
	pony->show();
	pony->trot();
	delete(pony);
}

int			main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
}
