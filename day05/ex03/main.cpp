/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:30:24 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/09 14:31:28 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat bob("Bob", 2);
	Bureaucrat deustach("Deustach", 149);
	Bureaucrat marco("Marco", 70);

	std::cout << std::endl << "== Try to sign form : ==" << std::endl;
	PresidentialPardonForm pass("Michel");
	RobotomyRequestForm rob("Flignoti");
	ShrubberyCreationForm tree("Tree");
	RobotomyRequestForm notSigned("NotSigned");

	deustach.signForm(pass);
	std::cout << pass;
	bob.signForm(pass);
	std::cout << pass;
	bob.signForm(pass);
	bob.signForm(rob);
	marco.signForm(tree);

	std::cout << std::endl << "== Try to execute form : ==" << std::endl;

	// uncomment to check exceptions
	pass.execute(bob);
	//pass.execute(deustach);
	rob.execute(bob);
	rob.execute(bob);
	marco.executeForm(tree);
	marco.executeForm(tree);
	//marco.executeForm(notSigned);
	//notSigned.execute(marco);
	return (0);
}
