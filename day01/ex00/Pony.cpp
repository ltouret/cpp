/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:42:08 by ltouret           #+#    #+#             */
/*   Updated: 2021/06/03 19:22:36 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "Pony is alive!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony died" << std::endl;
}

void	Pony::show(void)
{
	std::cout << "Pony name: "<< name << ", Pony color: " << color << std::endl;
}

void	Pony::trot(void)
{
	std::cout << "Pony is trotting" << std::endl;
}

void	Pony::set_name(std::string name)
{
	this->name = name;
}

void	Pony::set_color(std::string color)
{
	this->color= color;
}
