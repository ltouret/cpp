/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/09 13:52:14 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) :
Form("robotomy request", 72, 45),
_target("Random")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
Form("robotomy request", 72, 45),
_target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &to_cpy):
Form(to_cpy.getName(), to_cpy.getSignGrade(), to_cpy.getExecGrade()),
_target(to_cpy._target)
{
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm			&RobotomyRequestForm::operator=(RobotomyRequestForm const &to_cpy)
{
	if (this != &to_cpy)
		this->Form::operator=(to_cpy);
	return (*this);
}

void					RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "* Some drill noise *" << std::endl << "<" << this->_target << ">";
	srand(time(NULL));
	bool trueFalse = (rand() % 100) < 50;
	if (trueFalse)
		std::cout <<  this->_target << " has been succesfully ROBOTOMIZED !!!" << std::endl;
	else
		std::cout << this->_target << "'s robotomization has failed..." << std::endl;

	return ;
}
