/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/14 21:01:24 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
	return ;
}

template<typename T>
T min(T const &x, T const &y)
{
	return (x >= y) ? y : x;
}

template<typename T>
T max(T const &x, T const &y)
{
	return (x <= y) ? y : x;
}

#endif
