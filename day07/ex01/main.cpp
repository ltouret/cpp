/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:13:49 by ltouret           #+#    #+#             */
/*   Updated: 2021/09/04 19:37:01 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	show(T &x)
{
	std::cout << x << std::endl;
	return ;
}

int		main(void)
{
	int					a[4] = {0,1,2,3};
	char				b[6] = "43210";
	std::string			c[4] = {"how", "are", "you", "?"};
	const std::string	d[4] = {"I", "am", "fine", "!"};

	std::cout << "A:" << std::endl;
	iter(a, 4, show);
	std::cout << std::endl;

	std::cout << "B:" << std::endl;
	iter(b, 6, show);
	std::cout << std::endl;

	std::cout << "C:" << std::endl;
	iter(c, 4, show);
	std::cout << std::endl;

	std::cout << "D:" << std::endl;
	iter(d, 4, show);
	return (0);
}
