/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/16 11:47:29 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class ElemNotFound: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Element not found";
	}
};

template <typename T>
int	easyfind(T &cont, int n)
{
	typename T::const_iterator	iter;

	iter = std::find(cont.begin(), cont.end(), n);
	if (iter == cont.end())
		throw (ElemNotFound());
	return (*iter);
}

#endif
