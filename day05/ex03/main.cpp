/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:30:24 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/09 18:04:45 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat	Zafod("Zafod", 1);
	Intern		slave;
	Form*		test;

	test = slave.makeForm("false", "nothing");

	for (int i = 0; i < 3; i++)
	{
		switch (i)
		{
			case 0 : test = slave.makeForm("presidential pardon", "someone important");
				break;
			case 1 : test = slave.makeForm("robotomy request", "slave");
				break;
			case 2 : test = slave.makeForm("shrubbery creation", "Tree");
				break;
		}
		Zafod.signForm(*test);
		Zafod.executeForm(*test);
		delete test;
	}
	return (0);
}
