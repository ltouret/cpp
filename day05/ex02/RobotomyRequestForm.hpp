/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/07 18:23:21 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string const		_target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const &_target);
	RobotomyRequestForm(RobotomyRequestForm const &to_cpy);
	~RobotomyRequestForm(void);
	RobotomyRequestForm		&operator=(RobotomyRequestForm const &to_cpy);
	void				execute(Bureaucrat const &executor) const;
};

#endif
