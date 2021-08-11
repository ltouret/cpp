/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/11 13:39:10 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
	return ;
}

Convert::Convert(std::string input):
_input(input)
{
	return ;
}

Convert::Convert(Convert const& to_cpy)
{
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Convert::~Convert(void)
{
	return ;
}

Convert			&Convert::operator=(Convert const &to_cpy)
{
	if (this != &to_cpy)
		this->_input= to_cpy._input;
	return (*this);
}

bool			Convert::checkChar(void)
{
	std::string	inp = this->_input;

	if (inp.length() == 1)
	{
		if (isprint(inp[0]) == false)
			return (false);
		else
			return (true);
	}
	return (false);
}

bool			Convert::checkInt(void)
{
	std::string	inp = this->_input;
	size_t		i = 0;

	if (inp[i] == '+' || inp[i] == '-')
		i++;

	for (; i < inp.length(); i++)
	{
		if (isdigit(inp[i]) == false)
			return (false);
	}
	return (true);
}

bool			Convert::checkFloat(void)
{
	std::string	inp = this->_input;
	size_t		i = 0;
	bool		hasF = false;
	bool		hasDot = false;

	if (inp == "inff" || inp == "-inff" || inp == "+inff" || inp == "nanf")
		return (true);

	if (inp[inp.length() - 1] != 'f')
		return (false);

	if (inp[i] == '+' || inp[i] == '-')
		i++;

	for (; i < inp.length(); i++)
	{
		if (isdigit(inp[i]) == false && inp[i] != 'f' && inp[i] != '.')
			return (false);
		if (inp[i] == '.' && hasDot)
			return (false);
		else if (inp[i] == '.')
			hasDot = true;
		if (inp[i] == 'f' && hasF)
			return (false);
		else if (inp[i] == 'f')
			hasF = true;
	}
	if (hasDot == false)
		return (false);
	return (true);
}

bool			Convert::checkDouble(void)
{
	std::string	inp = this->_input;
	size_t		i = 0;
	bool		hasDot = false;

	if (inp == "inf" || inp == "-inff" || inp == "+inff" || inp == "nanf")
		return (true);

	if (inp[i] == '+' || inp[i] == '-')
		i++;

	for (; i < inp.length(); i++)
	{
		if (isdigit(inp[i]) == false && inp[i] != '.')
			return (false);
		if (inp[i] == '.' && hasDot)
			return (false);
		else if (inp[i] == '.')
			hasDot = true;
	}
	if (hasDot == false)
		return (false);
	return (true);
}

bool			Convert::checkType(void)
{
	if (this->checkChar() == false && this->checkInt() == false &&
		this->checkFloat() == false && this->checkDouble() == false)
		return (false);
	else
		return (true);
}