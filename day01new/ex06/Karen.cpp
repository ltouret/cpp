/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:50:22 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/28 14:18:34 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	return;
}

Karen::~Karen(void)
{
	return;
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl; 
	return ;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;  
	return ;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ] I find it unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}

void	Karen::unknown(void)
{
	std::cout << "[ Probably complaining about insignificant problems ] I I I I ..." << std::endl;
	return ;
}

void	Karen::complain(std::string level)
{
	int				i = 0;
	std::string		tab[4] ={"DEBUG", "INFO", "WARNING", "ERROR"};
	void			(Karen::*funcTab[])(void) = {&Karen::debug, &Karen::info, &Karen::warning,
		&Karen::error, &Karen::unknown};

	while (i < 4)
	{
		if (level == tab[i])
		{
				(this->*funcTab[i])();
				return ;
		}
		i++;
	}
	(this->*funcTab[i])();
}
