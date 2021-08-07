/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/07 13:53:47 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &name, short const signGrade, short const execGrade):
_name(name),
_signGrade(signGrade),
_execGrade(execGrade),
_isSigned(false)
{
	if (this->_signGrade <= 0 || this->_execGrade <= 0)
		throw (GradeTooHighException());
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw (GradeTooLowException());
	return ;
}

Form::Form(Form const& to_cpy):
_name(to_cpy._name),
_signGrade(to_cpy._signGrade),
_execGrade(to_cpy._execGrade)
{
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Form::~Form(void)
{
	return ;
}

Form				&Form::operator=(Form const &to_cpy)
{
	if (this != &to_cpy)
		this->_isSigned = to_cpy._isSigned;
	return (*this);
}

std::string const		&Form::getName(void) const
{
	return (this->_name);
}

short				Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

short				Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

bool				Form::getSign(void) const
{
	return (this->_isSigned);
}

void				Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw (GradeTooLowException());
	if (this->_isSigned == true)
		throw (AlreadySignedException());
	this->_isSigned = true;
	return ;
}

std::ostream &operator<<(std::ostream &out, Form &src)
{
	out << "<" <<  std::boolalpha
		<< src.getName() << "> form grade needed to sign <"
		<< src.getSignGrade() << "> grade needed to execute <"
		<< src.getExecGrade() << "> signature status <"
		<< src.getSign() << ">"
	<< std::endl;
	return out;
}
