/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/17 18:05:42 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <climits>

int		main(void)
{
	int		N = 10005;
	Span	sp(N);

	for (int i = 5; i < N ; i++)
		sp.addNumber(i);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span	so = sp;

	so.addNumber(1);
	std::cout << so.shortestSpan() << std::endl;
	std::cout << so.longestSpan() << std::endl;

	Span	si(sp);

	// Uncomment to break;
	//si.addNumber(3);
	si.addNumber(3);
	si.addNumber(3);
	si.addNumber(3);
	si.addNumber(3);
	si.addNumber(3);
	std::cout << si.shortestSpan() << std::endl;
	std::cout << si.longestSpan() << std::endl;

	Span	su(10);

	// Uncomment to break
	//su.rangeV(1);
	su.addNumber(3);
	su.rangeV(2);
	su.rangeV(4);
	su.rangeV(3);
	su.rangeV(0);

	std::cout << su.shortestSpan() << std::endl;
	std::cout << su.longestSpan() << std::endl;
	su.show();
	return (0);
}
