/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/07 18:30:46 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream> // erase me

PresidentialPardonForm::PresidentialPardonForm(void) :
Form("presidential pardon", 25, 5),
_target("Random")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
Form("presidential pardon", 25, 5),
_target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &to_cpy):
Form(to_cpy.getName(), to_cpy.getSignGrade(), to_cpy.getExecGrade()),
_target(to_cpy._target)
{
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm			&PresidentialPardonForm::operator=(PresidentialPardonForm const &to_cpy)
{
	if (this != &to_cpy)
		this->Form::operator=(to_cpy);
	return (*this);
}

// change this to the stuff that needs to be done
void					PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::string		tmp(this->_target + "_shrubbery");
	std::ofstream		os(tmp.c_str());

	os << 
		"             .o00o" << std::endl
		<< "           o000000oo" << std::endl
		<< "           o000000oo" << std::endl
		<< "          00000000000o" << std::endl
		<< "         00000000000000" << std::endl
		<< "      oooooo  00000000  o88o" << std::endl
		<< "   ooOOOOOOOoo  ```''  888888" << std::endl
		<< " OOOOOOOOOOOO'.qQQQQq. `8888'" << std::endl
		<< "oOOOOOOOOOO'.QQQQLQQQQQ/.88'" << std::endl
		<< "OOOOOOOOOO'.QQQQLTLQQQ/ /q" << std::endl
		<< " OOOOOOOOO QQQQQQLQQQ/ /QQ" << std::endl
		<< "   OOOOOOOOO `QQQQQQ/ /QQ'" << std::endl
		<< "     OO:F_P:O `QQQ/  /Q'" << std::endl
		<< "        \\\\. \\ |  // |" << std::endl
		<< "        d\\ \\\\\\|_////" << std::endl
		<< "        qP| \\ _' `|Ob" << std::endl
		<< "           \\  / \\  \\Op" << std::endl
		<< "           |  | O| |" << std::endl
		<< "   _       /\\. \\_/ /\\" << std::endl
		<< "    `---__/|_\\   //|  __" << std::endl
		<< "          `-'  `-'`-'-'"
	<< std::endl;

	os.close();
	return ;
}
