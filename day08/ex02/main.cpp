/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/09/21 01:32:35 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int		main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Last elemented inserted in Mstack: " << mstack.top() << std::endl;

	mstack.pop(); // 17 popped

	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	// Print each elem in LIFO
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	std::cout << "copy size: " << s.size() << std::endl;
	std::cout << "original size: "<< mstack.size() << std::endl;

	MutantStack<int>::reverse_iterator it_reverse = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite_reverse = mstack.rend();

	// changing 0 (last elem) to 777
	*it_reverse = 777;

	while(it_reverse != ite_reverse)
	{
		std::cout << *it_reverse << std::endl;
		++it_reverse;
	}
	return (0);
}
