/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/09/20 22:23:15 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void)
{
	int		N = 10005;
	Span	sp(N);
	Span	sh(15);
	std::vector<int> hey;

	hey.push_back(-1);
	hey.push_back(1);
	hey.push_back(2);

	sh.rangeV(hey.begin(), hey.end());
	//sh.show();

	sh.addNumber(9);
	sh.addNumber(1);
	sh.addNumber(8);
	sh.addNumber(3);
	sh.addNumber(15);

	std::cout << sh.shortestSpan() << std::endl;
	std::cout << sh.longestSpan() << std::endl;

	for (int i = 5; i < N ; i++)
		sp.addNumber(i);

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
	return (0);
}
