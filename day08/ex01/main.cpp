/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/16 23:20:46 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void)
{
	Span sp(101);

	for (int i = 1; i < 101; i++)
		sp.addNumber(i);
	//sp.addNumber(5);
	//std::cout << sp.getSize() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	return (0);
}
