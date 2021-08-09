/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:28:39 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/09 17:56:40 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const& to_cpy)
{
	if (this != &to_cpy)
		*this = to_cpy;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern			&Intern::operator=(Intern const &to_cpy)
{
	if (this != &to_cpy)
		return (*this);
	return (*this);
}

Form			*Intern::makePresidentialPardon(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form			*Intern::makeRobotomyRequest(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form			*Intern::makeShrubberyCreation(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form			*Intern::makeForm(std::string const &form, std::string const &target)
{
	typedef Form* (Intern::*createForm)(std::string const &target);
	createForm	array[3] = {&Intern::makePresidentialPardon, &Intern::makeRobotomyRequest, &Intern::makeShrubberyCreation};
	std::string	type[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (type[i] == form)
		{
			std::cout << "Intern create " << type[i] << " form" << std::endl;
			return (this->*array[i])(target);
		}
	}
	std::cout << "Intern cannot create <" << form << ">, unknown form." << std::endl;
	return NULL;
}
