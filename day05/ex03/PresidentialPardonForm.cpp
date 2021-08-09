/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/09 13:53:43 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

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

void					PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->_target << " has been forgiven by Zafod Beeblebrox!" << std::endl;
	return ;
}
