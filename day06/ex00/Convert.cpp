/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/13 19:46:50 by ltouret          ###   ########.fr       */
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
		this->_input = to_cpy._input;
	return (*this);
}

	// ---- Check ---- //

bool			Convert::checkChar(void) const
{
	std::string	inp = this->_input;

	if (inp.length() == 1)
	{
		if (isprint(inp[0]) == false)
		{
			std::cout << "non-displayable char, undefined behavior." << std::endl;
			return (false);
		}
		else
			return (true);
	}
	return (false);
}

bool			Convert::checkInt(void) const
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

bool			Convert::checkFloat(void) const
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

bool			Convert::checkDouble(void) const
{
	std::string	inp = this->_input;
	size_t		i = 0;
	bool		hasDot = false;

	if (inp == "inf" || inp == "-inf" || inp == "+inf" || inp == "nan")
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

bool			Convert::checkType(void) const
{
	if (this->checkChar() == false && this->checkInt() == false &&
		this->checkFloat() == false && this->checkDouble() == false)
		return (false);
	else
		return (true);
}

	// ---- Convert ---- //	

void			Convert::convertChar(void) const
{
	std::string	inp = this->_input;
	std::cout << "char: ";

	if (inp == "inf" || inp == "-inf" || inp == "+inf" || inp == "nan" || inp == "inff" || inp == "-inff" || inp == "+inff" || inp == "nanf")
		std::cout << "impossible" << std::endl;
	else if (inp.length() == 1 && isdigit(inp[0]) == false)
	{
		if (isprint(inp[0]) == false)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << static_cast<char>(inp[0]) << std::endl;
	}
	else
	{
		double inpResult = strtod(inp.c_str(), NULL);
		if ((errno == ERANGE && (inpResult == -HUGE_VAL || inpResult == HUGE_VAL))
			|| inpResult > 127 || inpResult < 0)
			std::cout << "impossible" << std::endl;
		else if (isprint(static_cast<char>(inpResult)) == false)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << static_cast<char>(inpResult) << std::endl;
	}
	return ;
}

void			Convert::convertInt(void) const
{
	std::string	inp = this->_input;
	std::cout << "int: ";

	if (inp == "inf" || inp == "-inf" || inp == "+inf" || inp == "nan" || inp == "inff" || inp == "-inff" || inp == "+inff" || inp == "nanf")
		std::cout << "impossible" << std::endl;
	else if (inp.length() == 1 && isdigit(inp[0]) == false)
		std::cout << static_cast<int>(inp[0]) << std::endl;
	else
	{
		double inpResult = strtod(inp.c_str(), NULL);
		if ((errno == ERANGE && (inpResult == -HUGE_VAL || inpResult == HUGE_VAL))
			|| inpResult > std::numeric_limits<int>::max() ||
				inpResult < std::numeric_limits<int>::min())
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(inpResult) << std::endl;
	}
	return ;
}

void			Convert::convertFloat(void) const
{
	std::string	inp = this->_input;
	std::cout << "float: ";

	if (inp == "inf" || inp == "-inf" || inp == "+inf" || inp == "nan")
		std::cout << inp << "f" << std::endl;
	else if (inp == "inff" || inp == "-inff" || inp == "+inff" || inp == "nanf")
		std::cout << inp << std::endl;
	else if (inp.length() == 1 && isdigit(inp[0]) == false)
		std::cout << std::setprecision(1) << std::fixed << static_cast<float>(inp[0]) << "f" << std::endl;
	else
	{
		double inpResult = strtod(inp.c_str(), NULL);
		if ((errno == ERANGE && (inpResult == -HUGE_VAL || inpResult == HUGE_VAL))
			&& inpResult > FLT_MAX && inpResult < FLT_MIN)
			std::cout << "impossible" << std::endl;	
		else
			std::cout << std::setprecision(1) << std::fixed << static_cast<float>(inpResult) << "f" << std::endl;
	}
	return ;
}

void			Convert::convertDouble(void) const
{
	std::string	inp = this->_input;
	std::cout << "double: ";

	if (inp == "inf" || inp == "-inf" || inp == "+inf" || inp == "nan")
		std::cout << inp << std::endl;
	else if (inp == "inff" || inp == "-inff" || inp == "+inff" || inp == "nanf")
		std::cout << inp.substr(0, inp.length() - 1) << std::endl;
	else if (inp.length() == 1 && isdigit(inp[0]) == false)
		std::cout << std::setprecision(1) << std::fixed << static_cast<double>(inp[0]) << std::endl;
	else
	{
		double inpResult = strtod(inp.c_str(), NULL);
		if (errno == ERANGE && (inpResult == -HUGE_VAL || inpResult == HUGE_VAL))
			std::cout << "impossible" << std::endl;
		else
			std::cout << std::setprecision(1) << std::fixed << static_cast<double>(inpResult) << std::endl;
	}
	return ;
}
