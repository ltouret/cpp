/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 22:26:07 by ltouret           #+#    #+#             */
/*   Updated: 2021/08/07 18:21:04 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string const		_target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const &_target);
	ShrubberyCreationForm(ShrubberyCreationForm const &to_cpy);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm		&operator=(ShrubberyCreationForm const &to_cpy);
	void				execute(Bureaucrat const &executor) const;
};

#endif
