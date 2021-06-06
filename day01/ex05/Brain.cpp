/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:20:40 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/06 15:47:12 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Brain.hpp"

std::string		Brain::identify(void) const
{
	std::stringstream	s;
	std::string			str;

	s << this;
	str = s.str();

	for (std::string::iterator p = str.begin() + 2; str.end() != p; ++p)
		*p = toupper(*p);

	return (str);
}
