/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/09 17:49:37 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern &to_cpy);
	~Intern(void);
	Intern				&operator=(const Intern &to_cpy);
	Form				*makeForm(std::string const &form, std::string const &target);
	Form*				makePresidentialPardon(std::string const &target);
	Form*				makeRobotomyRequest(std::string const &target);
	Form*				makeShrubberyCreation(std::string const &target);
};

#endif
