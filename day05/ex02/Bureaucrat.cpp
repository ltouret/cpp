/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/04 12:05:01 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, short grade):
_name(name),
_grade(grade)
{
	if (this->_grade <= 0)
		throw (GradeTooHighException());
	if (this->_grade > 150)
		throw (GradeTooLowException());
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& to_cpy):
_name(to_cpy._name)
{
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &to_cpy)
{
	if (this != &to_cpy)
		this->_grade= to_cpy._grade;
	return (*this);
}

std::string const	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

short				Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void				Bureaucrat::upgrade(void)
{
	if (this->_grade - 1 <= 0)
		throw(GradeTooHighException());
	this->_grade--;
	return ;
}

void				Bureaucrat::downgrade(void)
{
	if (this->_grade + 1 > 150)
		throw(GradeTooLowException());
	this->_grade++;
	return ;
}

void				Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << "<" << this->_name << "> signs <" << f.getName() << ">" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "<" << this->_name << "> cannot sign <"
			<< f.getName() << "> because <"
			<< e.what() << ">"
		<< std::endl;
	}
	return ;
}

void	Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << "<" << this->_name << "> executes <" << form.getName() << ">" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "<" << this->_name << "> cannot execute <"
			<< form.getName() << "> because <"
			<< e.what() << ">"
			<< std::endl;
	}
	return ;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (out);
}
